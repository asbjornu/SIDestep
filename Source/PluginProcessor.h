
#pragma once
#include <JuceHeader.h>
#include "Listeners/ListenerInitializer.h"
class SIDestep;
class ExportManager;
class LiveMode;
class PatchEditor;
class ParameterProcessor;
// ReSharper disable once CppInconsistentNaming
class MidiProcessor;
class SharedProperties;

class SIDestepAudioProcessor final : public AudioProcessor
{
public:
    SIDestepAudioProcessor ();

    SIDestepAudioProcessor (
            SIDestepAudioProcessor&& other
            ) = delete;

    ~SIDestepAudioProcessor () override;

    auto
        operator= (
                SIDestepAudioProcessor&& other
                ) -> SIDestepAudioProcessor& = delete;

    void
        prepareToPlay (
                double sample_rate
              , int    samples_per_block
                ) override;

    void
        releaseResources () override;
#ifndef JucePlugin_PreferredChannelConfigurations
    bool setPreferredBusArrangement (bool isInput, int bus, const AudioChannelSet& preferredSet) override;
#endif
    void
        processBlock (
                AudioSampleBuffer& buffer
              , MidiBuffer&        midi_messages
                ) override;

    auto
        createEditor () -> AudioProcessorEditor* override;

    auto
        hasEditor () const -> bool override;

    auto
        getName () const -> const String override;

    auto
        acceptsMidi () const -> bool override;

    auto
        producesMidi () const -> bool override;

    auto
        getTailLengthSeconds () const -> double override;

    auto
        getNumPrograms () -> int override;

    auto
        getCurrentProgram () -> int override;

    void
        setCurrentProgram (
                int index
                ) override;

    auto
        getProgramName (
                int index
                ) -> const String override;

    void
        changeProgramName (
                int           index
              , const String& new_name
                ) override;

    void
        getStateInformation (
                MemoryBlock& dest_data
                ) override;

    void
        setStateInformation (
                const void* data
              , int         size_in_bytes
                ) override;

    auto
        GetCore () const -> std::shared_ptr < SIDestep >;

private:
    // Keeping this as a shared resource pointer because it is static during
    // runtime, so all instances can refer to the same property set.
    SharedResourcePointer < SharedProperties > properties;
    std::shared_ptr < EventDispatcher >        dispatcher;
    std::shared_ptr < SIDestep >               core;
    std::shared_ptr < LiveMode >               liveMode;
    std::shared_ptr < PatchEditor >            patchEditor;
    std::shared_ptr < ParameterProcessor >     parameterProcessor;
    std::shared_ptr < MidiProcessor >          midiProcessor;

    //std::shared_ptr < ExportManager >          exportManager;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (
                                                  SIDestepAudioProcessor )
};
