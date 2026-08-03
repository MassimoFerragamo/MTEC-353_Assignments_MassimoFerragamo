cmake_minimum_required(VERSION 3.22)
project(ReadWriteAudioFile VERSION 1.0.0)
add_subdirectory(JUCE)
juce_add_console_app(ReadWriteAudioFile)
juce_generate_juce_header(ReadWriteAudioFile)
target_sources(ReadWriteAudioFile PRIVATE Main.cpp)
target_link_libraries(ReadWriteAudioFile
    PRIVATE
    juce::juce_core
    juce::juce_audio_formats
)
