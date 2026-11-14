#include "PluginProcessor.h"


#include "PluginEditor.h"


SIDestepAudioProcessorEditor::SIDestepAudioProcessorEditor (
        SIDestepAudioProcessor& processor
        )
    :
    AudioProcessorEditor (
                          &processor )
  , processor (
               processor )
{
    setSize (
             EDITOR_WIDTH
           , EDITOR_HEIGHT );
}

void
    SIDestepAudioProcessorEditor::paint (
            Graphics& g
            ) {}

void
    SIDestepAudioProcessorEditor::resized () {}
