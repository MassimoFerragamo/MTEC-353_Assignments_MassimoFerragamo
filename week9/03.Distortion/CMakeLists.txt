cmake_minimum_required(VERSION 3.22)
project(Distortion VERSION 1.0.0)
add_subdirectory(JUCE)
juce_add_console_app(Distortion)
juce_generate_juce_header(Distortion)
target_sources(Distortion PRIVATE Main.cpp)
target_link_libraries(Distortion 
	PRIVATE 
		juce::juce_core
		juce::juce_audio_formats
)