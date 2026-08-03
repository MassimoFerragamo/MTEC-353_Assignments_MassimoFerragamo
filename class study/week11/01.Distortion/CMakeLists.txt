cmake_minimum_required(VERSION 3.22)
project(Distortion VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# JUCE checkout lives in ./JUCE
add_subdirectory(JUCE)

# ---- Your plugin ----
juce_add_plugin(Distortion
    PLUGIN_MANUFACTURER_CODE Juce
    PLUGIN_CODE Dem0
    FORMATS AU VST3 Standalone
    PRODUCT_NAME "Distortion"
)

juce_generate_juce_header(Distortion)

target_sources(Distortion PRIVATE
    Source/PluginEditor.cpp
    Source/PluginProcessor.cpp
)

target_compile_definitions(Distortion
    PUBLIC
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0
        JUCE_VST3_CAN_REPLACE_VST2=0
)

target_link_libraries(Distortion
    PRIVATE
        juce::juce_audio_utils
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_lto_flags
        juce::juce_recommended_warning_flags
)

# ---- Install built plug-ins to user folders (macOS) ----
if(APPLE)
    # VST3
    set(VST3_USER_DIR "$ENV{HOME}/Library/Audio/Plug-Ins/VST3")
    add_custom_command(TARGET Distortion_VST3 POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory "${VST3_USER_DIR}"
        COMMAND ${CMAKE_COMMAND} -E copy_directory
                "$<TARGET_BUNDLE_DIR:Distortion_VST3>"
                "${VST3_USER_DIR}/Distortion.vst3"
        COMMENT "Installing Distortion.vst3 to ${VST3_USER_DIR}"
    )

    # AU (Component)
    set(AU_USER_DIR "$ENV{HOME}/Library/Audio/Plug-Ins/Components")
    add_custom_command(TARGET Distortion_AU POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory "${AU_USER_DIR}"
        COMMAND ${CMAKE_COMMAND} -E copy_directory
                "$<TARGET_BUNDLE_DIR:Distortion_AU>"
                "${AU_USER_DIR}/Distortion.component"
        COMMENT "Installing Distortion.component to ${AU_USER_DIR}"
    )
endif()

# ---- Add JUCE's AudioPluginHost and make it depend on your plug-in ----
# Path to the example host inside the JUCE repo you added above
add_subdirectory("${CMAKE_SOURCE_DIR}/JUCE/extras/AudioPluginHost"
                 "${CMAKE_BINARY_DIR}/AudioPluginHost")

# Build the plug-in before running the host so the latest bundle is installed
add_dependencies(AudioPluginHost Distortion_VST3 Distortion_AU)

# (Optional) pass a .filtergraph when launching from an IDE
# set(HOST_GRAPH "${CMAKE_SOURCE_DIR}/Distortion.filtergraph" CACHE FILEPATH "")
# set_property(TARGET AudioPluginHost PROPERTY VS_DEBUGGER_COMMAND_ARGUMENTS "${HOST_GRAPH}")
