cmake_minimum_required(VERSION 3.22)
project(AudioFileInfo VERSION 1.0.0)
add_subdirectory(JUCE)
juce_add_console_app(AudioFileInfo)
juce_generate_juce_header(AudioFileInfo)
target_sources(AudioFileInfo PRIVATE Main.cpp)
target_link_libraries(AudioFileInfo 
	PRIVATE 
		juce::juce_core
		juce::juce_audio_formats
)