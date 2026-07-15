cmake_minimum_required(VERSION 3.22)
project(DAFxTemplate VERSION 1.0.0)
add_subdirectory(JUCE)
juce_add_console_app(DAFxTemplate)
juce_generate_juce_header(DAFxTemplate)
target_sources(DAFxTemplate PRIVATE Main.cpp)
target_link_libraries(DAFxTemplate 
	PRIVATE 
		juce::juce_core
		juce::juce_audio_formats
)