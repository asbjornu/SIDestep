#pragma once


#include <JuceHeader.h>


#include "PluginProcessor.h"


class LiveMode;

class SIDestepAudioProcessorEditor final : public AudioProcessorEditor
{
public:
    explicit
        SIDestepAudioProcessorEditor (
                SIDestepAudioProcessor& processor
                );

    SIDestepAudioProcessorEditor (
            SIDestepAudioProcessorEditor&& other
            ) = delete;

    ~SIDestepAudioProcessorEditor () override = default;

    auto
        operator= (
                SIDestepAudioProcessorEditor&& other
                ) -> SIDestepAudioProcessorEditor& = delete;

    void
        paint (
                Graphics& g
                ) override;

    void
        resized () override;

private:
    static const int EDITOR_WIDTH  = 1024;
    static const int EDITOR_HEIGHT = 576;

    SIDestepAudioProcessor& processor;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (
                                                  SIDestepAudioProcessorEditor )
};
