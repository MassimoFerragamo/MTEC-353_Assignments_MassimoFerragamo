#include <JuceHeader.h>


int main(){


    //tell juce that you won't need a GUI
    // you need a utility object to get AudioDeviceManager to work 
    juce::ScopedJuceInitialiser_GUI guiInit;

    juce::AudioDeviceManager deviceManager; 

    //fetch avaliable audio device types
    const juce::OwnedArray<juce::AudioIODevice>& availableDevices = 
    deviceManager.getAvailableDeviceTypes():

    for(auto& deviceType: AudioIODeviceType *const & : availableDevices){
        //print out name of current device type
        std::cout << "Device Type: " << deviceType->getTypeName().toStdString << std::endl; 

        //list of input device names for this device type
        auto inputNames = deviceType->getDeviceNames(true);

        //list of output devices
        auto inputNames = deviceType->getDeviceNames(false);

    }
}