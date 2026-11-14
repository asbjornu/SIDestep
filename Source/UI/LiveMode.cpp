/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "../SIDProgram.h"
#include "Patches.h"
#include "SIDestepLookAndFeel.h"
//[/Headers]

#include "LiveMode.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
LiveMode::LiveMode (
        std::shared_ptr < EventDispatcher > dispatcher
        )
    :
    dispatcher (
                dispatcher ) 
{
    //[Constructor_pre] You can add your own custom stuff here..
    look = std::make_shared < SIDestepLookAndFeel > ();
    setLookAndFeel (
                    look . get() );
    armed = false;
    //[/Constructor_pre]

    volumeSlider . reset (
                          new Slider (
                                      "new slider" ) );
    addAndMakeVisible (
                       volumeSlider . get () );
    volumeSlider -> setRange (
                              0
                            , 15
                            , 1 );
    volumeSlider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    volumeSlider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    volumeSlider -> addListener (
                                 this );
    volumeSlider -> setBounds (
                               384
                             , 32
                             , 48
                             , 48 );
    volumeLabel . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "0" ) ) );
    addAndMakeVisible (
                       volumeLabel . get () );
    volumeLabel -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    volumeLabel -> setJustificationType (
                                         Justification::centred );
    volumeLabel -> setEditable (
                                false
                              , false
                              , false );
    volumeLabel -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    volumeLabel -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    volumeLabel -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    volumeLabel -> setBounds (
                              384
                            , 8
                            , 48
                            , 18 );
    patch1Slider . reset (
                          new Slider (
                                      "new slider" ) );
    addAndMakeVisible (
                       patch1Slider . get () );
    patch1Slider -> setRange (
                              1
                            , 2
                            , 1 );
    patch1Slider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    patch1Slider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    patch1Slider -> addListener (
                                 this );
    patch1Slider -> setBounds (
                               32
                             , 120
                             , 48
                             , 48 );
    attack1Slider . reset (
                           new Slider (
                                       "new slider" ) );
    addAndMakeVisible (
                       attack1Slider . get () );
    attack1Slider -> setRange (
                               0
                             , 15
                             , 1 );
    attack1Slider -> setSliderStyle (
                                     Slider::RotaryHorizontalVerticalDrag );
    attack1Slider -> setTextBoxStyle (
                                      Slider::NoTextBox
                                    , true
                                    , 80
                                    , 20 );
    attack1Slider -> addListener (
                                  this );
    attack1Slider -> setBounds (
                                144
                              , 120
                              , 48
                              , 48 );
    decay1Slider . reset (
                          new Slider (
                                      "new slider" ) );
    addAndMakeVisible (
                       decay1Slider . get () );
    decay1Slider -> setRange (
                              0
                            , 15
                            , 1 );
    decay1Slider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    decay1Slider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    decay1Slider -> addListener (
                                 this );
    decay1Slider -> setBounds (
                               224
                             , 120
                             , 48
                             , 48 );
    sustain1Slider . reset (
                            new Slider (
                                        "new slider" ) );
    addAndMakeVisible (
                       sustain1Slider . get () );
    sustain1Slider -> setRange (
                                0
                              , 15
                              , 1 );
    sustain1Slider -> setSliderStyle (
                                      Slider::RotaryHorizontalVerticalDrag );
    sustain1Slider -> setTextBoxStyle (
                                       Slider::NoTextBox
                                     , true
                                     , 80
                                     , 20 );
    sustain1Slider -> addListener (
                                   this );
    sustain1Slider -> setBounds (
                                 304
                               , 120
                               , 48
                               , 48 );
    release1Slider . reset (
                            new Slider (
                                        "new slider" ) );
    addAndMakeVisible (
                       release1Slider . get () );
    release1Slider -> setRange (
                                0
                              , 15
                              , 1 );
    release1Slider -> setSliderStyle (
                                      Slider::RotaryHorizontalVerticalDrag );
    release1Slider -> setTextBoxStyle (
                                       Slider::NoTextBox
                                     , true
                                     , 80
                                     , 20 );
    release1Slider -> addListener (
                                   this );
    release1Slider -> setBounds (
                                 384
                               , 120
                               , 48
                               , 48 );
    pitchBend1Slider . reset (
                              new Slider (
                                          "new slider" ) );
    addAndMakeVisible (
                       pitchBend1Slider . get () );
    pitchBend1Slider -> setRange (
                                  -100
                                , 100
                                , 1 );
    pitchBend1Slider -> setSliderStyle (
                                        Slider::RotaryHorizontalVerticalDrag );
    pitchBend1Slider -> setTextBoxStyle (
                                         Slider::NoTextBox
                                       , true
                                       , 80
                                       , 20 );
    pitchBend1Slider -> addListener (
                                     this );
    pitchBend1Slider -> setBounds (
                                   472
                                 , 120
                                 , 48
                                 , 48 );
    vibratoAmount1Slider . reset (
                                  new Slider (
                                              "new slider" ) );
    addAndMakeVisible (
                       vibratoAmount1Slider . get () );
    vibratoAmount1Slider -> setRange (
                                      0
                                    , 100
                                    , 1 );
    vibratoAmount1Slider -> setSliderStyle (
                                            Slider::RotaryHorizontalVerticalDrag );
    vibratoAmount1Slider -> setTextBoxStyle (
                                             Slider::NoTextBox
                                           , true
                                           , 80
                                           , 20 );
    vibratoAmount1Slider -> addListener (
                                         this );
    vibratoAmount1Slider -> setBounds (
                                       584
                                     , 120
                                     , 48
                                     , 48 );
    vibratoSpeed1Slider . reset (
                                 new Slider (
                                             "new slider" ) );
    addAndMakeVisible (
                       vibratoSpeed1Slider . get () );
    vibratoSpeed1Slider -> setRange (
                                     0
                                   , 100
                                   , 1 );
    vibratoSpeed1Slider -> setSliderStyle (
                                           Slider::RotaryHorizontalVerticalDrag );
    vibratoSpeed1Slider -> setTextBoxStyle (
                                            Slider::NoTextBox
                                          , true
                                          , 80
                                          , 20 );
    vibratoSpeed1Slider -> addListener (
                                        this );
    vibratoSpeed1Slider -> setBounds (
                                      664
                                    , 120
                                    , 48
                                    , 48 );
    pulseWidth1Slider . reset (
                               new Slider (
                                           "new slider" ) );
    addAndMakeVisible (
                       pulseWidth1Slider . get () );
    pulseWidth1Slider -> setRange (
                                   -100
                                 , 100
                                 , 1 );
    pulseWidth1Slider -> setSliderStyle (
                                         Slider::RotaryHorizontalVerticalDrag );
    pulseWidth1Slider -> setTextBoxStyle (
                                          Slider::NoTextBox
                                        , true
                                        , 80
                                        , 20 );
    pulseWidth1Slider -> addListener (
                                      this );
    pulseWidth1Slider -> setBounds (
                                    831
                                  , 120
                                  , 48
                                  , 48 );
    vibratoDelay1Slider . reset (
                                 new Slider (
                                             "new slider" ) );
    addAndMakeVisible (
                       vibratoDelay1Slider . get () );
    vibratoDelay1Slider -> setRange (
                                     0
                                   , 15
                                   , 1 );
    vibratoDelay1Slider -> setSliderStyle (
                                           Slider::RotaryHorizontalVerticalDrag );
    vibratoDelay1Slider -> setTextBoxStyle (
                                            Slider::NoTextBox
                                          , true
                                          , 80
                                          , 20 );
    vibratoDelay1Slider -> addListener (
                                        this );
    vibratoDelay1Slider -> setBounds (
                                      745
                                    , 120
                                    , 48
                                    , 48 );
    patch2Slider . reset (
                          new Slider (
                                      "new slider" ) );
    addAndMakeVisible (
                       patch2Slider . get () );
    patch2Slider -> setRange (
                              1
                            , 2
                            , 1 );
    patch2Slider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    patch2Slider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    patch2Slider -> addListener (
                                 this );
    patch2Slider -> setBounds (
                               32
                             , 208
                             , 48
                             , 48 );
    attack2Slider . reset (
                           new Slider (
                                       "new slider" ) );
    addAndMakeVisible (
                       attack2Slider . get () );
    attack2Slider -> setRange (
                               0
                             , 15
                             , 1 );
    attack2Slider -> setSliderStyle (
                                     Slider::RotaryHorizontalVerticalDrag );
    attack2Slider -> setTextBoxStyle (
                                      Slider::NoTextBox
                                    , true
                                    , 80
                                    , 20 );
    attack2Slider -> addListener (
                                  this );
    attack2Slider -> setBounds (
                                144
                              , 208
                              , 48
                              , 48 );
    decay2Slider . reset (
                          new Slider (
                                      "new slider" ) );
    addAndMakeVisible (
                       decay2Slider . get () );
    decay2Slider -> setRange (
                              0
                            , 15
                            , 1 );
    decay2Slider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    decay2Slider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    decay2Slider -> addListener (
                                 this );
    decay2Slider -> setBounds (
                               224
                             , 208
                             , 48
                             , 48 );
    sustain2Slider . reset (
                            new Slider (
                                        "new slider" ) );
    addAndMakeVisible (
                       sustain2Slider . get () );
    sustain2Slider -> setRange (
                                0
                              , 15
                              , 1 );
    sustain2Slider -> setSliderStyle (
                                      Slider::RotaryHorizontalVerticalDrag );
    sustain2Slider -> setTextBoxStyle (
                                       Slider::NoTextBox
                                     , true
                                     , 80
                                     , 20 );
    sustain2Slider -> addListener (
                                   this );
    sustain2Slider -> setBounds (
                                 304
                               , 208
                               , 48
                               , 48 );
    release2Slider . reset (
                            new Slider (
                                        "new slider" ) );
    addAndMakeVisible (
                       release2Slider . get () );
    release2Slider -> setRange (
                                0
                              , 15
                              , 1 );
    release2Slider -> setSliderStyle (
                                      Slider::RotaryHorizontalVerticalDrag );
    release2Slider -> setTextBoxStyle (
                                       Slider::NoTextBox
                                     , true
                                     , 80
                                     , 20 );
    release2Slider -> addListener (
                                   this );
    release2Slider -> setBounds (
                                 384
                               , 208
                               , 48
                               , 48 );
    pitchBend2Slider . reset (
                              new Slider (
                                          "new slider" ) );
    addAndMakeVisible (
                       pitchBend2Slider . get () );
    pitchBend2Slider -> setRange (
                                  -100
                                , 100
                                , 1 );
    pitchBend2Slider -> setSliderStyle (
                                        Slider::RotaryHorizontalVerticalDrag );
    pitchBend2Slider -> setTextBoxStyle (
                                         Slider::NoTextBox
                                       , true
                                       , 80
                                       , 20 );
    pitchBend2Slider -> addListener (
                                     this );
    pitchBend2Slider -> setBounds (
                                   472
                                 , 208
                                 , 48
                                 , 48 );
    vibratoAmount2Slider . reset (
                                  new Slider (
                                              "new slider" ) );
    addAndMakeVisible (
                       vibratoAmount2Slider . get () );
    vibratoAmount2Slider -> setRange (
                                      0
                                    , 100
                                    , 1 );
    vibratoAmount2Slider -> setSliderStyle (
                                            Slider::RotaryHorizontalVerticalDrag );
    vibratoAmount2Slider -> setTextBoxStyle (
                                             Slider::NoTextBox
                                           , true
                                           , 80
                                           , 20 );
    vibratoAmount2Slider -> addListener (
                                         this );
    vibratoAmount2Slider -> setBounds (
                                       584
                                     , 208
                                     , 48
                                     , 48 );
    vibratoSpeed2Slider . reset (
                                 new Slider (
                                             "new slider" ) );
    addAndMakeVisible (
                       vibratoSpeed2Slider . get () );
    vibratoSpeed2Slider -> setRange (
                                     0
                                   , 100
                                   , 1 );
    vibratoSpeed2Slider -> setSliderStyle (
                                           Slider::RotaryHorizontalVerticalDrag );
    vibratoSpeed2Slider -> setTextBoxStyle (
                                            Slider::NoTextBox
                                          , true
                                          , 80
                                          , 20 );
    vibratoSpeed2Slider -> addListener (
                                        this );
    vibratoSpeed2Slider -> setBounds (
                                      664
                                    , 208
                                    , 48
                                    , 48 );
    pulseWidth2Slider . reset (
                               new Slider (
                                           "new slider" ) );
    addAndMakeVisible (
                       pulseWidth2Slider . get () );
    pulseWidth2Slider -> setRange (
                                   -100
                                 , 100
                                 , 1 );
    pulseWidth2Slider -> setSliderStyle (
                                         Slider::RotaryHorizontalVerticalDrag );
    pulseWidth2Slider -> setTextBoxStyle (
                                          Slider::NoTextBox
                                        , true
                                        , 80
                                        , 20 );
    pulseWidth2Slider -> addListener (
                                      this );
    pulseWidth2Slider -> setBounds (
                                    831
                                  , 208
                                  , 48
                                  , 48 );
    vibratoDelay2Slider . reset (
                                 new Slider (
                                             "new slider" ) );
    addAndMakeVisible (
                       vibratoDelay2Slider . get () );
    vibratoDelay2Slider -> setRange (
                                     0
                                   , 15
                                   , 1 );
    vibratoDelay2Slider -> setSliderStyle (
                                           Slider::RotaryHorizontalVerticalDrag );
    vibratoDelay2Slider -> setTextBoxStyle (
                                            Slider::NoTextBox
                                          , true
                                          , 80
                                          , 20 );
    vibratoDelay2Slider -> addListener (
                                        this );
    vibratoDelay2Slider -> setBounds (
                                      745
                                    , 208
                                    , 48
                                    , 48 );
    patch3Slider . reset (
                          new Slider (
                                      "new slider" ) );
    addAndMakeVisible (
                       patch3Slider . get () );
    patch3Slider -> setRange (
                              1
                            , 2
                            , 1 );
    patch3Slider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    patch3Slider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    patch3Slider -> addListener (
                                 this );
    patch3Slider -> setBounds (
                               32
                             , 296
                             , 48
                             , 48 );
    attack3Slider . reset (
                           new Slider (
                                       "new slider" ) );
    addAndMakeVisible (
                       attack3Slider . get () );
    attack3Slider -> setRange (
                               0
                             , 15
                             , 1 );
    attack3Slider -> setSliderStyle (
                                     Slider::RotaryHorizontalVerticalDrag );
    attack3Slider -> setTextBoxStyle (
                                      Slider::NoTextBox
                                    , true
                                    , 80
                                    , 20 );
    attack3Slider -> addListener (
                                  this );
    attack3Slider -> setBounds (
                                144
                              , 296
                              , 48
                              , 48 );
    decay3Slider . reset (
                          new Slider (
                                      "new slider" ) );
    addAndMakeVisible (
                       decay3Slider . get () );
    decay3Slider -> setRange (
                              0
                            , 15
                            , 1 );
    decay3Slider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    decay3Slider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    decay3Slider -> addListener (
                                 this );
    decay3Slider -> setBounds (
                               224
                             , 296
                             , 48
                             , 48 );
    sustain3Slider . reset (
                            new Slider (
                                        "new slider" ) );
    addAndMakeVisible (
                       sustain3Slider . get () );
    sustain3Slider -> setRange (
                                0
                              , 15
                              , 1 );
    sustain3Slider -> setSliderStyle (
                                      Slider::RotaryHorizontalVerticalDrag );
    sustain3Slider -> setTextBoxStyle (
                                       Slider::NoTextBox
                                     , true
                                     , 80
                                     , 20 );
    sustain3Slider -> addListener (
                                   this );
    sustain3Slider -> setBounds (
                                 304
                               , 296
                               , 48
                               , 48 );
    release3Slider . reset (
                            new Slider (
                                        "new slider" ) );
    addAndMakeVisible (
                       release3Slider . get () );
    release3Slider -> setRange (
                                0
                              , 15
                              , 1 );
    release3Slider -> setSliderStyle (
                                      Slider::RotaryHorizontalVerticalDrag );
    release3Slider -> setTextBoxStyle (
                                       Slider::NoTextBox
                                     , true
                                     , 80
                                     , 20 );
    release3Slider -> addListener (
                                   this );
    release3Slider -> setBounds (
                                 384
                               , 296
                               , 48
                               , 48 );
    pitchBend3Slider . reset (
                              new Slider (
                                          "new slider" ) );
    addAndMakeVisible (
                       pitchBend3Slider . get () );
    pitchBend3Slider -> setRange (
                                  -100
                                , 100
                                , 1 );
    pitchBend3Slider -> setSliderStyle (
                                        Slider::RotaryHorizontalVerticalDrag );
    pitchBend3Slider -> setTextBoxStyle (
                                         Slider::NoTextBox
                                       , true
                                       , 80
                                       , 20 );
    pitchBend3Slider -> addListener (
                                     this );
    pitchBend3Slider -> setBounds (
                                   472
                                 , 296
                                 , 48
                                 , 48 );
    vibratoAmount3Slider . reset (
                                  new Slider (
                                              "new slider" ) );
    addAndMakeVisible (
                       vibratoAmount3Slider . get () );
    vibratoAmount3Slider -> setRange (
                                      0
                                    , 100
                                    , 1 );
    vibratoAmount3Slider -> setSliderStyle (
                                            Slider::RotaryHorizontalVerticalDrag );
    vibratoAmount3Slider -> setTextBoxStyle (
                                             Slider::NoTextBox
                                           , true
                                           , 80
                                           , 20 );
    vibratoAmount3Slider -> addListener (
                                         this );
    vibratoAmount3Slider -> setBounds (
                                       584
                                     , 296
                                     , 48
                                     , 48 );
    vibratoSpeed3Slider . reset (
                                 new Slider (
                                             "new slider" ) );
    addAndMakeVisible (
                       vibratoSpeed3Slider . get () );
    vibratoSpeed3Slider -> setRange (
                                     0
                                   , 100
                                   , 1 );
    vibratoSpeed3Slider -> setSliderStyle (
                                           Slider::RotaryHorizontalVerticalDrag );
    vibratoSpeed3Slider -> setTextBoxStyle (
                                            Slider::NoTextBox
                                          , true
                                          , 80
                                          , 20 );
    vibratoSpeed3Slider -> addListener (
                                        this );
    vibratoSpeed3Slider -> setBounds (
                                      664
                                    , 296
                                    , 48
                                    , 48 );
    pulseWidth3Slider . reset (
                               new Slider (
                                           "new slider" ) );
    addAndMakeVisible (
                       pulseWidth3Slider . get () );
    pulseWidth3Slider -> setRange (
                                   -100
                                 , 100
                                 , 1 );
    pulseWidth3Slider -> setSliderStyle (
                                         Slider::RotaryHorizontalVerticalDrag );
    pulseWidth3Slider -> setTextBoxStyle (
                                          Slider::NoTextBox
                                        , true
                                        , 80
                                        , 20 );
    pulseWidth3Slider -> addListener (
                                      this );
    pulseWidth3Slider -> setBounds (
                                    831
                                  , 296
                                  , 48
                                  , 48 );
    vibratoDelay3Slider . reset (
                                 new Slider (
                                             "new slider" ) );
    addAndMakeVisible (
                       vibratoDelay3Slider . get () );
    vibratoDelay3Slider -> setRange (
                                     0
                                   , 15
                                   , 1 );
    vibratoDelay3Slider -> setSliderStyle (
                                           Slider::RotaryHorizontalVerticalDrag );
    vibratoDelay3Slider -> setTextBoxStyle (
                                            Slider::NoTextBox
                                          , true
                                          , 80
                                          , 20 );
    vibratoDelay3Slider -> addListener (
                                        this );
    vibratoDelay3Slider -> setBounds (
                                      743
                                    , 296
                                    , 48
                                    , 48 );
    cutoffSlider . reset (
                          new Slider (
                                      "new slider" ) );
    addAndMakeVisible (
                       cutoffSlider . get () );
    cutoffSlider -> setRange (
                              0
                            , 2047
                            , 1 );
    cutoffSlider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    cutoffSlider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    cutoffSlider -> addListener (
                                 this );
    cutoffSlider -> setBounds (
                               32
                             , 384
                             , 48
                             , 48 );
    resonanceSlider . reset (
                             new Slider (
                                         "new slider" ) );
    addAndMakeVisible (
                       resonanceSlider . get () );
    resonanceSlider -> setRange (
                                 0
                               , 15
                               , 1 );
    resonanceSlider -> setSliderStyle (
                                       Slider::RotaryHorizontalVerticalDrag );
    resonanceSlider -> setTextBoxStyle (
                                        Slider::NoTextBox
                                      , true
                                      , 80
                                      , 20 );
    resonanceSlider -> addListener (
                                    this );
    resonanceSlider -> setBounds (
                                  32
                                , 472
                                , 48
                                , 48 );
    patch1Label . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "1" ) ) );
    addAndMakeVisible (
                       patch1Label . get () );
    patch1Label -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    patch1Label -> setJustificationType (
                                         Justification::centred );
    patch1Label -> setEditable (
                                false
                              , false
                              , false );
    patch1Label -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    patch1Label -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    patch1Label -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    patch1Label -> setBounds (
                              32
                            , 96
                            , 48
                            , 18 );
    attack1Label . reset (
                          new Label (
                                     "new label"
                                   , TRANS (
                                            "0" ) ) );
    addAndMakeVisible (
                       attack1Label . get () );
    attack1Label -> setFont (
                             Font (
                                   "C64 Pro"
                                 , 12.00f
                                 , Font::plain ) . withTypefaceStyle (
                                                                      "Regular" ) );
    attack1Label -> setJustificationType (
                                          Justification::centred );
    attack1Label -> setEditable (
                                 false
                               , false
                               , false );
    attack1Label -> setColour (
                               Label::textColourId
                             , Colour (
                                       0xff5090d0 ) );
    attack1Label -> setColour (
                               TextEditor::textColourId
                             , Colours::black );
    attack1Label -> setColour (
                               TextEditor::backgroundColourId
                             , Colour (
                                       0x00000000 ) );
    attack1Label -> setBounds (
                               144
                             , 96
                             , 48
                             , 18 );
    decay1Label . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "0" ) ) );
    addAndMakeVisible (
                       decay1Label . get () );
    decay1Label -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    decay1Label -> setJustificationType (
                                         Justification::centred );
    decay1Label -> setEditable (
                                false
                              , false
                              , false );
    decay1Label -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    decay1Label -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    decay1Label -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    decay1Label -> setBounds (
                              224
                            , 96
                            , 48
                            , 18 );
    sustain1Label . reset (
                           new Label (
                                      "new label"
                                    , TRANS (
                                             "0" ) ) );
    addAndMakeVisible (
                       sustain1Label . get () );
    sustain1Label -> setFont (
                              Font (
                                    "C64 Pro"
                                  , 12.00f
                                  , Font::plain ) . withTypefaceStyle (
                                                                       "Regular" ) );
    sustain1Label -> setJustificationType (
                                           Justification::centred );
    sustain1Label -> setEditable (
                                  false
                                , false
                                , false );
    sustain1Label -> setColour (
                                Label::textColourId
                              , Colour (
                                        0xff5090d0 ) );
    sustain1Label -> setColour (
                                TextEditor::textColourId
                              , Colours::black );
    sustain1Label -> setColour (
                                TextEditor::backgroundColourId
                              , Colour (
                                        0x00000000 ) );
    sustain1Label -> setBounds (
                                304
                              , 96
                              , 48
                              , 18 );
    release1Label . reset (
                           new Label (
                                      "new label"
                                    , TRANS (
                                             "0" ) ) );
    addAndMakeVisible (
                       release1Label . get () );
    release1Label -> setFont (
                              Font (
                                    "C64 Pro"
                                  , 12.00f
                                  , Font::plain ) . withTypefaceStyle (
                                                                       "Regular" ) );
    release1Label -> setJustificationType (
                                           Justification::centred );
    release1Label -> setEditable (
                                  false
                                , false
                                , false );
    release1Label -> setColour (
                                Label::textColourId
                              , Colour (
                                        0xff5090d0 ) );
    release1Label -> setColour (
                                TextEditor::textColourId
                              , Colours::black );
    release1Label -> setColour (
                                TextEditor::backgroundColourId
                              , Colour (
                                        0x00000000 ) );
    release1Label -> setBounds (
                                384
                              , 96
                              , 48
                              , 18 );
    pitchBend1Label . reset (
                             new Label (
                                        "new label"
                                      , TRANS (
                                               "0%" ) ) );
    addAndMakeVisible (
                       pitchBend1Label . get () );
    pitchBend1Label -> setFont (
                                Font (
                                      "C64 Pro"
                                    , 12.00f
                                    , Font::plain ) . withTypefaceStyle (
                                                                         "Regular" ) );
    pitchBend1Label -> setJustificationType (
                                             Justification::centred );
    pitchBend1Label -> setEditable (
                                    false
                                  , false
                                  , false );
    pitchBend1Label -> setColour (
                                  Label::textColourId
                                , Colour (
                                          0xff5090d0 ) );
    pitchBend1Label -> setColour (
                                  TextEditor::textColourId
                                , Colours::black );
    pitchBend1Label -> setColour (
                                  TextEditor::backgroundColourId
                                , Colour (
                                          0x00000000 ) );
    pitchBend1Label -> setBounds (
                                  472
                                , 96
                                , 48
                                , 18 );
    vibratoAmount1Label . reset (
                                 new Label (
                                            "new label"
                                          , TRANS (
                                                   "0%" ) ) );
    addAndMakeVisible (
                       vibratoAmount1Label . get () );
    vibratoAmount1Label -> setFont (
                                    Font (
                                          "C64 Pro"
                                        , 12.00f
                                        , Font::plain ) . withTypefaceStyle (
                                                                             "Regular" ) );
    vibratoAmount1Label -> setJustificationType (
                                                 Justification::centred );
    vibratoAmount1Label -> setEditable (
                                        false
                                      , false
                                      , false );
    vibratoAmount1Label -> setColour (
                                      Label::textColourId
                                    , Colour (
                                              0xff5090d0 ) );
    vibratoAmount1Label -> setColour (
                                      TextEditor::textColourId
                                    , Colours::black );
    vibratoAmount1Label -> setColour (
                                      TextEditor::backgroundColourId
                                    , Colour (
                                              0x00000000 ) );
    vibratoAmount1Label -> setBounds (
                                      584
                                    , 96
                                    , 48
                                    , 18 );
    vibratoSpeed1Label . reset (
                                new Label (
                                           "new label"
                                         , TRANS (
                                                  "0%" ) ) );
    addAndMakeVisible (
                       vibratoSpeed1Label . get () );
    vibratoSpeed1Label -> setFont (
                                   Font (
                                         "C64 Pro"
                                       , 12.00f
                                       , Font::plain ) . withTypefaceStyle (
                                                                            "Regular" ) );
    vibratoSpeed1Label -> setJustificationType (
                                                Justification::centred );
    vibratoSpeed1Label -> setEditable (
                                       false
                                     , false
                                     , false );
    vibratoSpeed1Label -> setColour (
                                     Label::textColourId
                                   , Colour (
                                             0xff5090d0 ) );
    vibratoSpeed1Label -> setColour (
                                     TextEditor::textColourId
                                   , Colours::black );
    vibratoSpeed1Label -> setColour (
                                     TextEditor::backgroundColourId
                                   , Colour (
                                             0x00000000 ) );
    vibratoSpeed1Label -> setBounds (
                                     664
                                   , 96
                                   , 48
                                   , 18 );
    pulseWidth1Label . reset (
                              new Label (
                                         "new label"
                                       , TRANS (
                                                "0%" ) ) );
    addAndMakeVisible (
                       pulseWidth1Label . get () );
    pulseWidth1Label -> setFont (
                                 Font (
                                       "C64 Pro"
                                     , 12.00f
                                     , Font::plain ) . withTypefaceStyle (
                                                                          "Regular" ) );
    pulseWidth1Label -> setJustificationType (
                                              Justification::centred );
    pulseWidth1Label -> setEditable (
                                     false
                                   , false
                                   , false );
    pulseWidth1Label -> setColour (
                                   Label::textColourId
                                 , Colour (
                                           0xff5090d0 ) );
    pulseWidth1Label -> setColour (
                                   TextEditor::textColourId
                                 , Colours::black );
    pulseWidth1Label -> setColour (
                                   TextEditor::backgroundColourId
                                 , Colour (
                                           0x00000000 ) );
    pulseWidth1Label -> setBounds (
                                   831
                                 , 96
                                 , 48
                                 , 18 );
    vibratoDelay1Label . reset (
                                new Label (
                                           "new label"
                                         , TRANS (
                                                  "0" ) ) );
    addAndMakeVisible (
                       vibratoDelay1Label . get () );
    vibratoDelay1Label -> setFont (
                                   Font (
                                         "C64 Pro"
                                       , 12.00f
                                       , Font::plain ) . withTypefaceStyle (
                                                                            "Regular" ) );
    vibratoDelay1Label -> setJustificationType (
                                                Justification::centred );
    vibratoDelay1Label -> setEditable (
                                       false
                                     , false
                                     , false );
    vibratoDelay1Label -> setColour (
                                     Label::textColourId
                                   , Colour (
                                             0xff5090d0 ) );
    vibratoDelay1Label -> setColour (
                                     TextEditor::textColourId
                                   , Colours::black );
    vibratoDelay1Label -> setColour (
                                     TextEditor::backgroundColourId
                                   , Colour (
                                             0x00000000 ) );
    vibratoDelay1Label -> setBounds (
                                     745
                                   , 96
                                   , 48
                                   , 18 );
    patch2Label . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "1" ) ) );
    addAndMakeVisible (
                       patch2Label . get () );
    patch2Label -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    patch2Label -> setJustificationType (
                                         Justification::centred );
    patch2Label -> setEditable (
                                false
                              , false
                              , false );
    patch2Label -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    patch2Label -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    patch2Label -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    patch2Label -> setBounds (
                              32
                            , 184
                            , 48
                            , 18 );
    attack2Label . reset (
                          new Label (
                                     "new label"
                                   , TRANS (
                                            "0" ) ) );
    addAndMakeVisible (
                       attack2Label . get () );
    attack2Label -> setFont (
                             Font (
                                   "C64 Pro"
                                 , 12.00f
                                 , Font::plain ) . withTypefaceStyle (
                                                                      "Regular" ) );
    attack2Label -> setJustificationType (
                                          Justification::centred );
    attack2Label -> setEditable (
                                 false
                               , false
                               , false );
    attack2Label -> setColour (
                               Label::textColourId
                             , Colour (
                                       0xff5090d0 ) );
    attack2Label -> setColour (
                               TextEditor::textColourId
                             , Colours::black );
    attack2Label -> setColour (
                               TextEditor::backgroundColourId
                             , Colour (
                                       0x00000000 ) );
    attack2Label -> setBounds (
                               144
                             , 184
                             , 48
                             , 18 );
    decay2Label . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "0" ) ) );
    addAndMakeVisible (
                       decay2Label . get () );
    decay2Label -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    decay2Label -> setJustificationType (
                                         Justification::centred );
    decay2Label -> setEditable (
                                false
                              , false
                              , false );
    decay2Label -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    decay2Label -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    decay2Label -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    decay2Label -> setBounds (
                              224
                            , 184
                            , 48
                            , 18 );
    sustain2Label . reset (
                           new Label (
                                      "new label"
                                    , TRANS (
                                             "0" ) ) );
    addAndMakeVisible (
                       sustain2Label . get () );
    sustain2Label -> setFont (
                              Font (
                                    "C64 Pro"
                                  , 12.00f
                                  , Font::plain ) . withTypefaceStyle (
                                                                       "Regular" ) );
    sustain2Label -> setJustificationType (
                                           Justification::centred );
    sustain2Label -> setEditable (
                                  false
                                , false
                                , false );
    sustain2Label -> setColour (
                                Label::textColourId
                              , Colour (
                                        0xff5090d0 ) );
    sustain2Label -> setColour (
                                TextEditor::textColourId
                              , Colours::black );
    sustain2Label -> setColour (
                                TextEditor::backgroundColourId
                              , Colour (
                                        0x00000000 ) );
    sustain2Label -> setBounds (
                                304
                              , 184
                              , 48
                              , 18 );
    release2Label . reset (
                           new Label (
                                      "new label"
                                    , TRANS (
                                             "0" ) ) );
    addAndMakeVisible (
                       release2Label . get () );
    release2Label -> setFont (
                              Font (
                                    "C64 Pro"
                                  , 12.00f
                                  , Font::plain ) . withTypefaceStyle (
                                                                       "Regular" ) );
    release2Label -> setJustificationType (
                                           Justification::centred );
    release2Label -> setEditable (
                                  false
                                , false
                                , false );
    release2Label -> setColour (
                                Label::textColourId
                              , Colour (
                                        0xff5090d0 ) );
    release2Label -> setColour (
                                TextEditor::textColourId
                              , Colours::black );
    release2Label -> setColour (
                                TextEditor::backgroundColourId
                              , Colour (
                                        0x00000000 ) );
    release2Label -> setBounds (
                                384
                              , 184
                              , 48
                              , 18 );
    pitchBend2Label . reset (
                             new Label (
                                        "new label"
                                      , TRANS (
                                               "0%" ) ) );
    addAndMakeVisible (
                       pitchBend2Label . get () );
    pitchBend2Label -> setFont (
                                Font (
                                      "C64 Pro"
                                    , 12.00f
                                    , Font::plain ) . withTypefaceStyle (
                                                                         "Regular" ) );
    pitchBend2Label -> setJustificationType (
                                             Justification::centred );
    pitchBend2Label -> setEditable (
                                    false
                                  , false
                                  , false );
    pitchBend2Label -> setColour (
                                  Label::textColourId
                                , Colour (
                                          0xff5090d0 ) );
    pitchBend2Label -> setColour (
                                  TextEditor::textColourId
                                , Colours::black );
    pitchBend2Label -> setColour (
                                  TextEditor::backgroundColourId
                                , Colour (
                                          0x00000000 ) );
    pitchBend2Label -> setBounds (
                                  472
                                , 184
                                , 48
                                , 18 );
    vibratoAmount2Label . reset (
                                 new Label (
                                            "new label"
                                          , TRANS (
                                                   "0%" ) ) );
    addAndMakeVisible (
                       vibratoAmount2Label . get () );
    vibratoAmount2Label -> setFont (
                                    Font (
                                          "C64 Pro"
                                        , 12.00f
                                        , Font::plain ) . withTypefaceStyle (
                                                                             "Regular" ) );
    vibratoAmount2Label -> setJustificationType (
                                                 Justification::centred );
    vibratoAmount2Label -> setEditable (
                                        false
                                      , false
                                      , false );
    vibratoAmount2Label -> setColour (
                                      Label::textColourId
                                    , Colour (
                                              0xff5090d0 ) );
    vibratoAmount2Label -> setColour (
                                      TextEditor::textColourId
                                    , Colours::black );
    vibratoAmount2Label -> setColour (
                                      TextEditor::backgroundColourId
                                    , Colour (
                                              0x00000000 ) );
    vibratoAmount2Label -> setBounds (
                                      584
                                    , 184
                                    , 48
                                    , 18 );
    vibratoSpeed2Label . reset (
                                new Label (
                                           "new label"
                                         , TRANS (
                                                  "0%" ) ) );
    addAndMakeVisible (
                       vibratoSpeed2Label . get () );
    vibratoSpeed2Label -> setFont (
                                   Font (
                                         "C64 Pro"
                                       , 12.00f
                                       , Font::plain ) . withTypefaceStyle (
                                                                            "Regular" ) );
    vibratoSpeed2Label -> setJustificationType (
                                                Justification::centred );
    vibratoSpeed2Label -> setEditable (
                                       false
                                     , false
                                     , false );
    vibratoSpeed2Label -> setColour (
                                     Label::textColourId
                                   , Colour (
                                             0xff5090d0 ) );
    vibratoSpeed2Label -> setColour (
                                     TextEditor::textColourId
                                   , Colours::black );
    vibratoSpeed2Label -> setColour (
                                     TextEditor::backgroundColourId
                                   , Colour (
                                             0x00000000 ) );
    vibratoSpeed2Label -> setBounds (
                                     664
                                   , 184
                                   , 48
                                   , 18 );
    pulseWidth2Label . reset (
                              new Label (
                                         "new label"
                                       , TRANS (
                                                "0%" ) ) );
    addAndMakeVisible (
                       pulseWidth2Label . get () );
    pulseWidth2Label -> setFont (
                                 Font (
                                       "C64 Pro"
                                     , 12.00f
                                     , Font::plain ) . withTypefaceStyle (
                                                                          "Regular" ) );
    pulseWidth2Label -> setJustificationType (
                                              Justification::centred );
    pulseWidth2Label -> setEditable (
                                     false
                                   , false
                                   , false );
    pulseWidth2Label -> setColour (
                                   Label::textColourId
                                 , Colour (
                                           0xff5090d0 ) );
    pulseWidth2Label -> setColour (
                                   TextEditor::textColourId
                                 , Colours::black );
    pulseWidth2Label -> setColour (
                                   TextEditor::backgroundColourId
                                 , Colour (
                                           0x00000000 ) );
    pulseWidth2Label -> setBounds (
                                   831
                                 , 184
                                 , 48
                                 , 18 );
    vibratoDelay2Label . reset (
                                new Label (
                                           "new label"
                                         , TRANS (
                                                  "0" ) ) );
    addAndMakeVisible (
                       vibratoDelay2Label . get () );
    vibratoDelay2Label -> setFont (
                                   Font (
                                         "C64 Pro"
                                       , 12.00f
                                       , Font::plain ) . withTypefaceStyle (
                                                                            "Regular" ) );
    vibratoDelay2Label -> setJustificationType (
                                                Justification::centred );
    vibratoDelay2Label -> setEditable (
                                       false
                                     , false
                                     , false );
    vibratoDelay2Label -> setColour (
                                     Label::textColourId
                                   , Colour (
                                             0xff5090d0 ) );
    vibratoDelay2Label -> setColour (
                                     TextEditor::textColourId
                                   , Colours::black );
    vibratoDelay2Label -> setColour (
                                     TextEditor::backgroundColourId
                                   , Colour (
                                             0x00000000 ) );
    vibratoDelay2Label -> setBounds (
                                     745
                                   , 184
                                   , 48
                                   , 18 );
    patch3Label . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "1" ) ) );
    addAndMakeVisible (
                       patch3Label . get () );
    patch3Label -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    patch3Label -> setJustificationType (
                                         Justification::centred );
    patch3Label -> setEditable (
                                false
                              , false
                              , false );
    patch3Label -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    patch3Label -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    patch3Label -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    patch3Label -> setBounds (
                              32
                            , 272
                            , 48
                            , 18 );
    attack3Label . reset (
                          new Label (
                                     "new label"
                                   , TRANS (
                                            "0" ) ) );
    addAndMakeVisible (
                       attack3Label . get () );
    attack3Label -> setFont (
                             Font (
                                   "C64 Pro"
                                 , 12.00f
                                 , Font::plain ) . withTypefaceStyle (
                                                                      "Regular" ) );
    attack3Label -> setJustificationType (
                                          Justification::centred );
    attack3Label -> setEditable (
                                 false
                               , false
                               , false );
    attack3Label -> setColour (
                               Label::textColourId
                             , Colour (
                                       0xff5090d0 ) );
    attack3Label -> setColour (
                               TextEditor::textColourId
                             , Colours::black );
    attack3Label -> setColour (
                               TextEditor::backgroundColourId
                             , Colour (
                                       0x00000000 ) );
    attack3Label -> setBounds (
                               144
                             , 272
                             , 48
                             , 18 );
    decay3Label . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "0" ) ) );
    addAndMakeVisible (
                       decay3Label . get () );
    decay3Label -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    decay3Label -> setJustificationType (
                                         Justification::centred );
    decay3Label -> setEditable (
                                false
                              , false
                              , false );
    decay3Label -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    decay3Label -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    decay3Label -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    decay3Label -> setBounds (
                              224
                            , 272
                            , 48
                            , 18 );
    sustain3Label . reset (
                           new Label (
                                      "new label"
                                    , TRANS (
                                             "0" ) ) );
    addAndMakeVisible (
                       sustain3Label . get () );
    sustain3Label -> setFont (
                              Font (
                                    "C64 Pro"
                                  , 12.00f
                                  , Font::plain ) . withTypefaceStyle (
                                                                       "Regular" ) );
    sustain3Label -> setJustificationType (
                                           Justification::centred );
    sustain3Label -> setEditable (
                                  false
                                , false
                                , false );
    sustain3Label -> setColour (
                                Label::textColourId
                              , Colour (
                                        0xff5090d0 ) );
    sustain3Label -> setColour (
                                TextEditor::textColourId
                              , Colours::black );
    sustain3Label -> setColour (
                                TextEditor::backgroundColourId
                              , Colour (
                                        0x00000000 ) );
    sustain3Label -> setBounds (
                                304
                              , 272
                              , 48
                              , 18 );
    release3Label . reset (
                           new Label (
                                      "new label"
                                    , TRANS (
                                             "0" ) ) );
    addAndMakeVisible (
                       release3Label . get () );
    release3Label -> setFont (
                              Font (
                                    "C64 Pro"
                                  , 12.00f
                                  , Font::plain ) . withTypefaceStyle (
                                                                       "Regular" ) );
    release3Label -> setJustificationType (
                                           Justification::centred );
    release3Label -> setEditable (
                                  false
                                , false
                                , false );
    release3Label -> setColour (
                                Label::textColourId
                              , Colour (
                                        0xff5090d0 ) );
    release3Label -> setColour (
                                TextEditor::textColourId
                              , Colours::black );
    release3Label -> setColour (
                                TextEditor::backgroundColourId
                              , Colour (
                                        0x00000000 ) );
    release3Label -> setBounds (
                                384
                              , 272
                              , 48
                              , 18 );
    pitchBend3Label . reset (
                             new Label (
                                        "new label"
                                      , TRANS (
                                               "0%" ) ) );
    addAndMakeVisible (
                       pitchBend3Label . get () );
    pitchBend3Label -> setFont (
                                Font (
                                      "C64 Pro"
                                    , 12.00f
                                    , Font::plain ) . withTypefaceStyle (
                                                                         "Regular" ) );
    pitchBend3Label -> setJustificationType (
                                             Justification::centred );
    pitchBend3Label -> setEditable (
                                    false
                                  , false
                                  , false );
    pitchBend3Label -> setColour (
                                  Label::textColourId
                                , Colour (
                                          0xff5090d0 ) );
    pitchBend3Label -> setColour (
                                  TextEditor::textColourId
                                , Colours::black );
    pitchBend3Label -> setColour (
                                  TextEditor::backgroundColourId
                                , Colour (
                                          0x00000000 ) );
    pitchBend3Label -> setBounds (
                                  472
                                , 272
                                , 48
                                , 18 );
    vibratoAmount3Label . reset (
                                 new Label (
                                            "new label"
                                          , TRANS (
                                                   "0%" ) ) );
    addAndMakeVisible (
                       vibratoAmount3Label . get () );
    vibratoAmount3Label -> setFont (
                                    Font (
                                          "C64 Pro"
                                        , 12.00f
                                        , Font::plain ) . withTypefaceStyle (
                                                                             "Regular" ) );
    vibratoAmount3Label -> setJustificationType (
                                                 Justification::centred );
    vibratoAmount3Label -> setEditable (
                                        false
                                      , false
                                      , false );
    vibratoAmount3Label -> setColour (
                                      Label::textColourId
                                    , Colour (
                                              0xff5090d0 ) );
    vibratoAmount3Label -> setColour (
                                      TextEditor::textColourId
                                    , Colours::black );
    vibratoAmount3Label -> setColour (
                                      TextEditor::backgroundColourId
                                    , Colour (
                                              0x00000000 ) );
    vibratoAmount3Label -> setBounds (
                                      584
                                    , 272
                                    , 48
                                    , 18 );
    vibratoSpeed3Label . reset (
                                new Label (
                                           "new label"
                                         , TRANS (
                                                  "0%" ) ) );
    addAndMakeVisible (
                       vibratoSpeed3Label . get () );
    vibratoSpeed3Label -> setFont (
                                   Font (
                                         "C64 Pro"
                                       , 12.00f
                                       , Font::plain ) . withTypefaceStyle (
                                                                            "Regular" ) );
    vibratoSpeed3Label -> setJustificationType (
                                                Justification::centred );
    vibratoSpeed3Label -> setEditable (
                                       false
                                     , false
                                     , false );
    vibratoSpeed3Label -> setColour (
                                     Label::textColourId
                                   , Colour (
                                             0xff5090d0 ) );
    vibratoSpeed3Label -> setColour (
                                     TextEditor::textColourId
                                   , Colours::black );
    vibratoSpeed3Label -> setColour (
                                     TextEditor::backgroundColourId
                                   , Colour (
                                             0x00000000 ) );
    vibratoSpeed3Label -> setBounds (
                                     664
                                   , 272
                                   , 48
                                   , 18 );
    pulseWidth3Label . reset (
                              new Label (
                                         "new label"
                                       , TRANS (
                                                "0%" ) ) );
    addAndMakeVisible (
                       pulseWidth3Label . get () );
    pulseWidth3Label -> setFont (
                                 Font (
                                       "C64 Pro"
                                     , 12.00f
                                     , Font::plain ) . withTypefaceStyle (
                                                                          "Regular" ) );
    pulseWidth3Label -> setJustificationType (
                                              Justification::centred );
    pulseWidth3Label -> setEditable (
                                     false
                                   , false
                                   , false );
    pulseWidth3Label -> setColour (
                                   Label::textColourId
                                 , Colour (
                                           0xff5090d0 ) );
    pulseWidth3Label -> setColour (
                                   TextEditor::textColourId
                                 , Colours::black );
    pulseWidth3Label -> setColour (
                                   TextEditor::backgroundColourId
                                 , Colour (
                                           0x00000000 ) );
    pulseWidth3Label -> setBounds (
                                   831
                                 , 272
                                 , 48
                                 , 18 );
    vibratoDelay3Label . reset (
                                new Label (
                                           "new label"
                                         , TRANS (
                                                  "0" ) ) );
    addAndMakeVisible (
                       vibratoDelay3Label . get () );
    vibratoDelay3Label -> setFont (
                                   Font (
                                         "C64 Pro"
                                       , 12.00f
                                       , Font::plain ) . withTypefaceStyle (
                                                                            "Regular" ) );
    vibratoDelay3Label -> setJustificationType (
                                                Justification::centred );
    vibratoDelay3Label -> setEditable (
                                       false
                                     , false
                                     , false );
    vibratoDelay3Label -> setColour (
                                     Label::textColourId
                                   , Colour (
                                             0xff5090d0 ) );
    vibratoDelay3Label -> setColour (
                                     TextEditor::textColourId
                                   , Colours::black );
    vibratoDelay3Label -> setColour (
                                     TextEditor::backgroundColourId
                                   , Colour (
                                             0x00000000 ) );
    vibratoDelay3Label -> setBounds (
                                     745
                                   , 272
                                   , 48
                                   , 18 );
    cutoffLabel . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "0" ) ) );
    addAndMakeVisible (
                       cutoffLabel . get () );
    cutoffLabel -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    cutoffLabel -> setJustificationType (
                                         Justification::centred );
    cutoffLabel -> setEditable (
                                false
                              , false
                              , false );
    cutoffLabel -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    cutoffLabel -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    cutoffLabel -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    cutoffLabel -> setBounds (
                              32
                            , 360
                            , 48
                            , 18 );
    resonanceLabel . reset (
                            new Label (
                                       "new label"
                                     , TRANS (
                                              "0" ) ) );
    addAndMakeVisible (
                       resonanceLabel . get () );
    resonanceLabel -> setFont (
                               Font (
                                     "C64 Pro"
                                   , 12.00f
                                   , Font::plain ) . withTypefaceStyle (
                                                                        "Regular" ) );
    resonanceLabel -> setJustificationType (
                                            Justification::centred );
    resonanceLabel -> setEditable (
                                   false
                                 , false
                                 , false );
    resonanceLabel -> setColour (
                                 Label::textColourId
                               , Colour (
                                         0xff5090d0 ) );
    resonanceLabel -> setColour (
                                 TextEditor::textColourId
                               , Colours::black );
    resonanceLabel -> setColour (
                                 TextEditor::backgroundColourId
                               , Colour (
                                         0x00000000 ) );
    resonanceLabel -> setBounds (
                                 32
                               , 448
                               , 48
                               , 18 );
    titleLabel . reset (
                        new Label (
                                   "new label"
                                 , String () ) );
    addAndMakeVisible (
                       titleLabel . get () );
    titleLabel -> setFont (
                           Font (
                                 "C64 Pro"
                               , 14.00f
                               , Font::plain ) . withTypefaceStyle (
                                                                    "Regular" ) );
    titleLabel -> setJustificationType (
                                        Justification::centredLeft );
    titleLabel -> setEditable (
                               true
                             , true
                             , false );
    titleLabel -> setColour (
                             Label::textColourId
                           , Colour (
                                     0xff5090d0 ) );
    titleLabel -> setColour (
                             TextEditor::textColourId
                           , Colour (
                                     0xff5090d0 ) );
    titleLabel -> setColour (
                             TextEditor::backgroundColourId
                           , Colour (
                                     0x00000000 ) );
    titleLabel -> addListener (
                               this );
    titleLabel -> setBounds (
                             632
                           , 8
                           , 368
                           , 32 );
    artistLabel . reset (
                         new Label (
                                    "new label"
                                  , String () ) );
    addAndMakeVisible (
                       artistLabel . get () );
    artistLabel -> setFont (
                            Font (
                                  "C64 Pro"
                                , 14.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    artistLabel -> setJustificationType (
                                         Justification::centredLeft );
    artistLabel -> setEditable (
                                true
                              , true
                              , false );
    artistLabel -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    artistLabel -> setColour (
                              TextEditor::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    artistLabel -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    artistLabel -> addListener (
                                this );
    artistLabel -> setBounds (
                              632
                            , 48
                            , 368
                            , 32 );
    exportButton . reset (
                          new ImageButton (
                                           "new button" ) );
    addAndMakeVisible (
                       exportButton . get () );
    exportButton -> addListener (
                                 this );
    exportButton -> setImages (
                               false
                             , true
                             , true
                             , ImageCache::getFromMemory (
                                                          recordnormal_png
                                                        , recordnormal_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 )
                             , ImageCache::getFromMemory (
                                                          recordover_png
                                                        , recordover_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 )
                             , ImageCache::getFromMemory (
                                                          recorddown_png
                                                        , recorddown_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 ) );
    exportButton -> setBounds (
                               480
                             , 40
                             , 32
                             , 32 );
    patchesViewport . reset (
                             new Viewport (
                                           "new viewport" ) );
    addAndMakeVisible (
                       patchesViewport . get () );
    patchesViewport -> setScrollBarsShown (
                                           true
                                         , false );
    patchesViewport -> setScrollBarThickness (
                                              16 );
    patchesViewport -> setBounds (
                                  496
                                , 368
                                , 512
                                , 192 );
    filter1Checkbox . reset (
                             new ToggleButton (
                                               "new toggle button" ) );
    addAndMakeVisible (
                       filter1Checkbox . get () );
    filter1Checkbox -> setButtonText (
                                      String () );
    filter1Checkbox -> addListener (
                                    this );
    filter1Checkbox -> setBounds (
                                  120
                                , 376
                                , 48
                                , 48 );
    filter2Checkbox . reset (
                             new ToggleButton (
                                               "new toggle button" ) );
    addAndMakeVisible (
                       filter2Checkbox . get () );
    filter2Checkbox -> setButtonText (
                                      String () );
    filter2Checkbox -> addListener (
                                    this );
    filter2Checkbox -> setBounds (
                                  240
                                , 376
                                , 48
                                , 48 );
    filter3Checkbox . reset (
                             new ToggleButton (
                                               "new toggle button" ) );
    addAndMakeVisible (
                       filter3Checkbox . get () );
    filter3Checkbox -> setButtonText (
                                      String () );
    filter3Checkbox -> addListener (
                                    this );
    filter3Checkbox -> setBounds (
                                  352
                                , 376
                                , 48
                                , 48 );
    filterLowPassCheckbox . reset (
                                   new ToggleButton (
                                                     "new toggle button" ) );
    addAndMakeVisible (
                       filterLowPassCheckbox . get () );
    filterLowPassCheckbox -> setButtonText (
                                            String () );
    filterLowPassCheckbox -> addListener (
                                          this );
    filterLowPassCheckbox -> setBounds (
                                        120
                                      , 456
                                      , 48
                                      , 48 );
    filterBandPassCheckbox . reset (
                                    new ToggleButton (
                                                      "new toggle button" ) );
    addAndMakeVisible (
                       filterBandPassCheckbox . get () );
    filterBandPassCheckbox -> setButtonText (
                                             String () );
    filterBandPassCheckbox -> addListener (
                                           this );
    filterBandPassCheckbox -> setBounds (
                                         240
                                       , 456
                                       , 48
                                       , 48 );
    filterHighPassCheckbox . reset (
                                    new ToggleButton (
                                                      "high" ) );
    addAndMakeVisible (
                       filterHighPassCheckbox . get () );
    filterHighPassCheckbox -> setButtonText (
                                             String () );
    filterHighPassCheckbox -> addListener (
                                           this );
    filterHighPassCheckbox -> setBounds (
                                         352
                                       , 456
                                       , 48
                                       , 48 );
    patchEditorButton . reset (
                               new ImageButton (
                                                "new button" ) );
    addAndMakeVisible (
                       patchEditorButton . get () );
    patchEditorButton -> addListener (
                                      this );
    patchEditorButton -> setImages (
                                    false
                                  , true
                                  , true
                                  , ImageCache::getFromMemory (
                                                               patchEditorButtonNormal_png
                                                             , patchEditorButtonNormal_pngSize )
                                  , 1.000f
                                  , Colour (
                                            0x00000000 )
                                  , ImageCache::getFromMemory (
                                                               patchEditorButtonOver_png
                                                             , patchEditorButtonOver_pngSize )
                                  , 1.000f
                                  , Colour (
                                            0x00000000 )
                                  , ImageCache::getFromMemory (
                                                               patchEditorButtonDown_png
                                                             , patchEditorButtonDown_pngSize )
                                  , 1.000f
                                  , Colour (
                                            0x00000000 ) );
    patchEditorButton -> setBounds (
                                    208
                                  , 544
                                  , 154
                                  , 26 );
    addPatchButton . reset (
                            new ImageButton (
                                             "new button" ) );
    addAndMakeVisible (
                       addPatchButton . get () );
    addPatchButton -> addListener (
                                   this );
    addPatchButton -> setImages (
                                 false
                               , true
                               , true
                               , ImageCache::getFromMemory (
                                                            addButtonNormal_png
                                                          , addButtonNormal_pngSize )
                               , 1.000f
                               , Colour (
                                         0x00000000 )
                               , ImageCache::getFromMemory (
                                                            addButtonOver_png
                                                          , addButtonOver_pngSize )
                               , 1.000f
                               , Colour (
                                         0x00000000 )
                               , ImageCache::getFromMemory (
                                                            addButtonDown_png
                                                          , addButtonDown_pngSize )
                               , 1.000f
                               , Colour (
                                         0x00000000 ) );
    addPatchButton -> setBounds (
                                 488
                               , 544
                               , 154
                               , 26 );
    replacePatchButton . reset (
                                new ImageButton (
                                                 "new button" ) );
    addAndMakeVisible (
                       replacePatchButton . get () );
    replacePatchButton -> addListener (
                                       this );
    replacePatchButton -> setImages (
                                     false
                                   , true
                                   , true
                                   , ImageCache::getFromMemory (
                                                                replaceButtonNormal_png
                                                              , replaceButtonNormal_pngSize )
                                   , 1.000f
                                   , Colour (
                                             0x00000000 )
                                   , ImageCache::getFromMemory (
                                                                replaceButtonOver_png
                                                              , replaceButtonOver_pngSize )
                                   , 1.000f
                                   , Colour (
                                             0x00000000 )
                                   , ImageCache::getFromMemory (
                                                                replaceButtonDown_png
                                                              , replaceButtonDown_pngSize )
                                   , 1.000f
                                   , Colour (
                                             0x00000000 ) );
    replacePatchButton -> setBounds (
                                     656
                                   , 544
                                   , 154
                                   , 26 );
    removePatchButton . reset (
                               new ImageButton (
                                                "new button" ) );
    addAndMakeVisible (
                       removePatchButton . get () );
    removePatchButton -> addListener (
                                      this );
    removePatchButton -> setImages (
                                    false
                                  , true
                                  , true
                                  , ImageCache::getFromMemory (
                                                               removeButtonNormal_png
                                                             , removeButtonNormal_pngSize )
                                  , 1.000f
                                  , Colour (
                                            0x00000000 )
                                  , ImageCache::getFromMemory (
                                                               removeButtonOver_png
                                                             , removeButtonOver_pngSize )
                                  , 1.000f
                                  , Colour (
                                            0x00000000 )
                                  , ImageCache::getFromMemory (
                                                               removeButtonDown_png
                                                             , removeButtonDown_pngSize )
                                  , 1.000f
                                  , Colour (
                                            0x00000000 ) );
    removePatchButton -> setBounds (
                                    824
                                  , 544
                                  , 154
                                  , 26 );
    patchSelector . reset (
                           new PatchSelector (
                                              dispatcher ) );
    addAndMakeVisible (
                       patchSelector . get () );
    patchSelector -> setBounds (
                                488
                              , 368
                              , 322
                              , 176 );
    cachedImage_liveModeBackdrop_png_1 = ImageCache::getFromMemory (
                                                                    liveModeBackdrop_png
                                                                  , liveModeBackdrop_pngSize );
    cachedImage_recordIndicator_png_2 = ImageCache::getFromMemory (
                                                                   recordIndicator_png
                                                                 , recordIndicator_pngSize );
    cachedImage_liveModeButtonDown_png_3 = ImageCache::getFromMemory (
                                                                      liveModeButtonDown_png
                                                                    , liveModeButtonDown_pngSize );
    cachedImage_recordIndicatorblink_png_4 = ImageCache::getFromMemory (
                                                                        recordIndicatorblink_png
                                                                      , recordIndicatorblink_pngSize );

    //[UserPreSize]
    volumeSlider -> setValue (
                              15
                            , dontSendNotification );
    volumeLabel -> setText (
                            "15"
                          , dontSendNotification );

    //cutoffSlider -> setSkewFactorFromMidPoint (
    //                                           32
    //                                          );

    patches = std::make_shared < Patches > (
                                            dispatcher );
    patchesViewport -> setViewedComponent (
                                           patches . get () );
    patchesViewport -> getVerticalScrollBar () -> setAutoHide (
                                                               false );
    patchSelector -> setVisible (
                                 false );
    dispatcher -> bankProgramChangedListeners -> add (
                                                      this );
    dispatcher -> attackParameterChangedListeners -> add (
                                                          this );
    dispatcher -> bandPassParameterChangedListeners -> add (
                                                            this );
    dispatcher -> cutoffParameterChangedListeners -> add (
                                                          this );
    dispatcher -> decayParameterChangedListeners -> add (
                                                         this );
    dispatcher -> filterVoiceParameterChangedListeners -> add (
                                                               this );
    dispatcher -> highPassParameterChangedListeners -> add (
                                                            this );
    dispatcher -> lowPassParameterChangedListeners -> add (
                                                           this );
    dispatcher -> pitchBendParameterChangedListeners -> add (
                                                             this );
    dispatcher -> programParameterChangedListeners -> add (
                                                           this );
    dispatcher -> pulseWidthParameterChangedListeners -> add (
                                                              this );
    dispatcher -> releaseParameterChangedListeners -> add (
                                                           this );
    dispatcher -> resonanceParameterChangedListeners -> add (
                                                             this );
    dispatcher -> sustainParameterChangedListeners -> add (
                                                           this );
    dispatcher -> vibratoAmountParameterChangedListeners -> add (
                                                                 this );
    dispatcher -> vibratoSpeedParameterChangedListeners -> add (
                                                                this );
    dispatcher -> vibratoDelayParameterChangedListeners -> add (
                                                                this );
    dispatcher -> volumeParameterChangedListeners -> add (
                                                          this );
    dispatcher -> patchEditorLiveModeClickedListeners -> add (
                                                              this );
    dispatcher -> livePatchListChangedListeners -> add (
                                                        this );
    dispatcher -> liveTitleChangedListeners -> add (
                                                    this );
    dispatcher -> liveArtistChangedListeners -> add (
                                                     this );
    dispatcher -> quarterNoteTickListeners -> add (
                                                   this );
    dispatcher -> liveDoneExportingListeners -> add (
                                                     this );
    //[/UserPreSize]

    setSize (
             1024
           , 576 );


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

LiveMode::~LiveMode ()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    dispatcher -> bankProgramChangedListeners -> remove ( 
                                                         this );
    dispatcher -> attackParameterChangedListeners -> remove (
                                                             this );
    dispatcher -> bandPassParameterChangedListeners -> remove (
                                                               this );
    dispatcher -> cutoffParameterChangedListeners -> remove (
                                                             this );
    dispatcher -> decayParameterChangedListeners -> remove (
                                                            this );
    dispatcher -> filterVoiceParameterChangedListeners -> remove (
                                                                  this );
    dispatcher -> highPassParameterChangedListeners -> remove (
                                                               this );
    dispatcher -> lowPassParameterChangedListeners -> remove (
                                                              this );
    dispatcher -> pitchBendParameterChangedListeners -> remove (
                                                                this );
    dispatcher -> programParameterChangedListeners -> remove (
                                                              this );
    dispatcher -> pulseWidthParameterChangedListeners -> remove (
                                                                 this );
    dispatcher -> releaseParameterChangedListeners -> remove (
                                                              this );
    dispatcher -> resonanceParameterChangedListeners -> remove (
                                                                this );
    dispatcher -> sustainParameterChangedListeners -> remove (
                                                              this );
    dispatcher -> vibratoAmountParameterChangedListeners -> remove (
                                                                    this );
    dispatcher -> vibratoSpeedParameterChangedListeners -> remove (
                                                                   this );
    dispatcher -> vibratoDelayParameterChangedListeners -> remove (
                                                                   this );
    dispatcher -> volumeParameterChangedListeners -> remove (
                                                             this );
    dispatcher -> patchEditorLiveModeClickedListeners -> remove (
                                                                 this );
    dispatcher -> livePatchListChangedListeners -> remove (
                                                           this );
    dispatcher -> liveTitleChangedListeners -> remove (
                                                       this );
    dispatcher -> liveArtistChangedListeners -> remove (
                                                        this );
    dispatcher -> quarterNoteTickListeners -> remove (
                                                      this );
    dispatcher -> liveDoneExportingListeners -> remove (
                                                        this );
    patches = nullptr;
    //[/Destructor_pre]

    volumeSlider           = nullptr;
    volumeLabel            = nullptr;
    patch1Slider           = nullptr;
    attack1Slider          = nullptr;
    decay1Slider           = nullptr;
    sustain1Slider         = nullptr;
    release1Slider         = nullptr;
    pitchBend1Slider       = nullptr;
    vibratoAmount1Slider   = nullptr;
    vibratoSpeed1Slider    = nullptr;
    pulseWidth1Slider      = nullptr;
    vibratoDelay1Slider    = nullptr;
    patch2Slider           = nullptr;
    attack2Slider          = nullptr;
    decay2Slider           = nullptr;
    sustain2Slider         = nullptr;
    release2Slider         = nullptr;
    pitchBend2Slider       = nullptr;
    vibratoAmount2Slider   = nullptr;
    vibratoSpeed2Slider    = nullptr;
    pulseWidth2Slider      = nullptr;
    vibratoDelay2Slider    = nullptr;
    patch3Slider           = nullptr;
    attack3Slider          = nullptr;
    decay3Slider           = nullptr;
    sustain3Slider         = nullptr;
    release3Slider         = nullptr;
    pitchBend3Slider       = nullptr;
    vibratoAmount3Slider   = nullptr;
    vibratoSpeed3Slider    = nullptr;
    pulseWidth3Slider      = nullptr;
    vibratoDelay3Slider    = nullptr;
    cutoffSlider           = nullptr;
    resonanceSlider        = nullptr;
    patch1Label            = nullptr;
    attack1Label           = nullptr;
    decay1Label            = nullptr;
    sustain1Label          = nullptr;
    release1Label          = nullptr;
    pitchBend1Label        = nullptr;
    vibratoAmount1Label    = nullptr;
    vibratoSpeed1Label     = nullptr;
    pulseWidth1Label       = nullptr;
    vibratoDelay1Label     = nullptr;
    patch2Label            = nullptr;
    attack2Label           = nullptr;
    decay2Label            = nullptr;
    sustain2Label          = nullptr;
    release2Label          = nullptr;
    pitchBend2Label        = nullptr;
    vibratoAmount2Label    = nullptr;
    vibratoSpeed2Label     = nullptr;
    pulseWidth2Label       = nullptr;
    vibratoDelay2Label     = nullptr;
    patch3Label            = nullptr;
    attack3Label           = nullptr;
    decay3Label            = nullptr;
    sustain3Label          = nullptr;
    release3Label          = nullptr;
    pitchBend3Label        = nullptr;
    vibratoAmount3Label    = nullptr;
    vibratoSpeed3Label     = nullptr;
    pulseWidth3Label       = nullptr;
    vibratoDelay3Label     = nullptr;
    cutoffLabel            = nullptr;
    resonanceLabel         = nullptr;
    titleLabel             = nullptr;
    artistLabel            = nullptr;
    exportButton           = nullptr;
    patchesViewport        = nullptr;
    filter1Checkbox        = nullptr;
    filter2Checkbox        = nullptr;
    filter3Checkbox        = nullptr;
    filterLowPassCheckbox  = nullptr;
    filterBandPassCheckbox = nullptr;
    filterHighPassCheckbox = nullptr;
    patchEditorButton      = nullptr;
    addPatchButton         = nullptr;
    replacePatchButton     = nullptr;
    removePatchButton      = nullptr;
    patchSelector          = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    look = nullptr;
    //[/Destructor]
}

//==============================================================================
void
    LiveMode::paint (
            Graphics& g
            )
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g . fillAll (
                 Colours::white );
    {
        const auto x = 0;
        const auto y = 0;
        const auto width = 1024;
        const auto height = 576;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g . setColour (
                       Colours::black );
        g . drawImage (
                       cachedImage_liveModeBackdrop_png_1
                     , x
                     , y
                     , width
                     , height
                     , 0
                     , 0
                     , cachedImage_liveModeBackdrop_png_1 . getWidth ()
                     , cachedImage_liveModeBackdrop_png_1 . getHeight () );
    }
    {
        const auto x = 472;
        const auto y = 6;
        const auto width = 50;
        const auto height = 22;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g . setColour (
                       Colours::black );
        g . drawImage (
                       cachedImage_recordIndicator_png_2
                     , x
                     , y
                     , width
                     , height
                     , 0
                     , 0
                     , cachedImage_recordIndicator_png_2 . getWidth ()
                     , cachedImage_recordIndicator_png_2 . getHeight () );
    }
    {
        const auto x = 32;
        const auto y = 544;
        const auto width = 154;
        const auto height = 26;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g . setColour (
                       Colours::black );
        g . drawImage (
                       cachedImage_liveModeButtonDown_png_3
                     , x
                     , y
                     , width
                     , height
                     , 0
                     , 0
                     , cachedImage_liveModeButtonDown_png_3 . getWidth ()
                     , cachedImage_liveModeButtonDown_png_3 . getHeight () );
    }
    {
        const auto x = 472;
        const auto y = 6;
        const auto width = 50;
        const auto height = 22;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g . setColour (
                       Colours::black . withAlpha (
                                                   0.001f ) );
        g . drawImage (
                       cachedImage_recordIndicatorblink_png_4
                     , x
                     , y
                     , width
                     , height
                     , 0
                     , 0
                     , cachedImage_recordIndicatorblink_png_4 . getWidth ()
                     , cachedImage_recordIndicatorblink_png_4 . getHeight () );
    }

    //[UserPaint] Add your own custom painting code here..
    if ( armed && quarterNoteTicked )
    {
        g . setColour (
                       Colours::black );
        g . drawImage (
                       cachedImage_recordIndicatorblink_png_4
                     , 472
                     , 6
                     , 50
                     , 22
                     , 0
                     , 0
                     , cachedImage_recordIndicatorblink_png_4 . getWidth ()
                     , cachedImage_recordIndicatorblink_png_4 . getHeight () );
    }
    //[/UserPaint]
}

void
    LiveMode::resized ()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void
    LiveMode::sliderValueChanged (
            Slider* slider_that_was_moved
            )
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if ( slider_that_was_moved == volumeSlider . get () )
    {
        //[UserSliderCode_volumeSlider] -- add your slider handling code here..
        volumeLabel -> setText (
                                volumeSlider -> getTextFromValue (
                                                                  volumeSlider -> getValue () )
                              , dontSendNotification );
        dispatcher -> liveVolumeChangedListeners -> call (
                                                          &LiveVolumeChanged::onLiveVolumeChanged
                                                        , static_cast < unsigned int > ( volumeSlider -> getValue () ) );
        dispatcher -> exportVolumeChanged -> call (
                                                   &ExportVolumeChanged::onExportVolumeChanged
                                                 , static_cast < unsigned int > ( volumeSlider -> getValue () ) );
        //[/UserSliderCode_volumeSlider]
    }
    else if ( slider_that_was_moved == patch1Slider . get () )
    {
        //[UserSliderCode_patch1Slider] -- add your slider handling code here..
        patch1Label -> setText (
                                patch1Slider -> getTextFromValue (
                                                                  patch1Slider -> getValue () )
                              , dontSendNotification );
        dispatcher -> livePatchChangedListeners -> call (
                                                         &LivePatchChanged::onLivePatchChanged
                                                       , SID_VOICE_1
                                                       , static_cast < unsigned int > ( patch1Slider -> getValue () ) - 1 );
        dispatcher -> exportPatchChanged -> call (
                                                  &ExportPatchChanged::onExportPatchChanged
                                                , SID_VOICE_1
                                                , static_cast < unsigned int > ( patch1Slider -> getValue () ) - 1 );
        //[/UserSliderCode_patch1Slider]
    }
    else if ( slider_that_was_moved == attack1Slider . get () )
    {
        //[UserSliderCode_attack1Slider] -- add your slider handling code here..
        attack1Label -> setText (
                                 attack1Slider -> getTextFromValue (
                                                                    attack1Slider -> getValue () )
                               , dontSendNotification );
        dispatcher -> liveAttackChangedListeners -> call (
                                                          &LiveAttackChanged::onLiveAttackChanged
                                                        , SID_VOICE_1
                                                        , static_cast < unsigned int > ( attack1Slider -> getValue () ) );
        dispatcher -> exportAttackChanged -> call (
                                                   &ExportAttackChanged::onExportAttackChanged
                                                 , SID_VOICE_1
                                                 , static_cast < unsigned int > ( attack1Slider -> getValue () ) );
        //[/UserSliderCode_attack1Slider]
    }
    else if ( slider_that_was_moved == decay1Slider . get () )
    {
        //[UserSliderCode_decay1Slider] -- add your slider handling code here..
        decay1Label -> setText (
                                decay1Slider -> getTextFromValue (
                                                                  decay1Slider -> getValue () )
                              , dontSendNotification );
        dispatcher -> liveDecayChangedListeners -> call (
                                                         &LiveDecayChanged::onLiveDecayChanged
                                                       , SID_VOICE_1
                                                       , static_cast < unsigned int > ( decay1Slider -> getValue () ) );
        dispatcher -> exportDecayChanged -> call (
                                                  &ExportDecayChanged::onExportDecayChanged
                                                , SID_VOICE_1
                                                , static_cast < unsigned int > ( decay1Slider -> getValue () ) );
        //[/UserSliderCode_decay1Slider]
    }
    else if ( slider_that_was_moved == sustain1Slider . get () )
    {
        //[UserSliderCode_sustain1Slider] -- add your slider handling code here..
        sustain1Label -> setText (
                                  sustain1Slider -> getTextFromValue (
                                                                      sustain1Slider -> getValue () )
                                , dontSendNotification );
        dispatcher -> liveSustainChangedListeners -> call (
                                                           &LiveSustainChanged::onLiveSustainChanged
                                                         , SID_VOICE_1
                                                         , static_cast < unsigned int > ( sustain1Slider -> getValue () ) );
        dispatcher -> exportSustainChanged -> call (
                                                    &ExportSustainChanged::onExportSustainChanged
                                                  , SID_VOICE_1
                                                  , static_cast < unsigned int > ( sustain1Slider -> getValue () ) );
        //[/UserSliderCode_sustain1Slider]
    }
    else if ( slider_that_was_moved == release1Slider . get () )
    {
        //[UserSliderCode_release1Slider] -- add your slider handling code here..
        release1Label -> setText (
                                  release1Slider -> getTextFromValue (
                                                                      release1Slider -> getValue () )
                                , dontSendNotification );
        dispatcher -> liveReleaseChangedListeners -> call (
                                                           &LiveReleaseChanged::onLiveReleaseChanged
                                                         , SID_VOICE_1
                                                         , static_cast < unsigned int > ( release1Slider -> getValue () ) );
        dispatcher -> exportReleaseChanged -> call (
                                                    &ExportReleaseChanged::onExportReleaseChanged
                                                  , SID_VOICE_1
                                                  , static_cast < unsigned int > ( release1Slider -> getValue () ) );
        //[/UserSliderCode_release1Slider]
    }
    else if ( slider_that_was_moved == pitchBend1Slider . get () )
    {
        //[UserSliderCode_pitchBend1Slider] -- add your slider handling code here..
        pitchBend1Label -> setText (
                                    pitchBend1Slider -> getTextFromValue (
                                                                          pitchBend1Slider -> getValue () ) + "%"
                                  , dontSendNotification );
        dispatcher -> livePitchBendChangedListeners -> call (
                                                             &LivePitchBendChanged::onLivePitchBendChanged
                                                           , SID_VOICE_1
                                                           , static_cast < float > ( pitchBend1Slider -> getValue () / 100.0 ) );
        dispatcher -> exportPitchBendChanged -> call (
                                                      &ExportPitchBendChanged::onExportPitchBendChanged
                                                    , SID_VOICE_1
                                                    , static_cast < float > ( pitchBend1Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_pitchBend1Slider]
    }
    else if ( slider_that_was_moved == vibratoAmount1Slider . get () )
    {
        //[UserSliderCode_vibratoAmount1Slider] -- add your slider handling code here..
        vibratoAmount1Label -> setText (
                                        vibratoAmount1Slider -> getTextFromValue (
                                                                                  vibratoAmount1Slider -> getValue () ) + "%"
                                      , dontSendNotification );
        dispatcher -> liveVibratoAmountChangedListeners -> call (
                                                                 &LiveVibratoAmountChanged::onLiveVibratoAmountChanged
                                                               , SID_VOICE_1
                                                               , static_cast < float > ( vibratoAmount1Slider -> getValue () / 100.0 ) );
        dispatcher -> exportVibratoAmountChanged -> call (
                                                          &ExportVibratoAmountChanged::onExportVibratoAmountChanged
                                                        , SID_VOICE_1
                                                        , static_cast < float > ( vibratoAmount1Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_vibratoAmount1Slider]
    }
    else if ( slider_that_was_moved == vibratoSpeed1Slider . get () )
    {
        //[UserSliderCode_vibratoSpeed1Slider] -- add your slider handling code here..
        vibratoSpeed1Label -> setText (
                                       vibratoSpeed1Slider -> getTextFromValue (
                                                                                vibratoSpeed1Slider -> getValue () ) + "%"
                                     , dontSendNotification );
        dispatcher -> liveVibratoSpeedChangedListeners -> call (
                                                                &LiveVibratoSpeedChanged::onLiveVibratoSpeedChanged
                                                              , SID_VOICE_1
                                                              , static_cast < float > ( vibratoSpeed1Slider -> getValue () / 100.0 ) );
        dispatcher -> exportVibratoSpeedChanged -> call (
                                                         &ExportVibratoSpeedChanged::onExportVibratoSpeedChanged
                                                       , SID_VOICE_1
                                                       , static_cast < float > ( vibratoSpeed1Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_vibratoSpeed1Slider]
    }
    else if ( slider_that_was_moved == pulseWidth1Slider . get () )
    {
        //[UserSliderCode_pulseWidth1Slider] -- add your slider handling code here..
        pulseWidth1Label -> setText (
                                     pulseWidth1Slider -> getTextFromValue (
                                                                            pulseWidth1Slider -> getValue () ) + "%"
                                   , dontSendNotification );
        dispatcher -> livePulseWidthChangedListeners -> call (
                                                              &LivePulseWidthChanged::onLivePulseWidthChanged
                                                            , SID_VOICE_1
                                                            , static_cast < float > ( pulseWidth1Slider -> getValue () / 100.0 ) );
        dispatcher -> exportPulseWidthChanged -> call (
                                                       &ExportPulseWidthChanged::onExportPulseWidthChanged
                                                     , SID_VOICE_1
                                                     , static_cast < float > ( pulseWidth1Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_pulseWidth1Slider]
    }
    else if ( slider_that_was_moved == vibratoDelay1Slider . get () )
    {
        //[UserSliderCode_vibratoDelay1Slider] -- add your slider handling code here..
        vibratoDelay1Label -> setText (
                                       vibratoDelay1Slider -> getTextFromValue (
                                                                                vibratoDelay1Slider -> getValue () )
                                     , dontSendNotification );
        dispatcher -> liveVibratoDelayChangedListeners -> call (
                                                                &LiveVibratoDelayChanged::onLiveVibratoDelayChanged
                                                              , SID_VOICE_1
                                                              , static_cast < unsigned int > ( vibratoDelay1Slider -> getValue () ) );
        //[/UserSliderCode_vibratoDelay1Slider]
    }
    else if ( slider_that_was_moved == patch2Slider . get () )
    {
        //[UserSliderCode_patch2Slider] -- add your slider handling code here..
        patch2Label -> setText (
                                patch2Slider -> getTextFromValue (
                                                                  patch2Slider -> getValue () )
                              , dontSendNotification );
        dispatcher -> livePatchChangedListeners -> call (
                                                         &LivePatchChanged::onLivePatchChanged
                                                       , SID_VOICE_2
                                                       , static_cast < unsigned int > ( patch2Slider -> getValue () ) - 1 );
        dispatcher -> exportPatchChanged -> call (
                                                  &ExportPatchChanged::onExportPatchChanged
                                                , SID_VOICE_2
                                                , static_cast < unsigned int > ( patch2Slider -> getValue () ) - 1 );
        //[/UserSliderCode_patch2Slider]
    }
    else if ( slider_that_was_moved == attack2Slider . get () )
    {
        //[UserSliderCode_attack2Slider] -- add your slider handling code here..
        attack2Label -> setText (
                                 attack2Slider -> getTextFromValue (
                                                                    attack2Slider -> getValue () )
                               , dontSendNotification );
        dispatcher -> liveAttackChangedListeners -> call (
                                                          &LiveAttackChanged::onLiveAttackChanged
                                                        , SID_VOICE_2
                                                        , static_cast < unsigned int > ( attack2Slider -> getValue () ) );
        dispatcher -> exportAttackChanged -> call (
                                                   &ExportAttackChanged::onExportAttackChanged
                                                 , SID_VOICE_2
                                                 , static_cast < unsigned int > ( attack2Slider -> getValue () ) );
        //[/UserSliderCode_attack2Slider]
    }
    else if ( slider_that_was_moved == decay2Slider . get () )
    {
        //[UserSliderCode_decay2Slider] -- add your slider handling code here..
        decay2Label -> setText (
                                decay2Slider -> getTextFromValue (
                                                                  decay2Slider -> getValue () )
                              , dontSendNotification );
        dispatcher -> liveDecayChangedListeners -> call (
                                                         &LiveDecayChanged::onLiveDecayChanged
                                                       , SID_VOICE_2
                                                       , static_cast < unsigned int > ( decay2Slider -> getValue () ) );
        dispatcher -> exportDecayChanged -> call (
                                                  &ExportDecayChanged::onExportDecayChanged
                                                , SID_VOICE_2
                                                , static_cast < unsigned int > ( decay2Slider -> getValue () ) );
        //[/UserSliderCode_decay2Slider]
    }
    else if ( slider_that_was_moved == sustain2Slider . get () )
    {
        //[UserSliderCode_sustain2Slider] -- add your slider handling code here..
        sustain2Label -> setText (
                                  sustain2Slider -> getTextFromValue (
                                                                      sustain2Slider -> getValue () )
                                , dontSendNotification );
        dispatcher -> liveSustainChangedListeners -> call (
                                                           &LiveSustainChanged::onLiveSustainChanged
                                                         , SID_VOICE_2
                                                         , static_cast < unsigned int > ( sustain2Slider -> getValue () ) );
        dispatcher -> exportSustainChanged -> call (
                                                    &ExportSustainChanged::onExportSustainChanged
                                                  , SID_VOICE_2
                                                  , static_cast < unsigned int > ( sustain2Slider -> getValue () ) );
        //[/UserSliderCode_sustain2Slider]
    }
    else if ( slider_that_was_moved == release2Slider . get () )
    {
        //[UserSliderCode_release2Slider] -- add your slider handling code here..
        release2Label -> setText (
                                  release2Slider -> getTextFromValue (
                                                                      release2Slider -> getValue () )
                                , dontSendNotification );
        dispatcher -> liveReleaseChangedListeners -> call (
                                                           &LiveReleaseChanged::onLiveReleaseChanged
                                                         , SID_VOICE_2
                                                         , static_cast < unsigned int > ( release2Slider -> getValue () ) );
        dispatcher -> exportReleaseChanged -> call (
                                                    &ExportReleaseChanged::onExportReleaseChanged
                                                  , SID_VOICE_2
                                                  , static_cast < unsigned int > ( release2Slider -> getValue () ) );
        //[/UserSliderCode_release2Slider]
    }
    else if ( slider_that_was_moved == pitchBend2Slider . get () )
    {
        //[UserSliderCode_pitchBend2Slider] -- add your slider handling code here..
        pitchBend2Label -> setText (
                                    pitchBend2Slider -> getTextFromValue (
                                                                          pitchBend2Slider -> getValue () ) + "%"
                                  , dontSendNotification );
        dispatcher -> livePitchBendChangedListeners -> call (
                                                             &LivePitchBendChanged::onLivePitchBendChanged
                                                           , SID_VOICE_2
                                                           , static_cast < float > ( pitchBend2Slider -> getValue () / 100.0 ) );
        dispatcher -> exportPitchBendChanged -> call (
                                                      &ExportPitchBendChanged::onExportPitchBendChanged
                                                    , SID_VOICE_2
                                                    , static_cast < float > ( pitchBend2Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_pitchBend2Slider]
    }
    else if ( slider_that_was_moved == vibratoAmount2Slider . get () )
    {
        //[UserSliderCode_vibratoAmount2Slider] -- add your slider handling code here..
        vibratoAmount2Label -> setText (
                                        vibratoAmount2Slider -> getTextFromValue (
                                                                                  vibratoAmount2Slider -> getValue () ) + "%"
                                      , dontSendNotification );
        dispatcher -> liveVibratoAmountChangedListeners -> call (
                                                                 &LiveVibratoAmountChanged::onLiveVibratoAmountChanged
                                                               , SID_VOICE_2
                                                               , static_cast < float > ( vibratoAmount2Slider -> getValue () / 100.0 ) );
        dispatcher -> exportVibratoAmountChanged -> call (
                                                          &ExportVibratoAmountChanged::onExportVibratoAmountChanged
                                                        , SID_VOICE_2
                                                        , static_cast < float > ( vibratoAmount2Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_vibratoAmount2Slider]
    }
    else if ( slider_that_was_moved == vibratoSpeed2Slider . get () )
    {
        //[UserSliderCode_vibratoSpeed2Slider] -- add your slider handling code here..
        vibratoSpeed2Label -> setText (
                                       vibratoSpeed2Slider -> getTextFromValue (
                                                                                vibratoSpeed2Slider -> getValue () ) + "%"
                                     , dontSendNotification );
        dispatcher -> liveVibratoSpeedChangedListeners -> call (
                                                                &LiveVibratoSpeedChanged::onLiveVibratoSpeedChanged
                                                              , SID_VOICE_2
                                                              , static_cast < float > ( vibratoSpeed2Slider -> getValue () / 100.0 ) );
        dispatcher -> exportVibratoSpeedChanged -> call (
                                                         &ExportVibratoSpeedChanged::onExportVibratoSpeedChanged
                                                       , SID_VOICE_2
                                                       , static_cast < float > ( vibratoSpeed2Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_vibratoSpeed2Slider]
    }
    else if ( slider_that_was_moved == pulseWidth2Slider . get () )
    {
        //[UserSliderCode_pulseWidth2Slider] -- add your slider handling code here..
        pulseWidth2Label -> setText (
                                     pulseWidth2Slider -> getTextFromValue (
                                                                            pulseWidth2Slider -> getValue () ) + "%"
                                   , dontSendNotification );
        dispatcher -> livePulseWidthChangedListeners -> call (
                                                              &LivePulseWidthChanged::onLivePulseWidthChanged
                                                            , SID_VOICE_2
                                                            , static_cast < float > ( pulseWidth2Slider -> getValue () / 100.0 ) );
        dispatcher -> exportPulseWidthChanged -> call (
                                                       &ExportPulseWidthChanged::onExportPulseWidthChanged
                                                     , SID_VOICE_2
                                                     , static_cast < float > ( pulseWidth2Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_pulseWidth2Slider]
    }
    else if ( slider_that_was_moved == vibratoDelay2Slider . get () )
    {
        //[UserSliderCode_vibratoDelay2Slider] -- add your slider handling code here..
        vibratoDelay2Label -> setText (
                                       vibratoDelay2Slider -> getTextFromValue (
                                                                                vibratoDelay2Slider -> getValue () )
                                     , dontSendNotification );
        dispatcher -> liveVibratoDelayChangedListeners -> call (
                                                                &LiveVibratoDelayChanged::onLiveVibratoDelayChanged
                                                              , SID_VOICE_2
                                                              , static_cast < unsigned int > ( vibratoAmount2Slider -> getValue () ) );
        //[/UserSliderCode_vibratoDelay2Slider]
    }
    else if ( slider_that_was_moved == patch3Slider . get () )
    {
        //[UserSliderCode_patch3Slider] -- add your slider handling code here..
        patch3Label -> setText (
                                patch3Slider -> getTextFromValue (
                                                                  patch3Slider -> getValue () )
                              , dontSendNotification );
        dispatcher -> livePatchChangedListeners -> call (
                                                         &LivePatchChanged::onLivePatchChanged
                                                       , SID_VOICE_3
                                                       , static_cast < unsigned int > ( patch3Slider -> getValue () ) - 1 );
        dispatcher -> exportPatchChanged -> call (
                                                  &ExportPatchChanged::onExportPatchChanged
                                                , SID_VOICE_3
                                                , static_cast < unsigned int > ( patch3Slider -> getValue () ) - 1 );
        //[/UserSliderCode_patch3Slider]
    }
    else if ( slider_that_was_moved == attack3Slider . get () )
    {
        //[UserSliderCode_attack3Slider] -- add your slider handling code here..
        attack3Label -> setText (
                                 attack3Slider -> getTextFromValue (
                                                                    attack3Slider -> getValue () )
                               , dontSendNotification );
        dispatcher -> liveAttackChangedListeners -> call (
                                                          &LiveAttackChanged::onLiveAttackChanged
                                                        , SID_VOICE_3
                                                        , static_cast < unsigned int > ( attack3Slider -> getValue () ) );
        dispatcher -> exportAttackChanged -> call (
                                                   &ExportAttackChanged::onExportAttackChanged
                                                 , SID_VOICE_3
                                                 , static_cast < unsigned int > ( attack3Slider -> getValue () ) );
        //[/UserSliderCode_attack3Slider]
    }
    else if ( slider_that_was_moved == decay3Slider . get () )
    {
        //[UserSliderCode_decay3Slider] -- add your slider handling code here..
        decay3Label -> setText (
                                decay3Slider -> getTextFromValue (
                                                                  decay3Slider -> getValue () )
                              , dontSendNotification );
        dispatcher -> liveDecayChangedListeners -> call (
                                                         &LiveDecayChanged::onLiveDecayChanged
                                                       , SID_VOICE_3
                                                       , static_cast < unsigned int > ( decay3Slider -> getValue () ) );
        dispatcher -> exportDecayChanged -> call (
                                                  &ExportDecayChanged::onExportDecayChanged
                                                , SID_VOICE_3
                                                , static_cast < unsigned int > ( decay3Slider -> getValue () ) );
        //[/UserSliderCode_decay3Slider]
    }
    else if ( slider_that_was_moved == sustain3Slider . get () )
    {
        //[UserSliderCode_sustain3Slider] -- add your slider handling code here..
        sustain3Label -> setText (
                                  sustain3Slider -> getTextFromValue (
                                                                      sustain3Slider -> getValue () )
                                , dontSendNotification );
        dispatcher -> liveSustainChangedListeners -> call (
                                                           &LiveSustainChanged::onLiveSustainChanged
                                                         , SID_VOICE_3
                                                         , static_cast < unsigned int > ( sustain3Slider -> getValue () ) );
        dispatcher -> exportSustainChanged -> call (
                                                    &ExportSustainChanged::onExportSustainChanged
                                                  , SID_VOICE_3
                                                  , static_cast < unsigned int > ( sustain3Slider -> getValue () ) );
        //[/UserSliderCode_sustain3Slider]
    }
    else if ( slider_that_was_moved == release3Slider . get () )
    {
        //[UserSliderCode_release3Slider] -- add your slider handling code here..
        release3Label -> setText (
                                  release3Slider -> getTextFromValue (
                                                                      release3Slider -> getValue () )
                                , dontSendNotification );
        dispatcher -> liveReleaseChangedListeners -> call (
                                                           &LiveReleaseChanged::onLiveReleaseChanged
                                                         , SID_VOICE_3
                                                         , static_cast < unsigned int > ( release3Slider -> getValue () ) );
        dispatcher -> exportReleaseChanged -> call (
                                                    &ExportReleaseChanged::onExportReleaseChanged
                                                  , SID_VOICE_3
                                                  , static_cast < unsigned int > ( release3Slider -> getValue () ) );
        //[/UserSliderCode_release3Slider]
    }
    else if ( slider_that_was_moved == pitchBend3Slider . get () )
    {
        //[UserSliderCode_pitchBend3Slider] -- add your slider handling code here..
        pitchBend3Label -> setText (
                                    pitchBend3Slider -> getTextFromValue (
                                                                          pitchBend3Slider -> getValue () ) + "%"
                                  , dontSendNotification );
        dispatcher -> livePitchBendChangedListeners -> call (
                                                             &LivePitchBendChanged::onLivePitchBendChanged
                                                           , SID_VOICE_3
                                                           , static_cast < float > ( pitchBend3Slider -> getValue () / 100.0 ) );
        dispatcher -> exportPitchBendChanged -> call (
                                                      &ExportPitchBendChanged::onExportPitchBendChanged
                                                    , SID_VOICE_3
                                                    , static_cast < float > ( pitchBend3Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_pitchBend3Slider]
    }
    else if ( slider_that_was_moved == vibratoAmount3Slider . get () )
    {
        //[UserSliderCode_vibratoAmount3Slider] -- add your slider handling code here..
        vibratoAmount3Label -> setText (
                                        vibratoAmount3Slider -> getTextFromValue (
                                                                                  vibratoAmount3Slider -> getValue () ) + "%"
                                      , dontSendNotification );
        dispatcher -> liveVibratoAmountChangedListeners -> call (
                                                                 &LiveVibratoAmountChanged::onLiveVibratoAmountChanged
                                                               , SID_VOICE_3
                                                               , static_cast < float > ( vibratoAmount3Slider -> getValue () / 100.0 ) );
        dispatcher -> exportVibratoAmountChanged -> call (
                                                          &ExportVibratoAmountChanged::onExportVibratoAmountChanged
                                                        , SID_VOICE_3
                                                        , static_cast < float > ( vibratoAmount3Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_vibratoAmount3Slider]
    }
    else if ( slider_that_was_moved == vibratoSpeed3Slider . get () )
    {
        //[UserSliderCode_vibratoSpeed3Slider] -- add your slider handling code here..
        vibratoSpeed3Label -> setText (
                                       vibratoSpeed3Slider -> getTextFromValue (
                                                                                vibratoSpeed3Slider -> getValue () ) + "%"
                                     , dontSendNotification );
        dispatcher -> liveVibratoSpeedChangedListeners -> call (
                                                                &LiveVibratoSpeedChanged::onLiveVibratoSpeedChanged
                                                              , SID_VOICE_3
                                                              , static_cast < float > ( vibratoSpeed3Slider -> getValue () / 100.0 ) );
        dispatcher -> exportVibratoSpeedChanged -> call (
                                                         &ExportVibratoSpeedChanged::onExportVibratoSpeedChanged
                                                       , SID_VOICE_3
                                                       , static_cast < float > ( vibratoSpeed3Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_vibratoSpeed3Slider]
    }
    else if ( slider_that_was_moved == pulseWidth3Slider . get () )
    {
        //[UserSliderCode_pulseWidth3Slider] -- add your slider handling code here..
        pulseWidth3Label -> setText (
                                     pulseWidth3Slider -> getTextFromValue (
                                                                            pulseWidth3Slider -> getValue () ) + "%"
                                   , dontSendNotification );
        dispatcher -> livePulseWidthChangedListeners -> call (
                                                              &LivePulseWidthChanged::onLivePulseWidthChanged
                                                            , SID_VOICE_3
                                                            , static_cast < float > ( pulseWidth3Slider -> getValue () / 100.0 ) );
        dispatcher -> exportPulseWidthChanged -> call (
                                                       &ExportPulseWidthChanged::onExportPulseWidthChanged
                                                     , SID_VOICE_3
                                                     , static_cast < float > ( pulseWidth3Slider -> getValue () / 100.0 ) );
        //[/UserSliderCode_pulseWidth3Slider]
    }
    else if ( slider_that_was_moved == vibratoDelay3Slider . get () )
    {
        //[UserSliderCode_vibratoDelay3Slider] -- add your slider handling code here..
        vibratoDelay3Label -> setText (
                                       vibratoDelay3Slider -> getTextFromValue (
                                                                                vibratoDelay3Slider -> getValue () )
                                     , dontSendNotification );
        dispatcher -> liveVibratoDelayChangedListeners -> call (
                                                                &LiveVibratoDelayChanged::onLiveVibratoDelayChanged
                                                              , SID_VOICE_3
                                                              , static_cast < unsigned int > ( vibratoAmount3Slider -> getValue () ) );
        //[/UserSliderCode_vibratoDelay3Slider]
    }
    else if ( slider_that_was_moved == cutoffSlider . get () )
    {
        //[UserSliderCode_cutoffSlider] -- add your slider handling code here..
        cutoffLabel -> setText (
                                cutoffSlider -> getTextFromValue (
                                                                  cutoffSlider -> getValue () )
                              , dontSendNotification );
        dispatcher -> liveCutoffChangedListeners -> call (
                                                          &LiveCutoffChanged::onLiveCutoffChanged
                                                        , static_cast < unsigned int > ( cutoffSlider -> getValue () ) );
        dispatcher -> exportCutoffChanged -> call (
                                                   &ExportCutoffChanged::onExportCutoffChanged
                                                 , static_cast < unsigned int > ( cutoffSlider -> getValue () ) );
        //[/UserSliderCode_cutoffSlider]
    }
    else if ( slider_that_was_moved == resonanceSlider . get () )
    {
        //[UserSliderCode_resonanceSlider] -- add your slider handling code here..
        resonanceLabel -> setText (
                                   resonanceSlider -> getTextFromValue (
                                                                        resonanceSlider -> getValue () )
                                 , dontSendNotification );
        dispatcher -> liveResonanceChangedListeners -> call (
                                                             &LiveResonanceChanged::onLiveResonanceChanged
                                                           , static_cast < unsigned int > ( resonanceSlider -> getValue () ) );
        dispatcher -> exportResonanceChanged -> call (
                                                      &ExportResonanceChanged::onExportResonanceChanged
                                                    , static_cast < unsigned int > ( resonanceSlider -> getValue () ) );
        //[/UserSliderCode_resonanceSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void
    LiveMode::labelTextChanged (
            Label* labelThatHasChanged
            )
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if ( labelThatHasChanged == titleLabel . get () )
    {
        //[UserLabelCode_titleLabel] -- add your label text handling code here..
        dispatcher -> liveTitleChangedListeners -> call (
                                                         &LiveTitleChanged::onLiveTitleChanged
                                                       , titleLabel -> getText () );
        //[/UserLabelCode_titleLabel]
    }
    else if ( labelThatHasChanged == artistLabel . get () )
    {
        //[UserLabelCode_artistLabel] -- add your label text handling code here..
        dispatcher -> liveArtistChangedListeners -> call (
                                                          &LiveArtistChanged::onLiveArtistChanged
                                                        , artistLabel -> getText () );
        //[/UserLabelCode_artistLabel]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void
    LiveMode::buttonClicked (
            Button* buttonThatWasClicked
            )
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if ( buttonThatWasClicked == exportButton . get () )
    {
        //[UserButtonCode_exportButton] -- add your button handler code here..
        // arm for recording
        armed             = true;
        quarterNoteTicked = true;
        dispatcher -> liveExportArmedListeners -> call (
                                                        &LiveExportArmed::onLiveExportArmed );
        SendInit ();
        repaint ();
        //[/UserButtonCode_exportButton]
    }
    else if ( buttonThatWasClicked == filter1Checkbox . get () )
    {
        //[UserButtonCode_filter1Checkbox] -- add your button handler code here..
        dispatcher -> liveVoiceFilterChangedListeners -> call (
                                                               &LiveVoiceFilterChanged::onLiveVoiceFilterChanged
                                                             , SID_VOICE_1
                                                             , filter1Checkbox -> getToggleState () );
        dispatcher -> exportVoiceFilterChanged -> call (
                                                        &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                      , SID_VOICE_1
                                                      , filter1Checkbox -> getToggleState () );
        //[/UserButtonCode_filter1Checkbox]
    }
    else if ( buttonThatWasClicked == filter2Checkbox . get () )
    {
        //[UserButtonCode_filter2Checkbox] -- add your button handler code here..
        dispatcher -> liveVoiceFilterChangedListeners -> call (
                                                               &LiveVoiceFilterChanged::onLiveVoiceFilterChanged
                                                             , SID_VOICE_2
                                                             , filter2Checkbox -> getToggleState () );
        dispatcher -> exportVoiceFilterChanged -> call (
                                                        &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                      , SID_VOICE_2
                                                      , filter2Checkbox -> getToggleState () );
        //[/UserButtonCode_filter2Checkbox]
    }
    else if ( buttonThatWasClicked == filter3Checkbox . get () )
    {
        //[UserButtonCode_filter3Checkbox] -- add your button handler code here..
        dispatcher -> liveVoiceFilterChangedListeners -> call (
                                                               &LiveVoiceFilterChanged::onLiveVoiceFilterChanged
                                                             , SID_VOICE_3
                                                             , filter3Checkbox -> getToggleState () );
        dispatcher -> exportVoiceFilterChanged -> call (
                                                        &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                      , SID_VOICE_3
                                                      , filter3Checkbox -> getToggleState () );
        //[/UserButtonCode_filter3Checkbox]
    }
    else if ( buttonThatWasClicked == filterLowPassCheckbox . get () )
    {
        //[UserButtonCode_filterLowPassCheckbox] -- add your button handler code here..
        dispatcher -> liveLowPassChangedListeners -> call (
                                                           &LiveLowPassChanged::onLiveLowPassChanged
                                                         , filterLowPassCheckbox -> getToggleState () );
        dispatcher -> exportLowPassChanged -> call (
                                                    &ExportLowPassChanged::onExportLowPassChanged
                                                  , filterLowPassCheckbox -> getToggleState () );
        //[/UserButtonCode_filterLowPassCheckbox]
    }
    else if ( buttonThatWasClicked == filterBandPassCheckbox . get () )
    {
        //[UserButtonCode_filterBandPassCheckbox] -- add your button handler code here..
        dispatcher -> liveBandPassChangedListeners -> call (
                                                            &LiveBandPassChanged::onLiveBandPassChanged
                                                          , filterBandPassCheckbox -> getToggleState () );
        dispatcher -> exportBandPassChanged -> call (
                                                     &ExportBandPassChanged::onExportBandPassChanged
                                                   , filterBandPassCheckbox -> getToggleState () );
        //[/UserButtonCode_filterBandPassCheckbox]
    }
    else if ( buttonThatWasClicked == filterHighPassCheckbox . get () )
    {
        //[UserButtonCode_filterHighPassCheckbox] -- add your button handler code here..
        dispatcher -> liveHighPassChangedListeners -> call (
                                                            &LiveHighPassChanged::onLiveHighPassChanged
                                                          , filterHighPassCheckbox -> getToggleState () );
        dispatcher -> exportHighPassChanged -> call (
                                                     &ExportHighPassChanged::onExportHighPassChanged
                                                   , filterHighPassCheckbox -> getToggleState () );
        //[/UserButtonCode_filterHighPassCheckbox]
    }
    else if ( buttonThatWasClicked == patchEditorButton . get () )
    {
        //[UserButtonCode_patchEditorButton] -- add your button handler code here..
        dispatcher -> livePatchEditorModeClickedListeners -> call (
                                                                   &LivePatchEditorModeClicked::onLivePatchEditorModeClicked );
        setVisible (
                    false );
        //[/UserButtonCode_patchEditorButton]
    }
    else if ( buttonThatWasClicked == addPatchButton . get () )
    {
        //[UserButtonCode_addPatchButton] -- add your button handler code here..
        if ( !patchSelector -> isVisible () )
        {
            patchSelector -> setVisible (
                                         true );
            dispatcher -> livePatchListModeListeners -> call (
                                                              &LivePatchListMode::onLivePatchListMode
                                                            , 1 );
            //patchListMode = 1;
        }
        else
        {
            patchSelector -> setVisible (
                                         false );
            dispatcher -> livePatchListModeListeners -> call (
                                                              &LivePatchListMode::onLivePatchListMode
                                                            , -1 );
            //patchListMode = -1;
        }
        //[/UserButtonCode_addPatchButton]
    }
    else if ( buttonThatWasClicked == replacePatchButton . get () )
    {
        //[UserButtonCode_replacePatchButton] -- add your button handler code here..
        if ( !patchSelector -> isVisible () )
        {
            patchSelector -> setVisible (
                                         true );
            dispatcher -> livePatchListModeListeners -> call (
                                                              &LivePatchListMode::onLivePatchListMode
                                                            , 2 );
            //patchListMode = 2;
        }
        else
        {
            patchSelector -> setVisible (
                                         false );
            dispatcher -> livePatchListModeListeners -> call (
                                                              &LivePatchListMode::onLivePatchListMode
                                                            , -1 );
            //patchListMode = -1;
        }
        //[/UserButtonCode_replacePatchButton]
    }
    else if ( buttonThatWasClicked == removePatchButton . get () )
    {
        //[UserButtonCode_removePatchButton] -- add your button handler code here..
        dispatcher -> liveRemovePatchClickedListeners -> call (
                                                               &LiveRemovePatchClicked::onLiveRemovePatchClicked );
        //refreshPatches();
        //[/UserButtonCode_removePatchButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}


//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void
    LiveMode::onProgramParameterChanged (
            unsigned int voice
          , unsigned int value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           patch1Slider -> setValue (
                                                                     value + 1
                                                                   , sendNotification /* dontSendNotification */ );
                                           patch1Label -> setText (
                                                                   patch1Slider -> getTextFromValue (
                                                                                                     patch1Slider -> getValue () )
                                                                 , dontSendNotification );
                                           dispatcher -> exportPatchChanged -> call (
                                                                                     &ExportPatchChanged::onExportPatchChanged
                                                                                   , SID_VOICE_1
                                                                                   , static_cast < unsigned int > ( patch1Slider -> getValue () ) - 1 );
                                           break;
                                       case SID_VOICE_2:
                                           patch2Slider -> setValue (
                                                                     value + 1
                                                                   , sendNotification /* dontSendNotification */ );
                                           patch2Label -> setText (
                                                                   patch2Slider -> getTextFromValue (
                                                                                                     patch2Slider -> getValue () )
                                                                 , dontSendNotification );
                                           dispatcher -> exportPatchChanged -> call (
                                                                                     &ExportPatchChanged::onExportPatchChanged
                                                                                   , SID_VOICE_2
                                                                                   , static_cast < unsigned int > ( patch2Slider -> getValue () ) - 1 );
                                           break;
                                       case SID_VOICE_3:
                                           patch3Slider -> setValue (
                                                                     value + 1
                                                                   , sendNotification /* dontSendNotification */ );
                                           patch3Label -> setText (
                                                                   patch3Slider -> getTextFromValue (
                                                                                                     patch3Slider -> getValue () )
                                                                 , dontSendNotification );
                                           dispatcher -> exportPatchChanged -> call (
                                                                                     &ExportPatchChanged::onExportPatchChanged
                                                                                   , SID_VOICE_3
                                                                                   , static_cast < unsigned int > ( patch3Slider -> getValue () ) - 1 );
                                           break;
                                       default: ;
                                   }
                               } );
}


//int LiveMode::getPatchListMode() const {
//	return patchListMode;
//}

void
    LiveMode::HidePatchSelector () const
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   patchSelector -> setVisible (
                                                                false );
                               } );
}


// TODO: Need to figure out what to do about this
void
    LiveMode::RefreshPatches ()
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   //patch1Slider->setRange(1, core->getPatchListSize(), 1);
                                   //patch2Slider->setRange(1, core->getPatchListSize(), 1);
                                   //patch3Slider->setRange(1, core->getPatchListSize(), 1);
                                   //patches->refresh();
                                   repaint ();
                               } );
}

auto
    LiveMode::GetPatchListIndex () const -> int { return patches -> getSelectedIndex (); }

void
    LiveMode::SendInit () const
{
    // send volume, patches, etc., here
    // patches
    // filter voices
    dispatcher -> exportVoiceFilterChanged -> call (
                                                    &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                  , SID_VOICE_1
                                                  , filter1Checkbox -> getToggleState () );
    dispatcher -> exportVoiceFilterChanged -> call (
                                                    &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                  , SID_VOICE_2
                                                  , filter2Checkbox -> getToggleState () );
    dispatcher -> exportVoiceFilterChanged -> call (
                                                    &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                  , SID_VOICE_3
                                                  , filter3Checkbox -> getToggleState () );

    // volume
    dispatcher -> exportVolumeChanged -> call (
                                               &ExportVolumeChanged::onExportVolumeChanged
                                             , static_cast < unsigned int > ( volumeSlider -> getValue () ) );
    // cutoff
    dispatcher -> exportCutoffChanged -> call (
                                               &ExportCutoffChanged::onExportCutoffChanged
                                             , static_cast < unsigned int > ( cutoffSlider -> getValue () ) );
    // resonance
    dispatcher -> exportResonanceChanged -> call (
                                                  &ExportResonanceChanged::onExportResonanceChanged
                                                , static_cast < unsigned int > ( resonanceSlider -> getValue () ) );
    // filter type
    dispatcher -> exportLowPassChanged -> call (
                                                &ExportLowPassChanged::onExportLowPassChanged
                                              , filterLowPassCheckbox -> getToggleState () );
    dispatcher -> exportBandPassChanged -> call (
                                                 &ExportBandPassChanged::onExportBandPassChanged
                                               , filterBandPassCheckbox -> getToggleState () );
    dispatcher -> exportHighPassChanged -> call (
                                                 &ExportHighPassChanged::onExportHighPassChanged
                                               , filterHighPassCheckbox -> getToggleState () );
}

void
    LiveMode::onPulseWidthParameterChanged (
            const unsigned int voice
          , float              value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           pulseWidth1Slider -> setValue (
                                                                          value * 100.0f
                                                                        , dontSendNotification );
                                           pulseWidth1Label -> setText (
                                                                        pulseWidth1Slider -> getTextFromValue (
                                                                                                               pulseWidth1Slider -> getValue () ) + "%"
                                                                      , dontSendNotification );
                                           dispatcher -> exportPulseWidthChanged -> call (
                                                                                          &ExportPulseWidthChanged::onExportPulseWidthChanged
                                                                                        , SID_VOICE_1
                                                                                        , static_cast < float > ( pulseWidth1Slider -> getValue () / 100.0 ) );
                                           break;
                                       case SID_VOICE_2:
                                           pulseWidth2Slider -> setValue (
                                                                          value * 100.0f
                                                                        , dontSendNotification );
                                           pulseWidth2Label -> setText (
                                                                        pulseWidth2Slider -> getTextFromValue (
                                                                                                               pulseWidth2Slider -> getValue () ) + "%"
                                                                      , dontSendNotification );
                                           dispatcher -> exportPulseWidthChanged -> call (
                                                                                          &ExportPulseWidthChanged::onExportPulseWidthChanged
                                                                                        , SID_VOICE_2
                                                                                        , static_cast < float > ( pulseWidth2Slider -> getValue () / 100.0 ) );
                                           break;
                                       case SID_VOICE_3:
                                           pulseWidth3Slider -> setValue (
                                                                          value * 100.0f
                                                                        , dontSendNotification );
                                           pulseWidth3Label -> setText (
                                                                        pulseWidth3Slider -> getTextFromValue (
                                                                                                               pulseWidth3Slider -> getValue () ) + "%"
                                                                      , dontSendNotification );
                                           dispatcher -> exportPulseWidthChanged -> call (
                                                                                          &ExportPulseWidthChanged::onExportPulseWidthChanged
                                                                                        , SID_VOICE_3
                                                                                        , static_cast < float > ( pulseWidth3Slider -> getValue () / 100.0 ) );
                                           break;
                                       default:;
                                   }
                               } );
}

void
    LiveMode::onAttackParameterChanged (
            const unsigned int voice
          , unsigned int value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           attack1Slider -> setValue (
                                                                      value
                                                                    , dontSendNotification );
                                           attack1Label -> setText (
                                                                    attack1Slider -> getTextFromValue (
                                                                                                       attack1Slider -> getValue () )
                                                                  , dontSendNotification );
                                           dispatcher -> exportAttackChanged -> call (
                                                                                      &ExportAttackChanged::onExportAttackChanged
                                                                                    , SID_VOICE_1
                                                                                    , static_cast < unsigned int > ( attack1Slider -> getValue () ) );
                                           break;
                                       case SID_VOICE_2:
                                           attack2Slider -> setValue (
                                                                      value
                                                                    , dontSendNotification );
                                           attack2Label -> setText (
                                                                    attack2Slider -> getTextFromValue (
                                                                                                       attack2Slider -> getValue () )
                                                                  , dontSendNotification );
                                           dispatcher -> exportAttackChanged -> call (
                                                                                      &ExportAttackChanged::onExportAttackChanged
                                                                                    , SID_VOICE_2
                                                                                    , static_cast < unsigned int > ( attack2Slider -> getValue () ) );
                                           break;
                                       case SID_VOICE_3:
                                           attack3Slider -> setValue (
                                                                      value
                                                                    , dontSendNotification );
                                           attack3Label -> setText (
                                                                    attack3Slider -> getTextFromValue (
                                                                                                       attack3Slider -> getValue () )
                                                                  , dontSendNotification );
                                           dispatcher -> exportAttackChanged -> call (
                                                                                      &ExportAttackChanged::onExportAttackChanged
                                                                                    , SID_VOICE_3
                                                                                    , static_cast < unsigned int > ( attack3Slider -> getValue () ) );
                                           break;
                                   }
                               } );
}

void
    LiveMode::onDecayParameterChanged (
            const unsigned int voice
          , unsigned int value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           decay1Slider -> setValue (
                                                                     value
                                                                   , dontSendNotification );
                                           decay1Label -> setText (
                                                                   decay1Slider -> getTextFromValue (
                                                                                                     decay1Slider -> getValue () )
                                                                 , dontSendNotification );
                                           dispatcher -> exportDecayChanged -> call (
                                                                                     &ExportDecayChanged::onExportDecayChanged
                                                                                   , SID_VOICE_1
                                                                                   , static_cast < unsigned int > ( decay1Slider -> getValue () ) );
                                           break;
                                       case SID_VOICE_2:
                                           decay2Slider -> setValue (
                                                                     value
                                                                   , dontSendNotification );
                                           decay2Label -> setText (
                                                                   decay2Slider -> getTextFromValue (
                                                                                                     decay2Slider -> getValue () )
                                                                 , dontSendNotification );
                                           dispatcher -> exportDecayChanged -> call (
                                                                                     &ExportDecayChanged::onExportDecayChanged
                                                                                   , SID_VOICE_2
                                                                                   , static_cast < unsigned int > ( decay2Slider -> getValue () ) );
                                           break;
                                       case SID_VOICE_3:
                                           decay3Slider -> setValue (
                                                                     value
                                                                   , dontSendNotification );
                                           decay3Label -> setText (
                                                                   decay3Slider -> getTextFromValue (
                                                                                                     decay3Slider -> getValue () )
                                                                 , dontSendNotification );
                                           dispatcher -> exportDecayChanged -> call (
                                                                                     &ExportDecayChanged::onExportDecayChanged
                                                                                   , SID_VOICE_3
                                                                                   , static_cast < unsigned int > ( decay3Slider -> getValue () ) );
                                           break;
                                   }
                               } );
}

void
    LiveMode::onSustainParameterChanged (
            const unsigned int voice
          , unsigned int value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           sustain1Slider -> setValue (
                                                                       value
                                                                     , dontSendNotification );
                                           sustain1Label -> setText (
                                                                     sustain1Slider -> getTextFromValue (
                                                                                                         sustain1Slider -> getValue () )
                                                                   , dontSendNotification );
                                           dispatcher -> exportSustainChanged -> call (
                                                                                       &ExportSustainChanged::onExportSustainChanged
                                                                                     , SID_VOICE_1
                                                                                     , static_cast < unsigned int > ( sustain1Slider -> getValue () ) );
                                           break;
                                       case SID_VOICE_2:
                                           sustain2Slider -> setValue (
                                                                       value
                                                                     , dontSendNotification );
                                           sustain2Label -> setText (
                                                                     sustain2Slider -> getTextFromValue (
                                                                                                         sustain2Slider -> getValue () )
                                                                   , dontSendNotification );
                                           dispatcher -> exportSustainChanged -> call (
                                                                                       &ExportSustainChanged::onExportSustainChanged
                                                                                     , SID_VOICE_2
                                                                                     , static_cast < unsigned int > ( sustain2Slider -> getValue () ) );
                                           break;
                                       case SID_VOICE_3:
                                           sustain3Slider -> setValue (
                                                                       value
                                                                     , dontSendNotification );
                                           sustain3Label -> setText (
                                                                     sustain3Slider -> getTextFromValue (
                                                                                                         sustain3Slider -> getValue () )
                                                                   , dontSendNotification );
                                           dispatcher -> exportSustainChanged -> call (
                                                                                       &ExportSustainChanged::onExportSustainChanged
                                                                                     , SID_VOICE_3
                                                                                     , static_cast < unsigned int > ( sustain3Slider -> getValue () ) );
                                           break;
                                   }
                               } );
}

void
    LiveMode::onReleaseParameterChanged (
            const unsigned int voice
          , unsigned int value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           release1Slider -> setValue (
                                                                       value
                                                                     , dontSendNotification );
                                           release1Label -> setText (
                                                                     release1Slider -> getTextFromValue (
                                                                                                         release1Slider -> getValue () )
                                                                   , dontSendNotification );
                                           dispatcher -> exportReleaseChanged -> call (
                                                                                       &ExportReleaseChanged::onExportReleaseChanged
                                                                                     , SID_VOICE_1
                                                                                     , static_cast < unsigned int > ( release1Slider -> getValue () ) );
                                           break;
                                       case SID_VOICE_2:
                                           release2Slider -> setValue (
                                                                       value
                                                                     , dontSendNotification );
                                           release2Label -> setText (
                                                                     release2Slider -> getTextFromValue (
                                                                                                         release2Slider -> getValue () )
                                                                   , dontSendNotification );
                                           dispatcher -> exportReleaseChanged -> call (
                                                                                       &ExportReleaseChanged::onExportReleaseChanged
                                                                                     , SID_VOICE_2
                                                                                     , static_cast < unsigned int > ( release2Slider -> getValue () ) );
                                           break;
                                       case SID_VOICE_3:
                                           release3Slider -> setValue (
                                                                       value
                                                                     , dontSendNotification );
                                           release3Label -> setText (
                                                                     release3Slider -> getTextFromValue (
                                                                                                         release3Slider -> getValue () )
                                                                   , dontSendNotification );
                                           dispatcher -> exportReleaseChanged -> call (
                                                                                       &ExportReleaseChanged::onExportReleaseChanged
                                                                                     , SID_VOICE_3
                                                                                     , static_cast < unsigned int > ( release3Slider -> getValue () ) );
                                           break;
                                       default: ;
                                   }
                               } );
}

void
    LiveMode::onFilterVoiceParameterChanged (
            const unsigned int voice
          , bool         value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           filter1Checkbox -> setToggleState (
                                                                              value
                                                                            , dontSendNotification );
                                           dispatcher -> exportVoiceFilterChanged -> call (
                                                                                           &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                                                         , SID_VOICE_1
                                                                                         , filter1Checkbox -> getToggleState () );
                                           break;
                                       case SID_VOICE_2:
                                           filter2Checkbox -> setToggleState (
                                                                              value
                                                                            , dontSendNotification );
                                           dispatcher -> exportVoiceFilterChanged -> call (
                                                                                           &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                                                         , SID_VOICE_2
                                                                                         , filter2Checkbox -> getToggleState () );
                                           break;
                                       case SID_VOICE_3:
                                           filter3Checkbox -> setToggleState (
                                                                              value
                                                                            , dontSendNotification );
                                           dispatcher -> exportVoiceFilterChanged -> call (
                                                                                           &ExportVoiceFilterChanged::onExportVoiceFilterChanged
                                                                                         , SID_VOICE_3
                                                                                         , filter3Checkbox -> getToggleState () );
                                           break;
                                       default: ;
                                   }
                               } );
}

void
    LiveMode::onCutoffParameterChanged (
            const unsigned int value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   cutoffSlider -> setValue (
                                                             value
                                                           , dontSendNotification );
                                   cutoffLabel -> setText (
                                                           cutoffSlider -> getTextFromValue (
                                                                                             cutoffSlider -> getValue () )
                                                         , dontSendNotification );
                               } );
    dispatcher -> exportCutoffChanged -> call (
                                               &ExportCutoffChanged::onExportCutoffChanged
                                             , static_cast < unsigned int > ( cutoffSlider -> getValue () ) );
}

void
    LiveMode::onVolumeParameterChanged (
            const unsigned int value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   volumeSlider -> setValue (
                                                             value
                                                           , dontSendNotification );
                                   volumeLabel -> setText (
                                                           volumeSlider -> getTextFromValue (
                                                                                             volumeSlider -> getValue () )
                                                         , dontSendNotification );
                               } );
    dispatcher -> exportVolumeChanged -> call (
                                               &ExportVolumeChanged::onExportVolumeChanged
                                             , static_cast < unsigned int > ( volumeSlider -> getValue () ) );
}

void
    LiveMode::onPitchBendParameterChanged (
            const unsigned int voice
          , float        value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           pitchBend1Slider -> setValue (
                                                                         value * 100.0f
                                                                       , dontSendNotification );
                                           pitchBend1Label -> setText (
                                                                       pitchBend1Slider -> getTextFromValue (
                                                                                                             pitchBend1Slider -> getValue () ) + "%"
                                                                     , dontSendNotification );
                                           dispatcher -> exportPitchBendChanged -> call (
                                                                                         &ExportPitchBendChanged::onExportPitchBendChanged
                                                                                       , SID_VOICE_1
                                                                                       , static_cast < float > ( pitchBend1Slider -> getValue () / 100.0 ) );
                                           break;
                                       case SID_VOICE_2:
                                           pitchBend2Slider -> setValue (
                                                                         value * 100.0f
                                                                       , dontSendNotification );
                                           pitchBend2Label -> setText (
                                                                       pitchBend2Slider -> getTextFromValue (
                                                                                                             pitchBend2Slider -> getValue () ) + "%"
                                                                     , dontSendNotification );
                                           dispatcher -> exportPitchBendChanged -> call (
                                                                                         &ExportPitchBendChanged::onExportPitchBendChanged
                                                                                       , SID_VOICE_2
                                                                                       , static_cast < float > ( pitchBend2Slider -> getValue () / 100.0 ) );
                                           break;
                                       case SID_VOICE_3:
                                           pitchBend3Slider -> setValue (
                                                                         value * 100.0f
                                                                       , dontSendNotification );
                                           pitchBend3Label -> setText (
                                                                       pitchBend3Slider -> getTextFromValue (
                                                                                                             pitchBend3Slider -> getValue () ) + "%"
                                                                     , dontSendNotification );
                                           dispatcher -> exportPitchBendChanged -> call (
                                                                                         &ExportPitchBendChanged::onExportPitchBendChanged
                                                                                       , SID_VOICE_3
                                                                                       , static_cast < float > ( pitchBend3Slider -> getValue () / 100.0 ) );
                                           break;
                                       default: ;
                                   }
                               } );
}

void
    LiveMode::onVibratoAmountParameterChanged (
            const unsigned int voice
          , float        value
            )
{
    if (value == 0)
    {
        auto i = 0;
    }

    if (value != 1)
    {
        auto i = 0;
    }

    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           vibratoAmount1Slider -> setValue (
                                                                             value * 100.0f
                                                                           , dontSendNotification );
                                           vibratoAmount1Label -> setText (
                                                                           vibratoAmount1Slider -> getTextFromValue (
                                                                                                                     vibratoAmount1Slider -> getValue () ) + "%"
                                                                         , dontSendNotification );
                                           dispatcher -> exportVibratoAmountChanged -> call (
                                                                                             &ExportVibratoAmountChanged::onExportVibratoAmountChanged
                                                                                           , SID_VOICE_1
                                                                                           , static_cast < float > ( vibratoAmount1Slider -> getValue () / 100.0 ) );
                                           break;
                                       case SID_VOICE_2:
                                           vibratoAmount2Slider -> setValue (
                                                                             value * 100.0f
                                                                           , dontSendNotification );
                                           vibratoAmount2Label -> setText (
                                                                           vibratoAmount2Slider -> getTextFromValue (
                                                                                                                     vibratoAmount2Slider -> getValue () ) + "%"
                                                                         , dontSendNotification );
                                           dispatcher -> exportVibratoAmountChanged -> call (
                                                                                             &ExportVibratoAmountChanged::onExportVibratoAmountChanged
                                                                                           , SID_VOICE_2
                                                                                           , static_cast < float > ( vibratoAmount2Slider -> getValue () / 100.0 ) );
                                           break;
                                       case SID_VOICE_3:
                                           vibratoAmount3Slider -> setValue (
                                                                             value * 100.0f
                                                                           , dontSendNotification );
                                           vibratoAmount3Label -> setText (
                                                                           vibratoAmount3Slider -> getTextFromValue (
                                                                                                                     vibratoAmount3Slider -> getValue () ) + "%"
                                                                         , dontSendNotification );
                                           dispatcher -> exportVibratoAmountChanged -> call (
                                                                                             &ExportVibratoAmountChanged::onExportVibratoAmountChanged
                                                                                           , SID_VOICE_3
                                                                                           , static_cast < float > ( vibratoAmount3Slider -> getValue () / 100.0 ) );
                                           break;
                                       default: ;
                                   }
                               } );
}

void
    LiveMode::onVibratoDelayParameterChanged (
            const unsigned voice
          , unsigned       value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           vibratoDelay1Slider -> setValue (
                                                                            value
                                                                          , dontSendNotification );
                                           vibratoDelay1Label -> setText (
                                                                          vibratoDelay1Slider -> getTextFromValue (
                                                                                                                   vibratoDelay1Slider -> getValue () )
                                                                        , dontSendNotification );
                                           break;
                                       case SID_VOICE_2:
                                           vibratoDelay2Slider -> setValue (
                                                                            value
                                                                          , dontSendNotification );
                                           vibratoDelay2Label -> setText (
                                                                          vibratoDelay2Slider -> getTextFromValue (
                                                                                                                   vibratoDelay2Slider -> getValue () )
                                                                        , dontSendNotification );
                                           break;
                                       case SID_VOICE_3:
                                           vibratoDelay3Slider -> setValue (
                                                                            value
                                                                          , dontSendNotification );
                                           vibratoDelay3Label -> setText (
                                                                          vibratoDelay3Slider -> getTextFromValue (
                                                                                                                   vibratoDelay3Slider -> getValue () )
                                                                        , dontSendNotification );
                                           break;
                                       default: ;
                                   }
                               } );
}

void
    LiveMode::onVibratoSpeedParameterChanged (
            const unsigned int voice
          , float              value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   switch ( voice )
                                   {
                                       case SID_VOICE_1:
                                           vibratoSpeed1Slider -> setValue (
                                                                            value * 100.0f
                                                                          , dontSendNotification );
                                           vibratoSpeed1Label -> setText (
                                                                          vibratoSpeed1Slider -> getTextFromValue (
                                                                                                                   vibratoSpeed1Slider -> getValue () ) + "%"
                                                                        , dontSendNotification );
                                           dispatcher -> exportVibratoSpeedChanged -> call (
                                                                                            &ExportVibratoSpeedChanged::onExportVibratoSpeedChanged
                                                                                          , SID_VOICE_1
                                                                                          , static_cast < float > ( vibratoSpeed1Slider -> getValue () / 100.0 ) );
                                           break;
                                       case SID_VOICE_2:
                                           vibratoSpeed2Slider -> setValue (
                                                                            value * 100.0f
                                                                          , dontSendNotification );
                                           vibratoSpeed2Label -> setText (
                                                                          vibratoSpeed2Slider -> getTextFromValue (
                                                                                                                   vibratoSpeed2Slider -> getValue () ) + "%"
                                                                        , dontSendNotification );
                                           dispatcher -> exportVibratoSpeedChanged -> call (
                                                                                            &ExportVibratoSpeedChanged::onExportVibratoSpeedChanged
                                                                                          , SID_VOICE_2
                                                                                          , static_cast < float > ( vibratoSpeed2Slider -> getValue () / 100.0 ) );
                                           break;
                                       case SID_VOICE_3:
                                           vibratoSpeed3Slider -> setValue (
                                                                            value * 100.0f
                                                                          , dontSendNotification );
                                           vibratoSpeed3Label -> setText (
                                                                          vibratoSpeed3Slider -> getTextFromValue (
                                                                                                                   vibratoSpeed3Slider -> getValue () ) + "%"
                                                                        , dontSendNotification );
                                           dispatcher -> exportVibratoSpeedChanged -> call (
                                                                                            &ExportVibratoSpeedChanged::onExportVibratoSpeedChanged
                                                                                          , SID_VOICE_3
                                                                                          , static_cast < float > ( vibratoSpeed3Slider -> getValue () / 100.0 ) );
                                           break;
                                       default: ;
                                   }
                               } );
}

void
    LiveMode::onPatchEditorLiveModeClicked ()
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   setVisible (
                                               true );
                               } );
}

void
    LiveMode::onBankProgramChanged (
            String                                   old_id
          , ReferenceCountedObjectPtr < SidProgram > program
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   patchSelector -> setVisible (
                                                                false );
                                   RefreshPatches ();
                               } );
}

void
    LiveMode::onLivePatchListChanged (
            const Array < String > names
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   int listSize = names . size ();
                                   if ( listSize < 2 )
                                       listSize = 2;
                                   patch1Slider -> setRange (
                                                             1
                                                           , listSize
                                                           , 1 );
                                   patch2Slider -> setRange (
                                                             1
                                                           , listSize
                                                           , 1 );
                                   patch3Slider -> setRange (
                                                             1
                                                           , listSize
                                                           , 1 );
                               } );
}

void
    LiveMode::onLiveTitleChanged (
            const String value
            )
{
    titleLabel -> setText (
                           value
                         , dontSendNotification );
}

void
    LiveMode::onLiveArtistChanged (
            const String value
            )
{
    artistLabel -> setText (
                            value
                          , dontSendNotification );
}

void
    LiveMode::onQuarterNoteTick (
            unsigned ppq
          , const bool     playing
            )
{
    if ( !playing ) { return; }

    quarterNoteTicked = true;
    startTimer (
                125 );
    // queue for display thread
    MessageManager::callAsync (
                               [=] () { repaint (); } );
}

void
    LiveMode::timerCallback ()
{
    stopTimer ();
    quarterNoteTicked = false;
    // queue for display thread
    MessageManager::callAsync (
                               [=] () { repaint (); } );
}

void
    LiveMode::onLiveDoneExporting ()
{
    armed = false;
    MessageManager::callAsync (
                               [=] () { repaint (); } );
}

void
    LiveMode::onShowExportManager (
            std::shared_ptr < Recorder > record
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   setVisible (
                                               false );
                               } );
}

void
    LiveMode::onResonanceParameterChanged (
            const unsigned int value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   resonanceSlider -> setValue (
                                                                value
                                                              , dontSendNotification );
                                   resonanceLabel -> setText (
                                                              resonanceSlider -> getTextFromValue (
                                                                                                   resonanceSlider -> getValue () )
                                                            , dontSendNotification );
                                   dispatcher -> exportResonanceChanged -> call (
                                                                                 &ExportResonanceChanged::onExportResonanceChanged
                                                                               , static_cast < unsigned int > ( resonanceSlider -> getValue () ) );
                               } );
}

void
    LiveMode::onLowPassParameterChanged (
            const bool value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   filterLowPassCheckbox -> setToggleState (
                                                                            value
                                                                          , dontSendNotification );
                                   dispatcher -> exportLowPassChanged -> call (
                                                                               &ExportLowPassChanged::onExportLowPassChanged
                                                                             , filterLowPassCheckbox -> getToggleState () );
                               } );
}

void
    LiveMode::onBandPassParameterChanged (
            const bool value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   filterBandPassCheckbox -> setToggleState (
                                                                             value
                                                                           , dontSendNotification );
                                   dispatcher -> exportBandPassChanged -> call (
                                                                                &ExportBandPassChanged::onExportBandPassChanged
                                                                              , filterBandPassCheckbox -> getToggleState () );
                               } );
}

void
    LiveMode::onHighPassParameterChanged (
            const bool value
            )
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   filterHighPassCheckbox -> setToggleState (
                                                                             value
                                                                           , dontSendNotification );
                                   dispatcher -> exportHighPassChanged -> call (
                                                                                &ExportHighPassChanged::onExportHighPassChanged
                                                                              , filterHighPassCheckbox -> getToggleState () );
                               } );
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="LiveMode" componentName=""
                 parentClasses="public Component, public ProgramParameterChanged, public PulseWidthParameterChanged, public AttackParameterChanged, public DecayParameterChanged, public SustainParameterChanged, public ReleaseParameterChanged, public FilterVoiceParameterChanged, public CutoffParameterChanged, public ResonanceParameterChanged, public LowPassParameterChanged, public BandPassParameterChanged, public HighPassParameterChanged, public VolumeParameterChanged, public PitchBendParameterChanged, public VibratoAmountParameterChanged, public VibratoSpeedParameterChanged, public TremoloAmountParameterChanged, public TremoloSpeedParameterChanged, public PatchEditorLiveModeClicked, public BankProgramChanged, public LivePatchListChanged"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="1" initialWidth="1024"
                 initialHeight="576">
  <BACKGROUND backgroundColour="ffffffff">
    <IMAGE pos="0 0 1024 576" resource="liveModeBackdrop_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="472 6 50 22" resource="recordIndicator_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="32 544 154 26" resource="liveModeButtonDown_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="472 6 50 22" resource="recordIndicatorblink_png" opacity="0.001"
           mode="0"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="2cd41b7a823a6bbf" memberName="volumeSlider"
          virtualName="" explicitFocusOrder="0" pos="384 32 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="77267ab013a4c949" memberName="volumeLabel"
         virtualName="" explicitFocusOrder="0" pos="384 8 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="new slider" id="ea2554994a1bd489" memberName="patch1Slider"
          virtualName="" explicitFocusOrder="0" pos="32 120 48 48" min="1.0"
          max="2.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="4e8cc26315306594" memberName="attack1Slider"
          virtualName="" explicitFocusOrder="0" pos="144 120 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="1ad24ac7e382596a" memberName="decay1Slider"
          virtualName="" explicitFocusOrder="0" pos="224 120 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="86ceaac8aeaf564e" memberName="sustain1Slider"
          virtualName="" explicitFocusOrder="0" pos="304 120 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="67a02650e3bf1cea" memberName="release1Slider"
          virtualName="" explicitFocusOrder="0" pos="384 120 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="b6be2677655f033e" memberName="pitchBend1Slider"
          virtualName="" explicitFocusOrder="0" pos="472 120 48 48" min="-100.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="a1b1f8045265aad5" memberName="vibratoAmount1Slider"
          virtualName="" explicitFocusOrder="0" pos="584 120 48 48" min="0.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="3ebe6e33921f6639" memberName="vibratoSpeed1Slider"
          virtualName="" explicitFocusOrder="0" pos="664 120 48 48" min="0.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="d7186db8daf701a8" memberName="pulseWidth1Slider"
          virtualName="" explicitFocusOrder="0" pos="831 120 48 48" min="-100.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="b29eeec624d1b516" memberName="vibratoDelay1Slider"
          virtualName="" explicitFocusOrder="0" pos="745 120 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="97a610ec74d92c88" memberName="patch2Slider"
          virtualName="" explicitFocusOrder="0" pos="32 208 48 48" min="1.0"
          max="2.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="329c507dbfd0dced" memberName="attack2Slider"
          virtualName="" explicitFocusOrder="0" pos="144 208 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="6fcccad9eed35e93" memberName="decay2Slider"
          virtualName="" explicitFocusOrder="0" pos="224 208 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="5a0d208faa663bf6" memberName="sustain2Slider"
          virtualName="" explicitFocusOrder="0" pos="304 208 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="af92bd99b2e6de2a" memberName="release2Slider"
          virtualName="" explicitFocusOrder="0" pos="384 208 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="acc7bbe5ca61970e" memberName="pitchBend2Slider"
          virtualName="" explicitFocusOrder="0" pos="472 208 48 48" min="-100.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="cf2cea10f5929ac1" memberName="vibratoAmount2Slider"
          virtualName="" explicitFocusOrder="0" pos="584 208 48 48" min="0.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="ec8efa74f5789c53" memberName="vibratoSpeed2Slider"
          virtualName="" explicitFocusOrder="0" pos="664 208 48 48" min="0.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="6ab11e645d2801bf" memberName="pulseWidth2Slider"
          virtualName="" explicitFocusOrder="0" pos="831 208 48 48" min="-100.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="4480da81b8994903" memberName="vibratoDelay2Slider"
          virtualName="" explicitFocusOrder="0" pos="745 208 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="4d24c12777705e65" memberName="patch3Slider"
          virtualName="" explicitFocusOrder="0" pos="32 296 48 48" min="1.0"
          max="2.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="7f7c4495f4d6895c" memberName="attack3Slider"
          virtualName="" explicitFocusOrder="0" pos="144 296 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="84360ec912119f72" memberName="decay3Slider"
          virtualName="" explicitFocusOrder="0" pos="224 296 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="9bef2d94e5c3a910" memberName="sustain3Slider"
          virtualName="" explicitFocusOrder="0" pos="304 296 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="276013a08dade830" memberName="release3Slider"
          virtualName="" explicitFocusOrder="0" pos="384 296 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="6e6a25b54f111656" memberName="pitchBend3Slider"
          virtualName="" explicitFocusOrder="0" pos="472 296 48 48" min="-100.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="c31a583785ff0dc0" memberName="vibratoAmount3Slider"
          virtualName="" explicitFocusOrder="0" pos="584 296 48 48" min="0.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="3bf9a0f3188151dc" memberName="vibratoSpeed3Slider"
          virtualName="" explicitFocusOrder="0" pos="664 296 48 48" min="0.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="974c411ac8bb2af9" memberName="pulseWidth3Slider"
          virtualName="" explicitFocusOrder="0" pos="831 296 48 48" min="-100.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="c7830b5a236c22e6" memberName="vibratoDelay3Slider"
          virtualName="" explicitFocusOrder="0" pos="743 296 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="7fa0ae86ee59819c" memberName="cutoffSlider"
          virtualName="" explicitFocusOrder="0" pos="32 384 48 48" min="0.0"
          max="2047.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="183ad90c22c4f346" memberName="resonanceSlider"
          virtualName="" explicitFocusOrder="0" pos="32 472 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="a1ff0c7a442565c9" memberName="patch1Label"
         virtualName="" explicitFocusOrder="0" pos="32 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a0efcf827ce8ad6a" memberName="attack1Label"
         virtualName="" explicitFocusOrder="0" pos="144 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="9bd6cba61fa1fdc2" memberName="decay1Label"
         virtualName="" explicitFocusOrder="0" pos="224 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="cc83b81ae4f4a06d" memberName="sustain1Label"
         virtualName="" explicitFocusOrder="0" pos="304 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8e5f365d5a5dbc70" memberName="release1Label"
         virtualName="" explicitFocusOrder="0" pos="384 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="36c38db480f36919" memberName="pitchBend1Label"
         virtualName="" explicitFocusOrder="0" pos="472 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c1f6bec301b79d7d" memberName="vibratoAmount1Label"
         virtualName="" explicitFocusOrder="0" pos="584 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8ac23fb12f7740db" memberName="vibratoSpeed1Label"
         virtualName="" explicitFocusOrder="0" pos="664 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="801f7bd6e8c5db47" memberName="pulseWidth1Label"
         virtualName="" explicitFocusOrder="0" pos="831 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="3ca85f4d30376c25" memberName="vibratoDelay1Label"
         virtualName="" explicitFocusOrder="0" pos="745 96 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a18c101f1ead4881" memberName="patch2Label"
         virtualName="" explicitFocusOrder="0" pos="32 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="3b6cfe32d1875e27" memberName="attack2Label"
         virtualName="" explicitFocusOrder="0" pos="144 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="57219cc5c63e5624" memberName="decay2Label"
         virtualName="" explicitFocusOrder="0" pos="224 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="71a378b31ff055b1" memberName="sustain2Label"
         virtualName="" explicitFocusOrder="0" pos="304 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1b040fd48b548bc9" memberName="release2Label"
         virtualName="" explicitFocusOrder="0" pos="384 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="65cd3aa3e4e183fb" memberName="pitchBend2Label"
         virtualName="" explicitFocusOrder="0" pos="472 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="77cc0c2042855281" memberName="vibratoAmount2Label"
         virtualName="" explicitFocusOrder="0" pos="584 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="e7cf4bf7d0abed90" memberName="vibratoSpeed2Label"
         virtualName="" explicitFocusOrder="0" pos="664 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="60d0eee2414147f1" memberName="pulseWidth2Label"
         virtualName="" explicitFocusOrder="0" pos="831 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="cc3838342446bcd3" memberName="vibratoDelay2Label"
         virtualName="" explicitFocusOrder="0" pos="745 184 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="82d95c5b75237c6d" memberName="patch3Label"
         virtualName="" explicitFocusOrder="0" pos="32 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="bb59839849758374" memberName="attack3Label"
         virtualName="" explicitFocusOrder="0" pos="144 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="990a2c8aa54fa5f2" memberName="decay3Label"
         virtualName="" explicitFocusOrder="0" pos="224 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="d179107269de0e38" memberName="sustain3Label"
         virtualName="" explicitFocusOrder="0" pos="304 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="464a7f5e2f57d037" memberName="release3Label"
         virtualName="" explicitFocusOrder="0" pos="384 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="d71ada89c225de12" memberName="pitchBend3Label"
         virtualName="" explicitFocusOrder="0" pos="472 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8312d101bcac31ee" memberName="vibratoAmount3Label"
         virtualName="" explicitFocusOrder="0" pos="584 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="4e70428a209b410c" memberName="vibratoSpeed3Label"
         virtualName="" explicitFocusOrder="0" pos="664 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="47ffecc2d27d0c1a" memberName="pulseWidth3Label"
         virtualName="" explicitFocusOrder="0" pos="831 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="ebb82d923a4a2092" memberName="vibratoDelay3Label"
         virtualName="" explicitFocusOrder="0" pos="745 272 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="99fa4a6e9be5a0ee" memberName="cutoffLabel"
         virtualName="" explicitFocusOrder="0" pos="32 360 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="73084e88377a7883" memberName="resonanceLabel"
         virtualName="" explicitFocusOrder="0" pos="32 448 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a259e531a424fe3" memberName="titleLabel"
         virtualName="" explicitFocusOrder="0" pos="632 8 368 32" textCol="ff5090d0"
         edTextCol="ff5090d0" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="14.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8d681682ea3ad367" memberName="artistLabel"
         virtualName="" explicitFocusOrder="0" pos="632 48 368 32" textCol="ff5090d0"
         edTextCol="ff5090d0" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="14.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="new button" id="e01b6ace04149779" memberName="exportButton"
               virtualName="" explicitFocusOrder="0" pos="480 40 32 32" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="recordnormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="recordover_png" opacityOver="1.0" colourOver="0"
               resourceDown="recorddown_png" opacityDown="1.0" colourDown="0"/>
  <VIEWPORT name="new viewport" id="ec68b886c6fdbc2a" memberName="patchesViewport"
            virtualName="" explicitFocusOrder="0" pos="496 368 512 192" vscroll="1"
            hscroll="0" scrollbarThickness="16" contentType="0" jucerFile="Patches.cpp"
            contentClass="Patches" constructorParams=""/>
  <TOGGLEBUTTON name="new toggle button" id="c2576d71c6341609" memberName="filter1Checkbox"
                virtualName="" explicitFocusOrder="0" pos="120 376 48 48" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="d32fb3f5c8b325e2" memberName="filter2Checkbox"
                virtualName="" explicitFocusOrder="0" pos="240 376 48 48" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="95c3935c0cfae206" memberName="filter3Checkbox"
                virtualName="" explicitFocusOrder="0" pos="352 376 48 48" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="fd523681e6f4bf8e" memberName="filterLowPassCheckbox"
                virtualName="" explicitFocusOrder="0" pos="120 456 48 48" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="34fbe61fda3da3c2" memberName="filterBandPassCheckbox"
                virtualName="" explicitFocusOrder="0" pos="240 456 48 48" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="high" id="44949d14634c5eb6" memberName="filterHighPassCheckbox"
                virtualName="" explicitFocusOrder="0" pos="352 456 48 48" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <IMAGEBUTTON name="new button" id="dba00e71872790ac" memberName="patchEditorButton"
               virtualName="" explicitFocusOrder="0" pos="208 544 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="patchEditorButtonNormal_png" opacityNormal="1.0"
               colourNormal="0" resourceOver="patchEditorButtonOver_png" opacityOver="1.0"
               colourOver="0" resourceDown="patchEditorButtonDown_png" opacityDown="1.0"
               colourDown="0"/>
  <IMAGEBUTTON name="new button" id="3e22abc9adc07fe1" memberName="addPatchButton"
               virtualName="" explicitFocusOrder="0" pos="488 544 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="addButtonNormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="addButtonOver_png" opacityOver="1.0" colourOver="0"
               resourceDown="addButtonDown_png" opacityDown="1.0" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="1ea2fca1deb37c93" memberName="replacePatchButton"
               virtualName="" explicitFocusOrder="0" pos="656 544 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="replaceButtonNormal_png" opacityNormal="1.0"
               colourNormal="0" resourceOver="replaceButtonOver_png" opacityOver="1.0"
               colourOver="0" resourceDown="replaceButtonDown_png" opacityDown="1.0"
               colourDown="0"/>
  <IMAGEBUTTON name="new button" id="5f49d1e41c452392" memberName="removePatchButton"
               virtualName="" explicitFocusOrder="0" pos="824 544 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="removeButtonNormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="removeButtonOver_png" opacityOver="1.0" colourOver="0"
               resourceDown="removeButtonDown_png" opacityDown="1.0" colourDown="0"/>
  <JUCERCOMP name="" id="c8fb9e3b4a2b8f0e" memberName="patchSelector" virtualName=""
             explicitFocusOrder="0" pos="488 368 322 176" sourceFile="PatchSelector.cpp"
             constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: liveModeBackdrop_png, 19620, "../../UI/Live Mode Backdrop.png"
static const unsigned char resource_LiveMode_liveModeBackdrop_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,4,0,
0,0,2,64,8,3,0,0,0,36,75,228,231,0,0,1,29,80,76,84,
69,0,0,0,80,143,207,80,143,207,80,143,207,80,143,207,80,143,207,80,
144,208,80,144,208,80,144,208,70,120,196,59,96,184,52,80,176,56,88,180,
66,112,192,80,144,208,77,136,204,38,48,160,24,16,144,31,32,152,80,144,
208,32,16,143,26,16,143,25,16,144,24,16,144,24,16,144,80,144,208,28,
24,148,80,143,207,24,16,143,24,16,144,25,16,144,0,0,0,0,0,0,
0,0,0,24,16,143,45,64,168,25,16,144,27,16,143,24,16,143,60,58,
22,240,232,88,180,174,66,25,16,144,24,16,143,0,0,0,0,0,0,0,
0,0,150,145,55,120,116,44,210,203,77,0,0,0,0,0,0,25,16,143,
90,87,33,30,29,11,42,56,164,80,144,208,73,128,200,80,143,207,80,144,
209,80,143,207,61,98,185,49,72,172,35,40,156,72,126,199,47,67,170,76,
134,203,63,104,188,69,118,195,42,55,164,56,89,181,160,188,148,100,155,193,
200,210,118,120,166,178,69,119,196,57,89,180,90,150,201,180,199,133,35,42,
157,28,26,149,66,109,191,55,87,180,150,183,156,220,221,103,210,216,111,170,
194,141,48,69,171,110,161,186,43,59,166,64,107,190,140,177,163,63,105,188,
61,101,187,59,95,184,190,77,115,115,0,0,0,95,116,82,78,83,0,64,
96,128,112,16,239,255,159,255,255,255,255,255,207,255,255,255,255,191,16,80,
143,191,223,223,255,48,32,159,239,64,255,191,128,255,207,48,64,255,255,255,
175,96,96,128,159,255,255,255,223,32,112,255,255,255,175,255,80,143,32,223,
255,255,223,159,207,255,239,207,223,255,255,255,255,159,112,255,255,239,207,175,
143,255,255,255,255,191,255,191,223,255,207,191,207,84,202,238,240,0,0,74,
215,73,68,65,84,120,1,236,221,9,151,154,72,23,198,241,219,43,217,147,
155,160,69,18,112,169,87,171,23,155,196,244,246,206,250,253,191,214,52,133,
16,111,99,17,9,40,138,207,239,44,189,192,56,112,206,248,31,169,46,10,
2,0,0,0,0,0,0,0,0,0,128,141,58,58,62,89,207,233,209,25,
117,9,0,156,156,123,21,188,56,35,0,232,140,23,158,247,242,213,235,245,
188,121,235,121,239,206,8,0,58,226,212,123,255,129,215,247,241,165,247,137,
186,194,239,245,85,192,176,97,129,234,247,124,130,221,244,217,251,192,85,124,
121,239,125,165,78,8,163,1,195,150,12,162,144,42,25,142,202,140,201,26,
213,64,9,56,242,94,114,53,111,188,19,234,2,205,176,85,26,1,216,201,
0,188,229,106,254,231,189,160,253,231,79,24,182,108,226,35,0,29,8,192,
135,46,12,2,76,7,12,91,55,152,34,0,157,14,128,111,154,67,155,228,
15,24,90,48,240,43,5,224,226,114,149,43,25,128,203,149,70,86,217,86,
58,92,230,122,249,237,92,61,0,111,87,15,238,248,253,1,55,39,208,180,
57,19,134,86,76,16,128,246,245,153,235,6,64,152,109,232,170,58,58,200,
241,63,140,4,222,196,137,111,105,0,190,207,159,249,97,3,112,27,91,163,
39,115,235,42,207,195,220,42,4,96,158,187,74,3,16,91,67,218,146,187,
248,153,27,106,201,61,55,28,0,54,148,184,222,222,127,44,53,175,20,66,
134,214,132,244,43,227,81,202,6,224,98,244,204,149,13,64,193,60,127,163,
143,132,203,140,216,117,148,139,105,75,134,197,97,140,118,248,131,198,3,16,
228,239,170,64,53,37,57,202,1,173,102,100,124,42,139,24,90,19,33,0,
237,6,96,198,204,3,211,216,32,96,143,159,76,23,31,171,39,126,179,157,
50,180,210,84,41,21,44,114,51,181,35,143,83,178,178,143,4,161,73,248,
123,48,2,136,113,64,4,160,133,249,47,154,26,11,128,253,228,223,147,175,
219,136,136,153,103,235,156,134,97,102,69,22,63,201,54,58,243,65,61,134,
22,245,214,9,192,195,60,241,61,13,192,183,120,225,214,6,224,199,220,122,
204,183,140,159,7,96,28,91,133,0,228,187,206,173,139,109,7,224,113,190,
240,208,133,0,200,215,147,175,219,252,113,186,55,135,74,41,77,212,211,90,
243,19,173,117,111,166,178,207,15,161,78,133,114,16,20,218,211,95,39,0,
217,152,158,13,192,240,23,91,98,25,128,252,93,93,8,128,99,215,173,16,
127,213,184,66,0,154,10,64,78,113,78,165,63,153,165,225,2,35,247,132,
246,40,4,0,1,104,48,0,58,49,35,154,253,252,4,48,203,2,16,234,
136,3,173,117,192,145,14,41,19,112,139,32,168,19,0,225,183,2,144,19,
195,5,148,191,144,91,44,15,178,58,25,128,234,51,27,229,65,150,218,100,
0,254,239,253,177,75,1,96,46,142,1,100,1,48,118,83,246,83,134,91,
5,8,192,126,7,224,181,119,178,75,1,208,81,121,0,6,74,169,1,2,
176,18,2,128,0,156,157,123,31,185,146,63,189,191,118,106,12,192,148,6,
32,103,112,9,80,128,75,0,4,128,254,246,94,126,225,10,94,121,159,105,
159,2,48,49,41,127,239,7,1,49,8,88,84,53,0,228,216,34,95,72,
146,175,42,14,210,237,74,190,231,165,234,247,54,148,31,164,84,49,0,103,
239,188,247,111,94,175,237,79,239,252,235,94,5,64,57,238,133,104,9,244,
119,42,0,8,0,157,253,225,85,241,249,43,209,174,13,2,102,223,79,13,
39,174,53,167,200,220,115,202,236,249,68,32,76,4,146,110,26,14,64,252,
68,76,19,18,196,244,34,57,39,201,229,97,148,122,156,231,236,249,164,126,
136,93,229,205,77,246,126,38,233,170,120,144,11,229,187,14,215,124,99,253,
115,178,190,191,136,118,53,0,249,79,74,115,74,204,3,216,235,169,192,152,
10,44,141,27,14,128,99,162,176,28,46,112,207,74,174,59,6,224,254,151,
137,99,114,79,124,174,48,207,185,254,27,181,253,0,212,20,241,222,194,205,
64,8,0,2,80,87,200,251,1,183,3,35,0,8,0,22,4,193,130,32,
210,195,134,2,80,188,136,46,92,150,203,11,123,177,54,73,185,252,124,172,
226,63,55,78,182,174,28,112,144,183,47,201,0,148,239,138,0,96,73,176,
142,46,9,214,124,0,170,237,42,231,244,87,56,159,202,167,80,216,98,173,
187,43,2,128,69,65,59,179,40,40,2,128,0,96,89,112,44,11,46,47,
188,135,155,9,128,224,222,226,30,3,24,214,12,128,128,0,224,193,32,120,
48,8,2,128,0,96,36,240,240,30,13,134,0,32,0,120,56,40,30,14,
138,0,32,0,120,60,56,30,15,46,239,18,104,60,0,78,98,215,226,161,
72,23,53,2,224,134,0,0,32,0,8,0,116,222,77,252,204,93,115,1,
24,58,102,247,136,93,231,78,50,0,15,115,161,112,251,210,205,111,6,224,
106,238,130,137,64,208,125,227,145,212,236,162,160,185,242,71,8,184,57,14,
114,197,228,229,113,253,49,0,9,83,129,1,1,64,0,16,0,64,0,16,
0,4,0,186,72,94,94,63,54,28,0,199,77,55,133,93,99,167,85,3,
21,197,219,151,30,106,6,96,28,23,53,191,32,8,2,0,237,107,241,193,
32,238,93,155,125,244,71,141,123,1,164,230,151,4,67,0,0,1,64,0,
48,17,8,218,159,8,212,222,211,129,29,91,133,88,206,80,172,58,6,32,
79,193,205,61,6,80,97,184,96,111,2,128,169,192,152,10,140,0,32,0,
184,25,8,55,3,33,0,8,0,110,7,198,237,192,8,0,2,128,5,65,
44,44,8,114,81,239,65,26,229,91,73,88,251,193,32,238,227,42,14,91,
150,143,112,86,62,159,10,227,133,251,28,0,44,9,134,37,193,16,0,4,
0,139,130,98,81,208,199,249,42,15,242,13,227,190,109,167,124,171,35,0,
23,206,187,112,226,242,227,146,83,151,202,103,57,85,63,31,4,0,227,127,
157,160,43,4,192,45,127,195,212,224,8,128,131,8,64,185,242,0,212,56,
159,131,14,128,111,140,9,187,253,96,16,60,24,4,1,112,65,0,140,248,
177,179,143,6,195,163,193,16,128,34,4,192,183,143,249,141,76,72,5,198,
152,41,89,83,99,12,21,132,198,152,112,239,70,0,49,14,120,23,151,185,
33,43,174,129,138,134,113,153,161,60,174,50,119,228,114,83,227,124,14,56,
0,198,125,5,201,204,138,44,197,204,235,156,111,143,161,69,61,130,26,14,
50,0,58,226,129,82,42,96,165,195,123,189,96,136,102,90,39,187,5,233,
79,125,165,108,10,166,58,227,107,173,21,51,171,228,123,202,244,25,90,212,
167,106,0,1,96,102,181,248,149,89,30,79,86,156,211,171,198,248,13,255,
100,40,163,24,90,164,8,234,5,64,56,148,0,4,90,107,149,189,167,237,
247,74,155,229,79,0,51,157,32,10,237,166,84,184,244,9,32,164,76,192,
208,162,128,170,2,4,64,254,79,61,223,188,52,6,160,56,33,254,92,224,
56,95,134,86,17,212,129,79,0,204,139,11,253,233,114,0,122,58,176,91,
66,173,56,80,137,16,1,64,0,16,128,46,142,1,148,255,21,64,115,202,
56,206,55,96,192,37,64,103,33,0,161,73,76,120,162,86,159,175,98,192,
32,96,103,33,0,242,167,226,113,245,25,240,103,192,142,64,0,204,61,39,
244,53,91,3,195,153,123,147,78,34,140,56,49,197,68,32,76,4,130,238,
5,128,12,39,180,42,252,237,223,136,121,1,102,223,166,2,99,73,0,64,
0,54,34,98,104,77,68,208,42,4,128,66,134,214,132,116,168,16,0,44,
8,2,154,0,1,192,146,96,88,18,12,16,0,44,10,138,17,64,64,0,
176,44,56,150,5,7,4,0,15,6,193,131,65,96,75,1,56,62,17,142,
26,10,192,191,159,132,99,60,26,12,254,99,239,221,186,218,230,153,199,237,
56,130,76,28,161,68,138,105,33,132,114,64,128,245,44,56,237,90,96,146,
149,252,223,210,205,115,183,253,237,247,187,239,255,53,222,74,150,51,81,157,
186,86,172,220,143,77,230,58,1,19,50,182,229,241,37,91,150,100,106,255,
107,162,0,18,112,96,129,4,32,202,195,210,203,65,233,229,160,13,129,4,
48,224,156,3,64,202,57,23,120,166,70,44,103,71,1,44,229,154,129,191,
0,186,73,198,244,245,189,30,156,94,15,222,40,72,0,82,41,5,0,66,
41,197,241,76,101,144,179,163,0,164,178,96,216,202,224,234,35,140,187,111,
8,130,4,48,73,44,19,16,92,3,144,252,146,110,130,76,183,9,64,100,
164,176,157,132,193,175,25,72,41,99,208,144,0,8,226,79,18,0,2,92,
105,160,4,6,72,180,77,0,80,206,176,15,5,156,213,139,63,85,0,4,
65,2,88,74,195,18,32,21,43,243,73,108,238,226,179,79,32,251,200,86,
207,19,243,153,38,134,97,50,253,133,0,134,67,103,21,92,89,36,90,70,
41,243,161,243,59,46,189,37,1,16,196,126,4,240,246,103,1,72,60,59,
205,239,249,7,118,201,124,132,213,179,80,25,250,247,232,94,15,241,46,10,
32,73,224,81,41,53,250,89,0,171,95,9,96,4,177,35,128,115,28,194,
75,16,68,40,30,244,51,153,255,231,8,96,41,47,148,16,226,68,93,200,
193,175,4,112,33,165,28,235,19,88,130,92,169,149,16,98,166,86,50,134,
255,47,159,108,227,78,11,0,77,242,225,3,160,87,208,29,122,105,243,119,
103,53,206,45,192,62,70,142,17,4,113,101,207,84,20,192,230,239,191,18,
0,226,94,15,200,245,8,143,155,124,209,220,48,136,23,115,255,96,212,177,
252,189,0,244,157,70,65,0,193,135,142,19,4,241,80,91,0,72,22,231,
214,118,175,199,176,0,2,79,114,128,223,10,192,194,215,86,209,156,135,127,
118,76,16,196,67,88,1,92,189,177,113,111,207,81,0,144,114,158,66,172,
163,140,69,156,9,224,68,8,161,175,7,138,2,72,69,70,46,0,221,75,
73,157,209,249,79,16,251,233,3,251,17,0,84,6,7,168,34,0,9,92,
113,192,165,156,79,215,151,24,248,3,10,64,227,182,1,224,239,5,1,124,
62,203,248,108,63,211,236,171,1,144,32,136,4,0,100,118,131,62,0,216,
108,4,204,30,3,10,17,203,149,154,9,161,151,236,41,63,144,3,208,95,
201,26,1,53,35,0,136,220,176,250,31,120,134,24,240,177,254,125,166,198,
92,232,19,123,166,255,58,0,16,92,154,223,149,226,3,183,39,34,91,127,
6,208,217,27,4,65,128,173,130,139,85,117,241,9,29,254,163,116,62,17,
120,250,163,0,114,220,59,11,172,217,11,143,1,29,1,228,159,145,0,246,
9,65,36,67,200,250,247,244,38,147,205,142,64,3,153,1,16,203,28,251,
143,73,15,150,206,39,113,81,0,3,190,70,188,100,227,141,70,250,247,76,
0,125,166,73,64,240,140,159,7,35,69,235,207,72,0,251,133,32,32,35,
209,231,109,21,146,226,255,21,5,80,222,197,55,114,134,252,32,172,83,62,
26,137,56,16,24,32,29,228,184,203,42,115,116,220,169,205,148,61,37,21,
233,227,250,218,22,47,201,152,87,21,128,190,2,248,193,48,113,6,3,57,
116,153,195,188,7,57,169,110,50,200,175,0,138,110,97,172,123,188,235,120,
100,100,113,52,79,42,50,63,90,84,8,216,157,39,149,3,118,171,108,95,
63,169,200,19,91,116,42,19,85,223,204,167,163,69,251,4,208,237,129,15,
71,157,122,28,63,129,15,189,46,197,219,14,11,24,55,252,250,128,253,214,
179,19,240,97,56,237,148,115,4,94,204,247,147,175,112,212,104,1,124,249,
75,6,192,102,185,9,94,25,161,75,206,7,91,153,226,151,134,48,58,121,
148,21,89,10,0,204,92,150,104,234,199,67,230,110,196,250,219,23,50,94,
57,125,191,184,62,153,233,92,105,116,243,162,242,93,223,252,87,17,163,236,
252,239,121,198,235,45,242,83,146,253,76,150,220,233,82,86,133,143,0,158,
58,149,24,122,151,115,187,4,176,0,152,41,15,102,0,209,46,183,194,184,
13,241,133,223,250,122,199,238,61,112,184,120,110,196,160,219,23,32,94,57,
207,222,113,161,226,213,233,246,253,136,252,215,23,253,34,34,203,254,228,25,
15,143,121,4,63,163,125,2,3,229,193,69,92,209,180,172,126,57,55,91,
0,125,24,40,47,120,21,117,98,13,11,240,104,154,191,243,26,113,2,82,
121,33,80,169,9,112,169,9,21,111,110,27,222,109,43,124,55,216,246,5,
137,87,78,226,31,183,95,93,0,3,110,25,192,36,171,177,159,252,215,247,
132,245,127,15,6,56,67,90,162,35,78,253,227,193,52,23,192,136,111,2,
160,243,56,85,94,140,1,134,157,82,118,206,47,214,42,1,120,39,210,133,
79,11,114,130,143,195,19,123,193,49,82,126,60,66,226,110,107,200,120,176,
25,145,5,219,190,32,241,202,217,71,220,146,253,232,244,252,215,55,113,203,
25,59,67,234,136,71,254,241,242,42,59,50,113,16,0,189,14,174,188,133,
82,165,5,160,126,57,55,92,0,0,202,147,234,2,120,114,70,172,1,195,
131,231,129,252,249,4,19,34,92,60,103,164,110,176,237,11,19,175,156,29,
226,194,14,2,24,115,1,147,164,91,111,125,250,138,226,66,1,240,153,254,
123,214,49,129,237,16,143,149,8,0,124,5,112,82,161,60,106,28,191,198,
177,208,15,136,254,100,1,56,53,108,48,1,0,4,141,135,53,83,240,120,
237,23,0,214,216,181,4,128,199,77,195,27,33,0,126,96,2,136,64,131,
2,184,179,236,34,128,187,13,58,200,237,245,253,153,195,199,124,214,26,28,
147,242,105,135,2,253,136,241,240,4,11,25,207,210,176,237,211,188,125,127,
234,12,51,194,114,247,143,251,203,227,118,121,125,230,242,17,98,241,131,23,
181,18,92,141,229,64,239,201,46,235,219,44,151,19,1,96,39,58,49,37,
243,217,63,158,41,80,91,166,43,145,163,148,89,209,46,2,56,67,174,47,
95,191,0,254,250,229,203,151,63,214,2,80,150,93,4,224,190,145,192,166,
232,233,189,114,40,12,139,55,135,72,238,80,160,98,223,241,44,39,205,217,
62,228,234,161,147,243,230,70,33,59,196,5,39,238,117,174,150,183,91,142,
91,134,146,184,39,117,214,167,203,69,100,241,0,120,22,143,239,16,143,99,
9,73,200,177,9,185,139,0,156,229,183,29,203,233,245,185,178,212,63,126,
55,15,205,17,192,215,191,32,245,5,128,156,95,226,43,161,139,2,176,52,
84,0,120,139,18,76,0,24,47,128,0,52,15,56,219,96,56,1,224,171,
228,222,169,54,10,64,183,2,105,150,50,140,0,112,130,164,91,125,250,135,
18,0,22,243,43,22,128,186,113,210,179,32,128,149,148,171,230,10,64,63,
6,52,3,112,211,80,219,167,145,203,64,2,192,119,62,191,81,129,5,160,
206,116,216,59,213,74,1,224,248,201,80,2,176,115,164,158,158,171,176,2,
80,103,205,20,192,153,101,23,1,156,33,231,121,29,117,101,174,119,238,28,
62,184,39,236,183,31,127,250,190,67,129,126,216,95,60,77,200,120,120,61,
161,255,90,47,158,230,90,23,235,251,142,198,148,52,22,188,127,220,226,113,
211,25,127,175,175,225,138,199,205,109,4,252,86,175,205,1,203,5,75,250,
155,127,60,253,181,172,76,1,196,166,173,244,138,118,17,0,238,241,131,46,
143,123,172,200,66,10,64,61,52,68,0,127,247,245,235,215,191,15,254,20,
224,62,43,185,75,172,170,144,125,181,178,135,123,108,167,27,187,66,111,159,
148,106,37,98,221,129,166,102,60,205,251,60,49,111,245,103,183,193,158,2,
156,158,217,247,2,92,97,216,61,62,5,112,4,112,82,247,41,128,35,128,
24,66,60,5,184,211,249,155,123,246,221,105,128,70,64,44,230,251,70,62,
5,168,47,0,44,185,179,252,71,125,1,180,255,49,96,176,237,195,226,197,
95,194,61,6,124,99,51,83,127,84,161,35,80,141,245,45,162,33,0,150,
52,7,168,33,0,76,102,142,239,78,232,212,22,0,150,3,150,71,125,1,
88,111,159,119,154,192,113,20,69,253,87,33,0,206,213,5,31,232,174,182,
245,227,109,78,171,21,78,0,24,175,169,2,192,120,219,5,176,148,150,101,
125,1,48,0,156,152,60,150,3,0,56,10,32,128,129,212,196,0,48,109,
168,0,48,110,83,96,237,23,128,211,21,184,126,60,192,136,193,175,40,218,
44,128,88,88,98,189,53,117,5,144,138,53,113,46,148,26,2,56,102,125,
24,9,77,106,235,127,18,64,83,5,224,190,38,63,68,141,109,24,64,143,
117,235,31,160,46,155,96,196,0,247,236,238,254,182,89,0,18,191,21,64,
0,124,227,175,246,202,45,76,27,0,39,1,4,16,192,197,30,5,224,144,
157,16,113,157,19,204,29,164,90,55,158,27,177,70,60,255,253,173,47,0,
255,184,189,90,2,136,67,8,0,227,177,184,134,0,70,124,150,253,141,167,
185,0,122,190,2,120,169,36,128,41,196,237,22,64,248,209,128,99,232,85,
21,64,151,57,68,59,9,103,9,253,98,60,91,255,215,140,231,70,172,25,
47,252,254,150,11,192,63,110,82,71,0,67,255,245,13,203,4,240,236,31,
15,162,98,173,44,242,63,38,39,202,143,24,122,101,2,168,81,206,79,173,
18,0,243,189,198,25,64,191,92,0,229,36,224,167,234,139,20,158,15,51,
94,185,0,250,254,113,89,21,1,224,173,140,150,61,127,201,79,216,185,255,
250,230,248,54,2,110,27,91,81,0,199,254,241,122,199,40,128,49,151,74,
242,49,10,224,8,198,190,163,139,251,85,4,240,84,51,31,26,47,128,69,
15,6,23,126,34,94,212,17,64,4,176,244,185,222,136,97,120,160,241,202,
5,48,245,142,219,59,174,46,0,13,54,182,218,60,241,93,223,34,207,58,
192,249,0,240,2,121,238,27,15,24,222,151,231,111,82,66,1,28,79,98,
169,170,51,27,233,237,171,32,128,105,205,124,104,134,0,152,198,29,14,188,
190,76,125,6,24,9,94,145,151,20,103,82,242,18,0,210,213,235,171,12,
192,100,113,200,241,92,1,212,137,219,139,58,85,5,160,27,71,151,18,5,
96,120,238,121,174,47,175,8,35,198,216,196,21,128,33,241,139,135,21,118,
81,0,154,105,15,98,81,149,20,103,73,45,23,64,237,124,104,134,0,32,
7,5,128,13,85,211,4,60,152,68,157,26,2,208,68,67,168,78,175,127,
124,208,241,10,2,64,162,9,120,144,76,59,149,4,128,173,0,174,0,124,
243,196,93,95,226,8,192,194,124,118,96,114,212,41,17,128,102,209,175,83,
30,69,1,224,126,251,31,191,230,9,224,139,6,135,3,219,197,175,192,204,
46,62,179,138,60,99,177,121,11,0,89,68,149,57,224,120,229,2,240,59,
110,17,86,75,21,111,1,98,97,103,114,74,118,218,143,69,81,40,122,208,
21,10,192,48,141,170,130,121,135,2,24,203,11,20,128,230,56,170,76,65,
219,69,1,248,199,197,205,108,158,0,254,178,149,47,90,0,181,112,5,16,
26,162,40,128,26,248,181,1,132,153,222,2,5,16,40,30,10,0,159,2,
212,199,21,64,29,72,0,68,251,5,32,3,207,111,51,196,70,197,16,2,
208,112,219,17,232,40,34,1,144,0,2,67,2,8,60,199,45,132,23,192,
137,25,87,168,169,96,0,18,192,215,173,252,149,4,80,2,9,0,79,216,
90,76,163,73,214,66,31,195,36,154,134,16,128,136,33,35,22,36,128,10,
120,189,193,141,4,64,2,192,247,153,195,83,136,22,0,192,167,10,161,218,
0,50,164,18,36,128,223,19,33,223,165,148,159,112,113,65,2,40,66,2,
128,117,141,205,186,33,4,16,11,211,79,111,37,226,64,2,88,137,140,21,
9,96,215,140,66,72,0,36,128,240,53,118,232,70,69,87,0,8,9,128,
4,16,26,18,192,128,143,179,247,2,13,66,9,96,198,149,226,51,18,0,
9,128,56,160,199,128,24,79,128,82,32,72,0,36,0,162,21,2,152,241,
31,204,26,43,128,49,207,25,145,0,72,0,193,33,1,8,248,129,104,172,
0,36,32,109,16,0,9,128,32,1,200,85,32,1,140,68,12,0,19,150,
113,76,2,104,190,0,8,18,64,184,167,0,0,177,92,66,6,141,5,32,
1,132,135,4,176,146,56,122,47,68,63,0,0,211,15,32,13,35,0,173,
166,150,8,128,4,64,208,83,128,192,99,1,98,165,225,240,72,163,1,73,
0,123,129,58,2,173,2,118,4,234,226,212,31,19,246,28,236,49,32,7,
73,2,104,190,0,8,234,9,184,143,177,0,156,4,64,2,216,11,36,128,
105,4,16,11,67,28,170,13,96,133,99,1,72,0,36,0,162,5,87,0,
26,25,126,44,0,9,128,4,64,52,92,0,177,24,7,22,192,74,6,233,
7,128,163,1,103,106,38,86,36,0,18,0,9,224,128,199,2,144,0,72,
0,251,130,198,2,104,6,141,22,128,228,41,9,128,4,176,47,168,39,160,
166,113,2,72,134,107,1,112,234,8,212,26,1,16,36,128,48,163,11,1,
96,196,51,226,182,8,128,4,64,144,0,52,65,4,32,31,1,224,69,106,
98,18,0,9,96,63,208,88,0,205,50,84,63,128,17,132,234,7,0,160,
20,64,91,95,12,66,2,32,104,44,64,125,1,196,114,220,10,1,144,0,
8,18,192,52,234,1,128,233,87,56,140,166,65,4,32,90,244,24,144,4,
64,208,21,128,142,136,245,127,93,1,208,112,96,18,192,30,33,1,32,161,
4,176,34,1,28,174,0,8,234,9,24,46,26,128,210,180,71,0,36,0,
130,4,176,10,54,191,16,128,92,153,39,10,154,81,43,4,64,2,32,104,
44,0,64,40,1,208,88,0,18,192,159,1,189,28,116,21,92,0,122,38,
223,168,118,87,224,84,174,72,0,36,128,125,67,141,128,34,184,0,52,44,
196,164,160,173,16,0,9,128,32,1,224,232,66,243,62,31,81,91,0,11,
125,13,192,13,173,24,13,72,2,32,72,0,107,56,176,0,3,130,17,18,
0,9,32,60,244,118,96,195,172,161,2,88,48,100,209,14,1,144,0,8,
234,7,128,2,104,26,36,0,18,64,1,18,192,42,220,172,192,107,82,18,
0,9,128,104,190,0,2,191,23,0,33,1,144,0,136,102,11,0,223,10,
0,97,70,3,58,44,72,0,36,0,162,61,79,1,14,1,18,0,66,2,
160,55,3,29,177,31,244,141,0,134,88,99,191,98,72,0,36,0,18,0,
146,224,21,0,0,35,1,144,0,72,0,7,117,5,48,201,90,1,78,244,
27,253,73,0,36,0,18,192,161,190,27,16,159,219,191,54,72,0,211,100,
147,150,9,128,4,48,117,27,214,195,191,27,176,129,2,88,36,46,117,98,
145,0,34,216,132,4,224,209,253,84,243,183,22,64,2,8,176,250,2,104,
67,207,189,8,92,254,100,1,116,89,145,227,60,47,162,22,10,32,150,57,
0,174,78,167,73,70,23,255,52,79,50,14,85,0,117,147,47,188,0,98,
236,92,151,176,105,89,20,150,209,245,125,55,224,76,141,185,104,148,0,82,
41,229,0,0,184,77,90,143,203,129,110,146,49,221,89,0,9,20,137,34,
116,112,235,4,32,84,206,207,25,141,123,85,216,251,195,21,64,202,145,138,
2,152,39,57,123,16,0,222,166,255,238,26,0,50,18,15,1,136,166,61,
5,192,148,229,182,137,194,211,200,12,50,162,26,2,24,112,203,11,128,224,
156,143,32,202,242,66,180,86,0,51,33,196,74,105,157,186,196,86,181,136,
153,38,230,144,5,32,20,2,224,217,9,118,79,2,224,156,63,42,201,99,
72,88,1,172,243,1,56,231,3,79,1,244,179,126,0,19,22,53,86,0,
54,73,49,49,25,32,144,48,112,25,152,119,137,185,76,61,4,224,12,146,
2,158,205,71,98,183,169,125,2,40,215,169,253,12,177,255,118,232,2,152,
137,12,128,97,178,198,254,58,196,197,156,158,78,206,44,61,187,238,255,35,
211,233,230,130,167,0,138,71,202,33,217,152,72,87,122,10,64,167,54,126,
169,145,2,176,75,122,161,130,0,236,41,235,18,121,11,32,191,53,122,117,
2,192,89,150,64,33,184,196,209,19,144,108,19,192,205,1,8,128,131,39,
50,191,96,96,240,11,162,104,115,97,103,1,12,184,97,0,32,184,101,0,
189,196,224,45,128,88,152,139,219,145,136,155,44,0,139,179,192,177,142,198,
165,11,204,110,119,41,206,175,205,78,171,10,0,139,188,125,2,192,45,58,
173,43,0,236,31,250,160,19,201,22,224,221,161,8,224,40,2,144,57,49,
152,133,37,94,99,230,159,13,0,32,21,171,188,216,6,50,3,0,226,205,
111,227,98,92,80,192,189,82,234,109,126,194,158,151,8,0,7,240,185,231,
128,165,32,128,183,54,240,141,253,233,134,70,49,181,95,0,26,71,0,110,
174,195,186,56,110,240,244,168,46,128,225,176,84,0,183,205,171,24,207,245,
38,189,185,187,187,251,238,54,2,186,133,137,217,142,137,36,55,203,246,219,
157,225,253,149,77,160,51,165,77,240,138,249,4,40,128,79,103,0,168,72,
44,36,142,139,26,142,37,234,102,35,8,231,219,152,143,38,246,6,250,96,
169,55,29,141,46,232,51,125,220,44,31,76,96,51,117,239,163,72,151,242,
66,189,232,174,123,23,114,160,215,115,34,196,203,143,223,121,174,29,179,129,
31,240,219,215,58,240,195,143,176,230,151,155,51,135,127,144,154,127,252,71,
169,249,135,166,29,3,20,64,94,200,197,59,115,76,91,76,97,252,204,181,
136,14,172,53,168,174,243,211,227,254,178,186,0,0,202,4,112,123,163,195,
117,26,197,123,44,45,189,229,227,188,82,130,145,208,172,202,5,176,210,9,
167,251,135,114,133,92,218,26,234,85,35,241,52,5,169,220,115,222,93,112,
107,230,109,139,238,66,241,219,8,86,32,239,148,139,112,158,2,108,203,204,
194,245,128,80,14,87,186,166,59,189,106,219,49,192,130,147,43,189,228,38,
166,221,121,123,77,150,10,77,185,0,176,56,240,244,40,130,69,46,157,53,
201,124,155,244,98,17,20,120,115,56,43,148,166,193,185,30,88,239,149,77,
35,129,137,93,220,223,247,246,94,192,129,4,240,226,43,128,229,86,1,156,
219,234,232,244,102,91,54,154,14,251,99,57,200,51,243,103,1,12,228,88,
157,228,231,128,216,150,152,183,87,173,21,0,136,95,219,79,227,218,143,219,
195,195,183,11,224,234,182,88,204,191,118,174,196,35,255,59,1,220,119,26,
198,233,189,91,154,218,146,49,140,76,34,73,121,225,8,64,216,236,76,57,
79,139,2,192,243,95,243,230,70,189,94,28,95,86,16,128,198,71,0,110,
142,33,87,239,78,215,199,77,155,27,113,133,140,223,114,5,176,249,59,8,
39,114,94,49,93,190,107,209,49,136,229,202,62,185,94,201,18,1,196,166,
123,84,42,102,250,202,64,186,2,16,91,75,255,221,101,94,28,55,191,17,
0,202,5,41,17,192,253,105,167,113,220,94,111,222,80,125,46,222,92,129,
93,46,222,2,0,224,183,52,247,239,55,246,239,242,238,21,243,29,80,0,
255,244,207,174,0,64,74,243,174,186,153,26,203,56,191,78,212,12,74,4,
128,121,172,91,166,101,70,12,223,157,181,186,143,4,174,207,144,143,5,1,
140,32,227,151,2,248,136,223,126,247,176,153,151,173,57,6,78,123,73,137,
0,116,33,126,115,10,2,62,224,178,155,235,133,114,126,56,187,10,37,128,
243,251,135,230,55,107,51,219,205,109,166,36,231,124,108,118,81,47,75,179,
156,154,247,57,104,132,147,201,172,115,96,184,143,1,75,218,253,156,44,41,
17,128,219,132,232,61,207,125,82,16,0,252,78,0,73,167,229,76,147,33,
164,102,95,31,121,10,192,103,102,23,227,45,79,231,77,159,0,193,87,166,
75,115,182,243,122,121,172,151,79,82,211,121,138,155,37,0,223,217,141,179,
111,204,237,25,15,208,218,49,147,174,0,220,54,0,189,204,139,143,1,73,
0,143,34,163,32,0,185,50,45,170,47,166,199,164,82,66,147,2,216,113,
117,34,134,88,142,77,165,63,86,242,17,176,249,53,205,190,155,191,235,118,
152,76,125,178,17,173,227,62,6,44,54,2,162,0,90,77,132,69,238,38,
38,238,60,10,192,221,121,189,44,139,143,1,119,20,0,51,177,87,82,31,
189,214,10,0,59,49,47,216,147,94,178,0,44,88,2,130,107,180,104,51,
196,192,124,132,223,58,60,1,32,5,1,224,245,65,241,114,0,255,213,0,
238,63,251,191,233,14,223,224,137,55,26,249,210,18,123,35,224,146,97,249,
26,4,144,39,102,10,137,155,152,216,11,42,127,95,88,196,134,32,240,147,
36,98,19,24,216,252,198,55,139,245,89,29,1,184,143,1,27,175,206,237,
176,99,61,204,177,239,254,141,37,80,74,157,253,157,178,167,164,34,253,163,
227,166,196,27,194,72,32,0,166,233,52,79,184,225,208,122,113,146,36,27,
153,9,144,165,220,139,249,215,116,253,93,19,42,133,53,121,228,17,204,143,
119,154,107,59,153,64,5,106,10,96,113,52,79,42,50,63,90,84,8,216,
173,28,47,153,119,11,99,122,160,132,97,162,113,10,165,167,59,102,23,168,
98,220,40,223,204,30,196,230,240,101,177,83,115,192,214,7,115,162,255,250,
116,180,104,145,0,38,204,208,239,129,15,19,103,248,179,63,199,79,224,67,
175,219,192,120,229,131,66,161,72,176,237,67,230,190,129,147,100,222,169,3,
3,47,216,111,61,59,1,31,134,83,155,200,44,99,193,126,98,226,89,30,
54,76,224,124,133,163,198,10,224,235,95,28,254,176,21,194,17,128,224,149,
17,0,126,105,100,43,83,252,210,16,70,39,143,178,34,75,1,128,103,4,
75,52,245,227,33,243,66,68,255,120,67,157,70,11,155,130,186,30,64,81,
106,160,198,246,149,209,247,140,235,145,153,93,119,64,97,198,220,119,125,243,
109,17,177,238,152,246,60,227,245,22,249,41,201,126,38,243,83,186,148,85,
225,35,128,167,78,37,134,254,229,220,60,162,40,58,42,10,96,168,231,146,
90,0,204,148,7,179,146,171,166,42,67,209,25,196,23,126,235,235,29,59,
87,189,1,227,185,17,131,108,95,192,120,229,60,123,199,133,197,110,119,23,
54,133,252,215,23,149,78,95,148,120,199,75,126,121,49,171,125,2,3,229,
193,69,92,209,180,172,70,57,55,7,208,20,4,160,97,125,24,40,47,120,
21,117,98,13,11,240,104,218,162,242,26,118,2,82,121,33,80,169,9,112,
169,9,21,111,158,244,176,237,172,151,116,131,108,95,176,120,229,36,254,113,
251,213,5,128,205,106,249,124,0,79,254,235,123,194,250,191,7,3,108,63,
78,116,196,169,127,60,152,230,2,24,241,77,140,0,250,169,242,98,12,48,
236,148,179,107,126,177,38,10,224,235,215,175,255,242,227,172,255,215,63,50,
126,252,250,111,63,254,244,87,96,222,137,116,225,247,224,4,192,121,199,220,
2,70,202,143,71,72,220,164,15,25,15,54,35,178,32,219,23,44,94,57,
251,136,91,178,31,157,158,255,250,38,110,57,227,195,15,29,241,200,63,30,
116,11,207,99,112,114,150,132,43,111,161,84,105,177,170,81,206,13,2,224,
47,25,95,192,128,139,12,64,121,82,93,0,79,246,161,184,186,48,131,101,
25,30,60,15,228,207,39,152,16,225,226,233,65,116,194,14,162,11,180,125,
193,226,149,179,67,92,216,65,0,99,243,100,163,91,111,125,250,138,226,66,
173,59,238,152,58,146,237,16,143,149,8,0,124,5,112,82,169,60,234,31,
191,166,9,64,79,17,177,127,1,20,107,216,112,2,0,8,26,15,107,166,
240,241,90,47,0,172,177,107,9,192,29,243,192,27,33,0,126,160,2,96,
238,226,183,93,4,112,183,129,51,196,224,254,204,225,35,60,102,93,212,221,
65,7,62,96,23,118,236,254,30,58,158,165,105,219,167,121,107,135,90,20,
7,91,248,199,253,229,113,187,188,62,115,249,152,77,56,252,162,86,130,235,
161,134,122,79,118,89,223,102,185,156,8,0,59,94,194,148,204,231,29,226,
125,198,89,1,86,34,199,14,233,223,69,0,103,200,245,229,43,23,192,151,
140,175,90,0,183,128,2,224,187,8,160,56,92,13,7,25,34,91,71,16,
203,29,10,84,236,59,158,229,164,57,219,135,92,225,104,18,103,184,229,14,
113,193,137,123,157,171,229,237,150,227,150,161,112,172,123,173,245,233,114,17,
89,60,0,158,197,227,59,196,227,88,66,18,114,108,66,238,34,0,103,249,
109,199,114,122,125,174,44,245,143,223,205,67,51,4,128,176,206,131,10,40,
0,28,176,126,83,58,126,186,161,2,192,91,148,96,2,192,120,1,4,160,
201,83,232,90,169,0,2,64,110,78,113,162,145,214,9,64,183,2,105,150,
50,148,0,212,59,123,29,171,79,255,16,2,192,98,254,219,195,144,36,17,
34,172,0,212,13,166,167,139,192,185,90,26,43,128,165,148,56,201,81,48,
1,200,101,56,1,92,101,25,244,70,5,22,0,78,54,218,66,1,152,101,
235,239,48,2,176,83,90,158,158,171,64,2,192,98,110,20,137,251,20,224,
243,46,2,56,67,206,243,58,234,202,92,239,220,57,124,112,79,216,111,118,
84,189,31,18,62,236,47,158,38,100,60,188,158,208,127,173,23,79,115,125,
181,158,113,229,220,157,116,209,63,110,241,184,221,217,89,71,207,139,199,205,
109,4,252,86,175,205,1,203,5,75,250,219,14,241,190,57,179,2,160,173,
244,138,118,17,0,238,241,131,153,10,16,43,178,144,2,80,15,13,19,192,
191,59,253,0,234,62,5,184,207,74,238,18,171,42,100,95,173,236,225,30,
219,233,198,174,208,219,103,38,7,137,117,7,154,154,241,52,239,243,196,188,
213,159,221,134,120,10,128,211,11,93,91,113,223,238,253,41,128,35,128,147,
186,79,1,28,1,196,16,226,41,192,157,206,223,220,179,239,78,3,52,2,
98,49,223,55,76,0,127,56,61,1,235,10,192,125,49,72,125,1,180,255,
49,96,184,237,43,188,23,32,224,99,192,55,54,51,245,71,21,58,2,213,
88,223,34,26,2,96,73,115,128,90,2,208,56,211,85,64,212,169,43,128,
194,139,65,194,8,192,122,251,188,89,163,1,81,0,19,61,22,160,125,2,
224,92,93,152,119,94,116,235,199,27,240,241,122,46,153,112,2,192,120,205,
21,64,249,139,65,150,210,178,172,47,0,6,248,94,57,136,229,0,0,142,
2,8,96,176,126,147,194,180,193,2,192,120,13,20,128,217,208,246,9,0,
187,2,215,143,7,24,49,252,21,69,139,5,16,11,75,172,183,166,174,0,
82,177,38,206,133,82,67,0,199,172,15,35,161,73,109,253,79,2,240,25,
14,252,21,44,127,130,0,220,73,132,66,212,216,249,59,175,88,183,254,1,
234,178,9,70,12,112,207,238,238,111,155,5,32,241,91,1,4,192,55,254,
106,175,220,194,180,1,112,18,128,255,112,224,130,0,46,246,40,0,135,236,
132,136,107,213,216,206,182,215,141,231,70,172,31,175,254,254,122,8,192,63,
110,175,150,0,226,16,2,192,120,44,174,33,128,17,159,101,127,227,105,46,
128,158,175,0,94,42,9,96,10,241,107,16,0,104,80,0,255,81,103,88,
233,24,122,85,5,208,101,14,209,78,194,89,66,191,24,207,214,255,53,227,
185,17,235,199,11,189,191,165,2,240,143,155,212,17,192,208,127,125,195,50,
1,60,251,199,131,168,88,43,139,252,143,201,137,242,35,134,94,153,0,106,
148,243,83,49,110,163,134,3,255,39,252,87,7,97,190,215,56,3,232,215,
121,61,120,2,126,170,190,72,225,249,96,227,149,8,160,239,31,151,85,17,
0,222,202,104,217,243,151,252,132,157,251,175,111,190,206,48,206,109,99,43,
10,224,216,63,94,239,24,5,48,54,179,214,143,81,0,71,48,246,29,93,
220,175,34,128,167,154,249,128,241,154,51,28,216,17,192,162,7,131,11,63,
17,47,234,8,32,2,88,250,92,111,196,48,60,220,120,37,2,152,122,199,
237,29,87,23,128,6,27,91,109,158,248,174,111,145,11,0,112,62,0,188,
64,158,251,198,91,11,44,50,113,184,226,32,81,0,199,147,88,170,234,204,
70,122,251,42,8,96,90,51,31,26,41,128,255,222,188,76,125,6,24,9,
94,145,151,20,103,82,242,18,0,210,213,235,171,12,192,100,113,200,241,92,
1,212,137,219,139,58,85,5,160,27,71,151,18,5,96,120,238,121,174,239,
185,131,179,120,78,92,1,24,18,191,120,88,97,23,5,160,153,246,32,22,
85,73,113,246,213,114,1,212,206,135,70,10,0,209,86,157,38,224,193,36,
234,212,16,128,38,26,66,117,122,253,227,131,142,87,16,0,18,77,192,131,
100,218,169,40,0,108,5,112,4,224,153,39,238,250,18,71,0,22,230,179,
3,147,163,78,137,0,52,139,126,157,242,40,10,192,127,191,241,248,53,86,
0,127,124,113,248,10,204,236,226,51,171,200,51,22,155,183,0,144,69,84,
153,195,142,87,34,0,191,227,22,97,181,84,241,22,32,22,118,38,167,100,
167,253,88,20,133,98,6,93,161,0,52,211,168,42,152,119,40,128,177,188,
64,1,104,142,163,202,20,180,93,20,128,127,92,220,204,166,10,0,193,249,
65,106,226,10,128,8,74,65,0,245,240,110,3,8,48,189,5,10,32,80,
60,20,0,62,5,168,143,43,128,250,144,0,218,12,9,64,6,158,223,102,
136,141,138,33,4,160,225,182,35,208,81,68,2,32,1,132,135,4,16,114,
142,91,8,47,0,253,220,255,164,234,219,189,72,0,95,183,242,87,18,64,
9,36,0,60,97,107,49,141,38,89,11,125,12,147,104,26,66,0,34,134,
140,88,144,0,42,224,245,6,55,18,0,9,0,95,53,12,79,97,38,161,
145,40,148,48,109,0,25,82,9,18,192,239,137,144,239,82,202,79,184,184,
32,1,20,33,1,192,186,198,102,221,16,2,136,133,233,167,183,18,113,32,
1,172,68,198,138,4,176,107,70,185,144,0,72,0,161,107,236,240,141,138,
40,0,132,4,64,2,8,13,9,96,192,199,217,123,129,6,161,4,48,227,
74,241,25,9,128,4,112,64,208,99,64,140,39,64,41,16,36,0,18,64,
43,32,1,204,248,15,102,141,21,192,152,231,140,72,0,36,128,224,144,0,
4,252,64,52,86,0,18,16,18,0,9,160,13,144,0,228,42,144,0,70,
34,6,128,9,203,56,38,1,144,0,26,15,9,32,224,83,0,128,88,46,
33,131,198,2,144,0,194,67,2,88,73,28,189,23,162,31,0,128,233,7,
144,6,18,128,86,19,9,128,4,208,14,232,41,64,224,177,0,177,210,112,
120,164,209,128,36,128,189,64,29,129,86,1,59,2,117,113,234,143,9,123,
14,246,24,144,131,36,1,144,0,154,15,245,4,220,199,88,0,78,2,32,
1,236,5,18,192,52,2,136,133,33,14,213,6,176,194,177,0,36,0,18,
64,11,160,43,0,141,12,61,22,128,4,64,2,104,60,36,128,88,140,3,
11,96,37,131,244,3,192,209,128,51,53,19,43,18,0,9,128,4,112,200,
99,1,72,0,36,128,61,65,99,1,52,131,70,11,64,242,148,4,64,2,
216,23,212,19,80,211,56,1,36,195,181,0,56,117,4,34,1,180,6,18,
64,152,209,133,0,48,226,25,49,9,128,4,208,22,72,0,154,32,2,144,
143,0,240,34,53,49,9,128,4,176,31,104,44,128,102,25,170,31,192,8,
66,245,3,0,80,10,128,94,12,66,2,104,43,52,22,160,190,0,98,57,
38,1,144,0,90,1,9,96,26,245,0,192,244,43,28,70,211,32,2,16,
244,24,144,4,208,34,232,10,64,71,196,250,191,190,0,104,56,48,9,96,
111,144,0,144,80,2,88,145,0,72,0,7,11,245,4,12,24,13,64,105,
72,0,36,128,246,64,2,88,5,155,95,8,64,174,204,19,5,205,136,4,
64,2,104,5,52,22,0,32,148,0,104,44,0,9,224,207,128,94,14,186,
10,46,0,61,147,111,84,187,43,112,42,87,36,0,18,192,190,161,70,64,
17,92,0,26,22,100,82,80,18,0,9,160,13,144,0,112,116,161,121,159,
143,168,45,128,133,190,6,224,6,26,13,72,2,104,5,36,128,53,28,88,
128,1,193,8,9,128,4,16,30,122,59,176,97,214,80,1,44,24,178,32,
1,144,0,218,0,245,3,64,1,52,14,18,64,17,18,0,9,96,21,110,
86,224,53,41,9,128,4,208,124,72,0,129,223,11,128,144,0,72,0,205,
134,4,128,111,5,128,48,163,1,29,22,36,0,18,192,1,65,79,1,90,
0,9,128,4,128,208,155,129,142,216,15,250,70,0,67,172,177,95,49,36,
0,18,0,9,0,73,240,10,0,128,145,0,72,0,36,128,131,186,2,152,
100,173,0,39,250,141,254,36,0,18,0,9,224,80,223,13,136,207,237,95,
27,36,128,105,178,9,9,160,101,2,152,186,13,235,225,223,13,216,64,1,
44,18,151,58,177,72,0,17,108,66,2,240,232,126,170,249,91,11,32,1,
64,88,45,1,180,166,231,94,4,46,127,178,0,186,172,200,113,158,23,81,
11,5,16,203,28,0,87,167,211,36,163,139,127,154,39,25,135,42,128,186,
201,23,94,0,49,118,174,75,216,180,44,10,203,232,250,190,27,112,166,198,
92,52,74,0,169,148,114,0,0,220,38,173,199,229,64,55,201,152,238,44,
128,4,138,68,17,58,184,117,2,16,42,231,231,140,46,236,21,238,253,225,
10,32,229,72,69,1,204,147,156,61,8,0,111,211,127,119,13,0,25,137,
135,0,68,211,158,2,96,202,114,219,68,225,105,100,6,25,81,13,1,12,
184,229,5,64,112,206,71,16,101,121,33,90,43,128,153,16,98,165,180,78,
93,98,171,90,196,76,19,115,200,2,16,10,1,240,236,4,187,39,1,112,
206,31,149,228,49,36,172,0,214,249,0,156,243,129,167,0,250,89,63,128,
9,139,26,43,0,155,164,152,152,12,0,73,24,184,12,204,187,196,92,166,
30,2,112,6,73,1,207,230,35,177,219,212,74,1,148,232,212,126,134,216,
127,59,116,1,204,68,6,192,48,89,99,127,29,226,98,78,79,39,103,150,
158,93,247,255,145,233,116,115,193,83,0,197,35,229,144,108,76,164,43,61,
5,160,83,27,191,212,72,1,216,37,189,80,65,0,246,148,117,137,188,5,
144,223,26,189,58,1,224,44,75,160,16,92,226,232,9,72,182,9,224,230,
0,4,192,193,19,153,95,48,48,248,5,81,180,185,176,179,0,6,220,48,
0,16,220,50,128,94,98,240,22,64,44,204,197,237,72,196,77,22,128,197,
89,224,88,71,227,210,5,102,183,187,20,231,215,102,167,85,5,128,69,222,
62,1,224,22,157,214,21,0,246,15,125,208,137,100,11,240,238,80,4,112,
20,1,200,156,24,204,194,18,175,49,243,207,6,0,144,138,85,94,108,3,
153,1,0,241,230,183,113,49,46,40,224,94,41,245,54,63,97,207,203,4,
128,3,248,156,115,192,82,16,192,91,27,248,198,254,116,67,163,152,218,47,
0,141,35,0,55,215,97,93,28,55,120,122,84,23,192,112,88,42,128,219,
230,85,140,231,122,147,222,220,221,221,125,119,27,1,221,194,196,108,199,68,
146,155,101,251,237,206,240,254,202,38,208,153,210,38,120,197,124,2,20,192,
167,51,0,84,36,22,18,199,69,13,199,18,117,179,17,132,243,109,204,71,
19,123,3,125,176,212,155,142,70,23,244,153,62,110,150,15,38,176,153,186,
247,81,164,75,121,161,94,116,215,189,11,57,208,235,57,17,226,229,199,239,
60,215,142,217,192,15,248,237,107,29,248,225,71,88,243,203,205,153,195,63,
72,205,63,254,163,212,252,67,211,142,1,10,32,47,228,226,157,57,166,45,
166,48,126,230,90,68,7,214,26,84,215,249,233,113,127,89,93,0,0,101,
2,184,189,209,225,58,141,226,61,150,150,222,242,113,94,41,193,72,104,86,
229,2,88,233,132,211,253,67,185,66,46,109,13,245,170,145,128,167,169,84,
238,57,239,46,184,53,243,214,69,103,161,248,109,4,43,144,119,202,69,56,
79,1,182,101,102,225,122,64,40,135,43,93,211,157,94,181,237,24,96,193,
201,149,94,114,19,211,238,188,189,38,75,133,166,92,0,88,28,120,122,32,
197,34,151,206,154,100,190,77,122,177,8,10,188,57,156,21,74,211,224,92,
15,172,247,202,166,145,192,196,46,238,239,123,123,47,224,64,2,120,241,21,
192,114,171,0,206,109,117,116,122,179,45,27,77,135,253,177,28,228,153,249,
179,0,6,114,172,78,242,115,64,108,75,204,219,171,214,10,0,196,175,237,
167,113,237,199,237,225,225,219,5,112,117,91,44,230,95,59,87,226,145,255,
157,0,238,59,13,227,244,222,45,77,109,201,24,70,38,145,164,188,112,4,
32,108,118,166,156,167,69,1,224,249,175,121,115,163,94,47,142,47,43,8,
64,227,35,0,55,199,144,171,119,167,235,227,166,205,141,184,66,198,111,185,
2,216,252,29,132,19,57,175,152,46,223,181,232,24,196,114,101,159,92,175,
100,137,0,98,211,61,42,21,51,125,101,32,93,1,136,173,165,255,238,50,
47,142,155,223,8,0,229,130,148,8,224,254,180,211,56,110,175,55,111,168,
62,23,111,174,192,46,23,111,1,0,240,91,154,251,247,27,251,119,121,247,
138,249,14,40,128,127,250,103,87,0,32,165,121,87,221,76,141,101,156,95,
39,106,6,37,2,192,60,214,45,211,50,35,134,239,206,90,221,71,2,215,
103,200,199,130,0,70,144,241,75,1,124,196,111,191,123,216,204,203,214,28,
3,167,189,164,68,0,186,16,191,57,5,1,31,112,217,205,245,66,57,63,
156,93,133,18,192,249,253,67,243,155,181,153,237,230,54,83,146,115,62,54,
187,168,151,165,89,78,205,251,28,52,194,201,100,214,57,48,220,199,128,37,
237,126,78,150,148,8,192,109,66,244,158,231,62,41,8,0,126,39,128,164,
211,114,166,201,16,82,179,175,143,60,5,224,51,179,139,241,150,167,243,166,
79,128,224,43,211,165,57,219,121,189,60,214,203,39,169,233,60,197,205,18,
128,239,236,198,217,55,230,246,140,7,104,237,152,73,87,0,110,27,128,94,
230,197,199,128,36,128,71,145,81,16,128,92,153,22,213,23,211,99,82,41,
161,73,1,236,184,58,17,67,44,199,166,210,31,43,249,8,216,252,154,102,
223,205,223,117,59,76,166,30,217,136,214,113,31,3,22,27,1,219,45,0,
36,194,34,119,19,19,119,30,5,224,238,188,94,150,197,199,128,59,10,128,
153,216,43,169,143,94,107,5,128,157,152,23,236,73,47,89,0,22,44,1,
193,53,90,180,25,98,96,62,194,111,29,158,0,144,130,0,240,250,160,120,
57,128,255,106,0,247,159,253,223,116,135,111,240,196,27,141,124,105,137,189,
17,112,201,176,124,13,2,200,19,51,133,196,77,76,236,5,149,191,47,44,
98,67,16,248,73,18,177,9,12,108,126,227,155,197,250,172,142,0,220,199,
128,141,87,231,118,216,177,30,230,216,119,255,198,18,40,165,206,254,78,217,
83,82,145,254,209,113,83,226,13,97,36,16,0,211,116,154,39,220,112,104,
189,56,73,146,141,204,4,200,82,238,197,252,107,186,254,174,9,149,194,154,
60,242,8,230,199,59,205,181,157,76,160,2,53,5,176,56,154,39,21,153,
31,45,42,4,236,86,142,151,204,187,133,49,61,16,132,10,198,141,242,205,
236,65,108,14,159,254,125,2,169,57,96,235,131,57,209,127,125,58,90,180,
72,0,19,102,232,247,192,135,137,51,252,217,159,227,39,240,161,215,109,96,
188,242,65,161,80,32,220,246,33,115,223,192,73,50,239,212,129,129,23,236,
183,158,157,128,15,195,169,77,100,150,177,96,14,67,223,226,200,195,4,206,
87,56,106,172,0,190,254,197,225,15,91,33,28,1,8,94,25,1,224,151,
70,182,50,197,47,13,97,116,242,40,43,178,20,0,120,70,176,68,83,63,
30,50,47,70,244,142,55,212,105,100,210,113,2,166,30,64,81,106,160,206,
246,149,208,247,140,235,145,153,93,119,64,97,198,220,119,125,243,109,17,177,
238,152,246,60,227,245,22,56,174,223,161,107,162,165,179,11,85,145,139,89,
90,65,80,187,230,67,19,13,16,69,209,81,81,0,67,61,151,212,2,96,
166,60,152,149,92,53,85,25,138,206,32,190,240,91,95,239,216,189,234,13,
23,207,141,24,116,251,130,196,43,227,217,59,46,44,118,187,187,176,41,228,
191,190,168,116,250,162,196,55,30,150,168,139,137,247,148,122,69,187,72,171,
22,7,171,95,206,13,0,52,5,1,104,88,31,6,202,11,14,79,157,202,
204,19,128,71,211,22,149,215,176,19,144,202,11,129,74,77,128,75,77,168,
120,243,164,135,109,103,189,164,27,108,251,2,197,43,35,241,143,219,175,46,
0,108,86,203,231,3,120,242,95,223,19,214,255,61,24,96,251,113,162,35,
78,253,227,193,212,158,146,3,185,193,64,11,224,24,102,202,139,89,133,154,
122,215,252,98,77,20,192,215,175,95,255,229,199,89,255,175,127,100,252,248,
245,223,126,252,233,175,192,188,19,233,194,239,193,9,128,243,142,185,5,140,
148,31,143,144,184,73,31,50,30,108,70,100,193,182,47,80,188,50,246,17,
183,100,63,58,61,255,245,77,220,114,198,135,31,58,226,145,127,60,232,118,
176,253,221,157,179,48,130,11,239,44,174,228,195,227,250,229,220,4,0,254,
146,241,5,12,184,200,0,148,39,213,5,240,100,31,138,171,11,51,88,150,
225,195,52,15,228,207,39,152,16,225,226,233,65,116,194,14,162,11,183,125,
161,226,149,177,67,92,216,65,0,99,243,100,163,91,111,125,250,138,226,66,
173,59,238,152,58,146,237,16,143,149,8,64,121,2,213,138,185,254,241,107,
154,0,244,20,17,251,23,64,177,134,13,39,0,128,160,241,176,102,10,30,
175,253,2,192,26,187,150,0,220,49,15,252,111,40,0,18,0,115,23,191,
237,34,128,187,13,156,33,6,247,103,14,31,225,49,235,162,238,14,58,240,
3,187,176,99,247,247,192,241,44,13,219,62,205,91,59,212,162,56,216,194,
63,238,47,143,219,229,245,153,203,199,108,194,225,23,181,18,92,15,53,212,
123,178,203,250,54,203,229,68,0,216,241,18,166,100,62,251,199,179,227,79,
62,3,199,241,126,34,139,246,201,63,139,177,152,53,215,151,175,92,0,95,
50,190,106,1,220,2,10,128,239,34,128,226,112,53,28,100,136,108,29,65,
44,119,40,80,177,239,120,150,147,230,108,31,114,133,163,73,156,225,150,59,
196,5,39,238,117,174,150,183,91,142,91,134,194,177,238,181,214,167,203,69,
100,241,0,120,22,143,239,16,143,175,199,221,188,128,229,37,139,38,119,200,
98,119,3,112,90,164,211,235,115,101,169,127,252,110,30,154,33,0,132,117,
30,84,64,1,224,128,245,155,210,241,211,13,21,0,222,162,4,19,0,198,
11,32,0,77,158,66,215,74,5,16,0,114,115,138,19,141,180,77,0,216,
9,55,152,0,212,59,123,29,171,79,255,16,2,192,98,254,219,195,50,18,
0,152,36,66,132,21,128,186,113,211,19,17,56,87,75,99,5,176,148,18,
39,57,10,38,0,185,12,39,128,171,44,131,222,168,160,2,192,201,70,219,
39,128,129,188,80,39,34,111,108,13,36,0,59,165,229,233,185,10,39,0,
44,230,102,192,192,130,2,248,188,139,0,206,144,243,188,142,186,50,215,59,
119,14,31,220,19,246,155,29,85,239,135,132,15,251,139,167,9,25,15,175,
39,244,95,235,197,211,92,95,173,103,92,57,119,39,93,244,143,91,60,110,
119,118,214,209,243,226,113,115,27,1,191,213,107,115,192,114,193,146,254,230,
29,79,111,134,230,219,150,233,41,191,131,242,68,31,32,228,193,76,5,136,
21,89,72,1,168,135,6,9,224,127,10,253,0,234,62,5,184,207,74,238,
18,171,42,100,95,173,236,225,30,219,233,198,174,208,219,103,38,7,137,117,
7,154,154,241,52,239,243,196,188,213,159,221,134,120,10,128,211,11,93,91,
113,223,238,253,41,128,35,128,147,122,79,1,186,73,15,184,52,207,253,47,
108,135,171,250,79,1,238,116,254,230,158,125,119,26,160,17,16,139,249,190,
65,2,248,82,232,9,88,87,0,238,139,65,234,11,160,189,143,1,195,111,
95,225,189,0,1,31,3,190,177,153,169,63,170,208,17,168,198,250,22,209,
16,0,75,154,3,212,19,0,62,94,198,14,97,181,5,80,124,49,72,0,
1,88,111,159,55,89,0,243,246,9,128,115,117,193,7,218,252,245,227,13,
248,120,61,151,76,56,1,96,188,230,10,160,252,197,32,75,105,89,214,23,
0,3,124,175,28,196,114,0,0,71,245,5,48,200,223,124,50,111,172,0,
48,110,72,232,10,0,205,95,63,30,96,196,224,87,20,109,22,64,44,44,
177,222,154,186,2,72,197,154,56,23,74,189,91,128,124,98,15,232,117,58,
36,128,26,141,128,251,22,128,59,137,80,136,26,155,91,243,179,110,253,3,
212,101,19,140,24,224,158,221,221,223,54,11,64,226,183,2,8,128,111,254,
181,151,116,235,9,96,115,106,47,152,144,0,170,16,101,244,183,10,224,98,
143,2,112,200,78,136,184,206,9,230,14,82,173,27,207,141,88,35,94,253,
253,245,23,128,127,220,94,45,1,196,33,4,128,241,88,188,187,0,244,99,
64,13,206,114,86,111,48,80,137,0,166,16,191,6,1,0,242,191,74,41,
20,192,14,163,1,199,208,171,42,128,46,115,136,244,223,188,133,179,132,126,
49,158,173,255,107,198,115,35,214,141,23,126,127,75,5,224,31,55,169,35,
128,161,255,250,134,101,2,120,246,143,7,17,198,115,163,213,31,14,236,10,
160,94,57,63,53,81,0,95,51,254,10,255,247,147,0,152,239,53,206,0,
250,117,94,15,158,0,247,83,117,10,207,7,27,175,68,0,125,255,184,172,
138,0,240,86,70,203,158,191,228,167,216,220,127,125,243,92,0,130,243,188,
177,21,79,89,255,120,189,227,181,0,78,196,74,9,129,209,106,78,8,82,
34,128,167,154,249,208,12,1,224,25,95,16,192,162,7,131,11,63,17,47,
234,8,32,2,88,250,92,111,196,48,60,220,120,37,2,152,122,199,237,29,
87,23,128,6,27,91,53,139,158,247,250,22,185,0,0,231,3,192,83,118,
238,27,15,24,94,81,8,19,15,163,213,156,18,172,68,0,211,154,249,208,
56,1,252,63,206,185,51,56,240,25,96,36,120,69,94,82,156,179,206,75,
0,72,87,175,175,50,0,147,197,33,199,115,5,80,39,110,47,234,84,21,
128,110,28,93,74,20,128,225,185,231,185,190,231,14,206,226,57,113,5,96,
72,252,226,65,191,83,34,128,78,212,3,47,230,157,18,1,4,204,135,198,
9,64,227,142,14,158,38,224,193,36,234,212,16,128,38,26,66,117,122,253,
227,131,142,87,16,0,18,77,192,131,100,218,169,40,0,108,5,112,4,224,
230,137,231,250,18,71,0,22,230,179,3,147,163,206,79,2,24,141,156,104,
11,54,172,30,236,41,234,84,18,0,238,183,255,241,195,184,13,25,14,252,
247,250,225,255,151,12,61,59,152,29,29,172,119,241,153,85,228,25,15,171,
183,0,144,69,84,153,195,142,87,34,0,191,227,22,97,181,84,241,22,32,
22,182,171,109,178,211,126,44,138,66,49,131,174,220,54,242,105,84,149,60,
239,80,0,129,199,222,23,5,128,28,251,111,166,27,183,201,147,130,214,13,
237,8,32,44,68,65,0,245,241,104,3,8,114,138,161,0,66,197,99,48,
200,223,192,186,220,191,0,66,196,109,196,112,224,126,81,0,61,93,53,144,
0,72,0,21,30,3,214,100,136,141,138,1,4,0,56,182,96,194,186,36,
128,122,47,6,33,1,20,33,1,4,158,227,22,130,10,0,199,22,120,196,
35,1,252,221,87,135,255,36,1,148,65,2,168,123,194,34,211,104,2,113,
54,18,96,18,77,235,11,64,240,20,12,41,31,144,0,118,127,55,32,9,
224,23,144,0,240,85,195,240,212,169,71,113,248,110,77,24,78,10,42,148,
36,1,84,2,91,50,191,75,41,63,21,154,44,93,72,0,212,8,152,215,
216,172,27,66,0,177,24,235,21,173,68,28,70,0,143,220,48,35,1,236,
158,81,8,9,128,4,16,180,198,222,107,163,162,59,182,128,4,64,2,8,
15,9,96,192,199,217,123,129,6,161,4,48,227,74,241,25,9,128,4,64,
28,208,99,64,140,39,64,41,16,36,0,18,64,43,32,1,204,240,30,187,
129,2,56,17,150,152,4,64,2,8,15,9,192,190,120,163,169,2,16,144,
67,2,32,1,180,4,18,128,92,133,17,64,70,159,253,224,40,154,146,0,
72,0,109,128,4,160,9,36,0,29,79,67,99,1,72,0,123,129,4,176,
146,56,122,47,68,63,0,0,211,15,32,13,33,128,84,172,204,219,134,69,
76,2,32,1,180,0,122,10,160,9,217,19,80,3,160,36,9,128,4,176,
23,168,35,208,42,96,71,160,46,78,253,49,97,207,33,4,176,146,23,36,
0,18,64,91,160,158,128,225,199,2,72,18,0,9,96,63,144,0,166,17,
64,44,12,113,168,54,128,21,142,5,32,1,144,0,90,0,93,1,104,100,
248,177,0,36,0,18,0,209,112,1,196,98,28,88,0,43,137,253,0,66,
140,6,188,80,203,229,33,11,128,4,64,2,160,177,0,36,0,18,192,222,
160,177,0,154,65,147,5,64,253,0,72,0,251,132,122,2,106,26,38,0,
6,176,22,0,252,128,4,64,2,104,9,36,0,62,11,35,128,20,95,23,
52,36,1,144,0,218,1,9,64,19,64,0,92,113,0,144,212,6,64,2,
216,43,52,22,64,179,12,213,15,96,4,216,15,32,132,0,86,36,0,18,
64,171,161,177,0,53,4,32,233,41,0,9,160,45,144,0,166,81,15,0,
76,191,194,97,52,13,35,128,21,94,159,144,0,72,0,77,135,174,0,116,
196,80,35,1,56,205,7,64,2,216,39,36,0,36,148,0,86,1,5,48,
19,43,43,0,122,10,64,2,104,3,212,19,48,248,91,1,232,10,128,4,
208,34,72,0,43,25,106,36,128,224,122,235,102,216,79,145,4,64,2,104,
62,52,22,0,32,140,0,128,198,2,144,0,254,20,232,229,160,171,224,2,
152,48,198,162,58,177,34,150,128,224,99,18,0,9,96,239,80,35,160,8,
46,0,13,11,49,43,48,9,128,4,208,10,72,0,56,186,80,141,57,231,
162,174,0,34,54,193,249,138,72,0,36,128,54,64,2,88,195,129,213,143,
151,67,2,32,1,236,5,122,59,176,97,214,76,1,76,163,53,83,18,0,
9,160,45,80,63,0,20,64,211,32,1,144,0,10,144,0,86,225,102,5,
94,147,146,0,72,0,68,243,5,16,248,189,0,8,9,128,4,64,52,91,
0,216,202,14,97,70,3,58,44,72,0,36,0,226,128,158,2,180,0,18,
0,9,0,161,55,3,29,177,31,244,141,0,134,88,99,191,98,72,0,36,
0,18,0,146,224,21,0,0,59,40,1,144,0,72,0,116,5,96,251,218,
157,232,55,250,147,0,72,0,36,128,67,124,55,32,62,183,127,141,144,0,
166,201,38,45,19,0,9,96,234,54,172,135,127,55,96,3,5,176,72,92,
234,196,34,1,68,176,9,9,224,55,44,152,203,223,90,0,9,0,194,234,
11,160,13,61,247,34,112,249,147,5,208,101,69,142,243,188,136,90,40,128,
88,230,0,184,58,157,38,25,93,252,211,60,201,56,84,1,132,79,190,186,
2,136,177,115,93,194,166,101,81,88,70,215,247,221,128,51,53,230,162,81,
2,72,165,148,3,0,224,54,105,61,46,7,186,73,198,116,103,1,36,80,
36,138,208,193,173,19,128,80,57,63,103,116,97,175,112,239,15,87,0,41,
71,42,10,96,158,228,236,65,0,120,155,254,187,107,0,200,72,60,4,32,
154,246,20,0,83,54,127,49,144,167,145,25,100,68,53,4,48,224,150,23,
0,193,57,31,65,148,229,133,104,173,0,102,66,136,149,210,58,117,137,173,
106,17,51,77,204,33,11,64,40,4,192,179,19,236,158,4,192,57,127,84,
146,199,144,176,2,88,231,3,112,206,7,158,2,232,103,253,0,38,44,106,
172,0,108,146,98,98,50,0,36,97,224,50,144,82,198,224,50,245,17,0,
58,87,102,19,147,9,136,236,54,181,82,0,37,58,181,159,33,246,223,14,
93,0,51,145,1,48,76,214,216,95,135,184,152,211,211,201,153,165,103,215,
253,127,100,58,221,92,240,20,64,225,72,185,36,185,0,116,206,122,10,64,
167,54,126,169,145,2,176,75,122,161,130,0,236,41,235,18,121,11,32,191,
53,122,117,2,16,42,67,0,40,4,151,56,122,2,146,109,2,184,57,0,
1,112,240,68,230,23,12,12,126,65,20,109,46,236,44,128,1,55,12,0,
4,183,12,160,151,24,188,5,16,11,115,113,59,18,113,163,5,96,193,5,
103,194,80,92,186,192,236,118,151,226,252,218,236,180,170,0,176,200,219,39,
0,220,162,211,186,2,192,254,161,15,58,145,108,1,222,29,138,0,142,34,
0,153,19,131,89,88,226,53,102,254,217,0,0,82,177,202,139,109,32,51,
0,32,222,252,54,46,198,5,5,220,43,165,222,230,39,236,121,137,0,112,
0,159,123,14,88,10,2,120,107,3,223,216,159,110,104,20,83,251,5,160,
113,4,224,230,58,172,139,227,6,79,143,234,2,24,14,75,5,112,219,188,
138,241,92,111,210,155,187,187,187,239,110,35,160,91,152,152,237,152,72,114,
179,108,191,221,25,222,95,217,4,58,83,218,4,175,152,79,128,2,248,116,
6,128,138,196,66,226,184,168,225,88,162,110,54,130,112,190,141,249,104,98,
111,160,15,150,122,211,209,232,130,62,211,199,205,242,193,4,54,83,247,62,
138,116,41,47,212,139,238,186,119,33,7,122,61,39,66,188,252,248,157,231,
218,49,27,248,1,191,125,173,3,63,252,8,107,126,185,57,115,248,7,169,
249,199,127,148,154,127,104,218,49,64,1,228,133,92,188,51,199,180,197,20,
198,207,92,139,232,192,90,131,234,58,63,61,238,47,171,11,0,160,76,0,
183,55,58,92,167,81,188,199,210,210,91,62,206,43,37,24,9,205,170,92,
0,43,157,112,186,127,40,87,200,165,173,161,94,53,18,240,52,149,202,61,
231,221,5,183,102,222,186,232,44,20,191,141,96,5,242,78,185,8,231,41,
192,182,204,44,92,15,8,229,112,165,107,186,211,171,182,29,3,44,56,185,
210,75,110,98,218,157,183,215,100,169,208,148,11,0,139,3,79,15,164,88,
228,210,89,147,204,183,73,47,22,65,129,55,135,179,66,105,26,156,235,129,
245,94,217,52,18,152,216,197,253,125,111,239,5,28,72,0,47,190,2,88,
110,21,192,185,173,142,78,111,182,101,163,233,176,63,150,131,60,51,127,22,
192,64,142,213,73,126,14,136,109,137,121,123,213,90,1,128,248,181,253,52,
174,253,184,61,60,124,187,0,174,110,139,197,252,107,231,74,60,242,191,19,
192,125,167,97,156,222,187,165,169,45,25,195,200,36,146,148,23,142,0,132,
205,206,148,243,180,40,0,60,255,53,111,110,212,235,197,241,101,5,1,104,
124,4,224,230,24,114,245,238,116,125,220,180,185,17,87,200,248,45,87,0,
155,191,131,112,34,231,21,211,229,187,22,29,131,88,174,236,147,235,149,44,
17,64,108,186,71,165,98,102,94,35,238,10,64,108,45,253,119,151,121,113,
220,252,70,0,40,23,164,68,0,247,167,157,198,113,123,189,121,67,245,185,
120,115,5,118,185,120,11,0,128,223,210,220,191,223,216,191,203,187,87,204,
119,64,1,252,211,63,187,2,0,41,213,74,8,49,83,99,25,231,215,137,
154,65,137,0,48,143,117,203,180,204,136,225,187,179,86,247,145,192,245,25,
242,177,32,128,17,100,252,82,0,31,241,219,239,30,54,243,178,53,199,192,
105,47,41,17,128,46,196,111,78,65,192,7,92,118,115,189,80,206,15,103,
87,161,4,112,126,255,208,252,102,109,102,187,185,205,148,228,156,143,205,46,
234,101,105,150,83,243,62,7,141,112,50,153,117,14,12,247,49,96,73,187,
159,147,37,37,2,40,52,33,226,131,192,42,36,5,1,192,239,4,144,116,
90,206,52,25,66,106,246,245,145,167,0,124,102,118,49,222,242,116,222,190,
70,116,101,186,52,103,59,175,151,199,122,249,36,53,157,167,184,89,2,240,
157,221,56,251,198,220,158,241,0,173,29,51,233,10,192,109,3,208,203,188,
248,24,144,4,240,40,50,10,2,144,43,211,162,250,98,122,76,42,37,52,
41,128,29,87,39,98,136,229,216,84,250,99,37,31,1,155,95,211,236,187,
43,161,25,193,48,153,250,100,35,90,7,228,246,134,112,247,77,154,173,39,
194,34,119,19,19,119,30,5,224,238,188,94,150,197,199,128,59,10,128,153,
216,43,169,143,94,107,5,128,157,152,23,236,73,47,89,0,22,230,21,140,
26,45,218,12,49,48,31,225,183,14,79,0,72,65,0,120,125,80,188,28,
192,127,53,184,255,236,62,6,140,60,178,113,41,241,70,3,242,165,37,246,
70,192,37,195,242,53,8,32,79,204,20,18,39,49,157,94,80,169,41,198,
136,13,65,224,39,73,196,38,144,253,39,172,115,61,133,62,171,33,0,60,
242,237,20,64,6,59,62,26,130,47,135,40,128,148,35,182,119,125,158,112,
195,161,245,226,36,73,54,50,19,32,75,57,252,87,205,58,103,38,137,97,
136,249,232,37,0,64,88,2,21,104,187,0,220,49,61,80,66,100,255,213,
221,249,100,251,127,122,58,55,23,128,54,107,138,195,102,88,107,7,184,63,
15,193,143,57,14,127,62,40,1,32,229,131,66,161,156,66,165,17,237,148,
143,243,100,131,46,46,245,122,153,85,134,184,148,51,127,21,199,129,101,44,
88,9,11,251,175,238,184,168,238,246,255,244,118,46,202,197,61,242,45,101,
8,241,163,170,204,99,12,195,206,33,82,158,112,155,211,66,176,223,209,135,
209,230,109,212,98,199,124,252,83,33,208,185,155,179,11,44,112,234,140,255,
159,189,251,91,79,27,87,247,56,46,227,38,111,64,81,144,80,102,51,16,
50,7,133,201,9,23,208,186,201,3,7,115,31,251,254,47,99,89,194,230,
181,82,19,76,68,140,107,126,159,147,37,151,68,122,202,26,190,117,252,47,
127,168,1,101,115,115,130,121,70,3,1,49,186,243,143,6,128,165,165,57,
201,146,172,128,24,55,188,187,112,97,0,68,115,115,146,57,145,232,7,0,
32,50,39,250,19,3,0,0,8,0,0,172,167,166,226,51,1,224,241,116,
29,204,251,149,32,124,191,1,146,68,156,128,111,43,141,15,0,91,61,242,
188,95,13,248,253,14,188,60,95,227,187,15,68,134,173,158,95,68,3,43,
115,222,0,152,21,207,219,2,88,137,247,254,157,26,64,0,114,211,127,197,
49,107,115,238,0,152,53,207,219,2,88,11,198,143,244,0,4,192,63,214,
228,136,169,235,196,226,92,7,1,23,126,186,96,222,47,4,252,126,51,124,
254,17,128,19,10,96,114,139,243,157,5,88,152,28,207,251,181,128,223,239,
32,233,128,0,148,166,13,2,32,98,3,208,194,111,85,133,134,255,255,189,
24,64,0,42,94,16,128,171,10,192,179,1,4,160,226,25,1,184,170,0,
172,12,32,0,21,43,4,224,170,2,96,0,1,8,156,26,128,136,155,129,
16,128,11,6,96,96,61,229,152,230,0,1,136,190,29,24,1,232,64,0,
82,98,166,57,64,0,226,31,8,130,0,116,33,0,35,61,34,162,141,38,
162,177,129,83,32,0,236,129,178,101,227,4,204,151,25,61,8,4,160,19,
1,144,197,115,135,177,15,16,1,1,184,121,160,147,60,220,32,0,221,9,
128,246,89,70,0,78,134,0,176,129,189,165,134,110,249,225,135,205,2,240,
215,212,28,241,247,243,163,136,211,133,117,35,214,139,15,128,65,0,34,32,
0,17,142,5,224,47,211,192,84,124,108,253,189,180,16,13,197,174,203,75,
178,69,7,214,171,9,128,34,4,160,171,16,128,169,105,226,81,124,104,122,
252,50,199,248,117,143,127,255,75,219,235,33,0,208,131,0,40,250,216,214,
152,151,200,0,68,172,27,31,128,136,245,16,0,64,0,244,133,2,160,91,
14,128,254,130,0,44,213,246,90,3,0,8,0,2,224,32,0,241,16,0,
4,32,60,30,247,183,201,61,127,47,241,230,226,162,235,241,251,204,191,255,
62,67,0,34,32,0,8,192,209,213,130,63,187,240,122,225,165,192,210,173,
122,125,1,0,4,0,1,72,210,25,41,153,17,145,148,87,22,0,64,0,
16,128,129,189,229,223,81,79,230,250,0,2,128,31,1,202,117,77,207,0,
2,192,71,200,218,63,8,232,45,162,3,112,254,245,194,187,1,39,62,0,
90,247,51,0,128,0,76,13,107,41,0,161,248,0,196,175,135,211,128,128,
0,32,0,184,18,16,16,0,4,0,1,0,4,0,1,64,0,0,7,1,
91,8,192,250,171,175,4,100,235,19,174,4,228,123,1,238,21,2,16,3,
1,192,105,192,248,197,207,252,247,108,126,47,128,115,85,1,0,4,0,1,
224,211,128,206,21,158,6,4,4,0,1,32,146,198,185,186,11,129,0,1,
64,0,6,118,70,74,58,8,64,4,4,0,1,136,127,38,96,251,7,1,
157,159,68,52,146,14,2,16,1,1,64,0,98,151,108,255,52,160,115,71,
116,125,79,5,6,4,0,1,224,195,128,243,107,13,0,32,0,8,128,188,
230,211,128,128,0,32,0,247,202,65,0,226,33,0,8,64,147,75,255,58,
114,59,176,243,74,114,191,170,129,8,8,0,2,16,177,218,37,30,8,146,
144,115,109,1,0,4,0,1,64,0,0,1,64,0,148,97,125,9,0,32,
0,8,0,2,0,8,64,120,93,92,233,153,15,152,181,240,129,228,213,88,
87,126,49,8,2,0,61,15,192,212,28,22,126,75,7,214,109,253,87,131,
37,52,212,236,202,2,0,8,0,2,64,164,228,144,28,121,127,85,1,0,
4,0,1,120,178,51,146,70,210,76,117,250,87,131,1,2,208,192,226,252,
1,104,107,221,248,245,98,126,59,176,164,212,116,55,0,128,0,172,77,3,
211,198,119,228,214,31,140,107,117,221,168,245,226,111,63,70,0,160,235,1,
8,124,255,199,28,51,125,20,241,226,215,237,240,122,245,1,232,254,143,0,
128,0,64,164,35,1,112,174,50,0,128,0,32,0,19,237,244,48,0,128,
0,0,30,11,14,8,64,171,158,146,192,155,136,243,150,236,252,74,188,167,
51,7,128,104,211,223,167,2,3,2,208,62,75,129,84,196,73,41,96,69,
60,60,22,28,16,128,47,99,105,168,246,50,178,105,224,77,188,21,163,164,
105,0,50,165,212,152,136,148,82,195,106,0,146,114,202,152,0,100,106,76,
142,26,18,25,136,135,0,32,0,218,236,73,122,39,17,73,243,93,3,254,
49,93,237,254,129,214,213,0,164,229,148,56,11,0,29,11,0,2,32,119,
212,238,169,251,68,153,116,50,250,153,222,249,177,162,135,52,181,175,105,225,
231,93,202,6,31,4,96,150,50,82,126,202,36,77,107,166,25,12,210,250,
41,249,125,126,75,173,15,128,149,103,13,0,32,0,8,0,149,138,45,101,
28,69,142,27,75,58,204,126,16,128,138,242,149,164,126,18,27,108,29,184,
25,168,91,123,0,128,0,44,250,20,128,217,140,252,30,192,61,81,38,245,
238,115,44,165,92,230,35,237,255,241,166,112,71,193,27,209,173,29,28,14,
128,146,59,68,179,98,15,224,33,156,166,156,228,182,58,165,21,108,193,1,
200,164,54,90,58,23,15,0,32,0,83,99,204,116,209,163,0,88,75,172,
248,28,27,198,91,146,72,155,130,38,162,244,112,0,164,217,33,86,51,141,
38,10,166,172,4,96,225,223,230,248,7,130,0,2,96,105,207,158,33,0,
107,211,7,202,127,240,180,214,27,82,138,54,218,33,82,229,231,88,41,117,
159,143,150,74,169,241,70,27,227,183,39,122,164,77,49,158,235,17,73,179,
39,131,0,140,244,196,63,198,63,31,110,134,218,25,18,105,109,182,202,201,
54,122,190,159,100,148,143,239,149,55,36,101,66,235,247,1,56,245,119,3,
2,2,240,150,60,208,222,67,242,84,119,249,202,141,8,221,36,37,30,189,
237,87,92,245,38,0,142,38,85,142,137,36,201,223,143,1,184,23,203,237,
234,248,112,0,170,99,85,44,199,7,7,130,9,121,61,255,39,129,149,8,
3,112,250,117,0,128,0,164,20,236,113,90,33,142,159,162,74,168,196,163,
116,191,226,227,170,55,1,240,215,0,40,69,67,181,13,2,176,209,155,226,
67,62,26,150,187,10,147,74,0,198,238,27,155,5,96,172,150,149,0,12,
181,222,79,232,150,148,89,190,242,86,231,54,191,5,96,245,40,156,132,220,
20,75,229,16,73,105,78,2,8,64,249,223,152,217,170,33,61,36,133,95,
105,250,237,174,184,124,229,91,190,149,236,189,37,223,104,172,156,49,165,68,
202,201,56,0,185,245,180,39,1,32,71,41,162,98,107,84,124,142,127,24,
93,4,224,222,125,94,11,28,0,175,89,0,136,100,53,0,229,202,181,199,
3,148,97,211,181,240,248,44,128,103,154,3,4,160,254,4,21,43,95,11,
164,20,156,15,51,142,228,0,176,62,28,4,116,193,179,251,0,240,27,146,
254,246,35,0,241,248,247,27,8,194,253,172,195,1,224,73,66,225,245,67,
129,155,228,206,7,224,78,59,230,147,0,1,112,251,153,213,11,86,199,74,
169,165,49,254,24,20,145,219,114,198,100,105,236,143,120,249,67,87,74,153,
121,62,26,209,93,63,3,176,27,19,109,79,9,128,96,103,10,192,216,24,
243,163,54,0,124,37,96,212,62,0,32,0,78,120,120,138,241,238,167,10,
174,129,225,255,108,109,63,3,192,227,234,91,162,194,221,160,112,127,157,168,
118,194,224,147,45,235,222,87,158,38,108,69,57,62,28,0,39,38,0,128,
0,60,88,107,103,65,0,50,41,253,207,180,75,41,229,88,46,205,86,74,
57,201,183,136,175,129,25,185,175,159,228,35,69,63,251,22,0,119,234,143,
136,199,185,205,80,239,12,125,0,248,12,222,206,136,248,155,106,38,44,95,
117,70,122,199,79,82,59,141,179,225,47,116,99,250,121,56,0,18,215,1,
68,65,0,146,218,227,1,242,221,191,249,46,8,188,148,114,155,125,61,6,
176,195,227,218,219,129,234,29,155,50,165,207,176,31,221,106,184,60,115,0,
0,123,0,116,107,139,109,27,4,160,126,15,160,103,1,120,181,59,60,14,
61,137,39,123,208,177,41,7,246,51,94,69,189,47,121,34,16,224,24,0,
217,242,181,52,12,64,221,49,128,203,4,0,248,153,128,115,179,213,113,1,
0,156,5,168,15,192,172,54,0,54,77,43,119,183,38,151,12,0,2,32,
73,27,69,113,1,0,92,7,80,31,0,170,13,64,42,68,249,133,125,184,
13,24,1,0,92,9,56,86,75,127,134,191,12,64,249,26,249,91,83,180,
191,51,5,1,232,105,0,0,247,2,4,39,158,45,191,22,156,175,238,102,
0,16,128,165,140,11,0,224,110,192,59,170,176,252,90,85,249,53,62,0,
78,39,2,128,0,196,158,5,0,60,15,96,54,163,230,126,222,132,1,104,
243,102,32,152,174,131,235,0,50,26,170,137,81,234,196,0,0,2,192,110,
30,232,36,15,55,162,162,221,219,129,129,111,7,46,105,60,15,32,6,2,
240,64,195,31,166,177,31,67,122,168,157,111,101,90,1,43,225,252,162,210,
80,17,105,109,62,5,16,128,1,101,115,115,130,121,70,131,75,62,18,12,
214,66,36,197,49,217,251,200,91,129,0,1,176,180,52,39,89,146,189,192,
67,65,129,31,10,202,1,144,197,189,70,230,147,0,1,32,154,155,147,204,
137,46,242,88,112,224,199,130,39,149,243,179,218,64,12,4,224,244,85,47,
246,139,65,128,3,224,175,208,186,206,0,0,2,128,0,104,34,146,87,29,
0,64,0,16,0,26,201,220,198,92,33,64,0,16,128,107,60,15,0,8,
0,2,48,241,207,110,91,202,220,253,149,5,0,16,0,4,160,170,223,1,
0,4,0,16,0,64,0,0,1,0,4,0,1,160,177,170,234,104,0,0,
1,248,107,106,142,248,251,249,81,196,139,94,183,251,235,5,1,120,207,64,
7,33,0,127,153,6,166,34,94,252,186,221,95,143,223,231,155,100,79,239,
24,232,32,4,96,106,154,120,20,241,162,215,237,254,122,181,239,179,105,23,
224,102,160,19,3,160,232,99,91,99,94,68,188,246,214,141,88,175,159,1,
0,220,14,28,17,0,125,161,0,232,150,3,160,123,18,0,192,3,65,250,
19,0,4,0,240,72,176,108,217,56,1,243,101,70,15,226,171,3,48,221,
89,215,204,247,155,255,139,255,64,30,159,189,238,149,115,255,61,121,179,126,
189,14,7,0,240,80,208,179,6,192,236,124,23,191,57,126,104,61,122,221,
192,180,225,186,241,127,207,112,179,126,61,4,0,206,23,0,54,176,183,212,
208,173,29,8,209,155,0,32,0,128,0,68,64,0,16,128,246,1,2,240,
189,102,179,141,15,100,253,186,237,173,215,227,0,0,2,128,0,32,0,128,
0,32,0,8,0,32,0,8,0,2,0,8,0,2,128,0,0,2,128,0,
32,0,128,0,32,0,8,0,32,0,211,239,59,249,240,239,252,127,94,34,
215,61,62,251,177,117,207,180,30,7,160,126,189,222,5,0,16,0,92,8,
196,112,33,16,32,0,8,0,2,0,8,0,2,128,0,64,45,4,224,249,
101,239,223,115,7,128,103,207,135,255,184,219,115,235,215,253,146,245,56,0,
245,235,33,0,128,0,212,190,210,234,89,128,203,172,135,0,0,2,128,0,
32,0,128,0,32,0,8,0,16,2,128,0,0,2,128,0,32,0,128,0,
32,0,8,0,244,6,2,240,252,18,88,68,5,32,226,52,32,2,208,58,
64,0,216,145,15,70,11,23,2,33,0,95,9,16,0,4,0,1,0,4,
0,1,64,0,0,1,248,94,203,125,21,15,3,95,182,238,58,124,229,229,
11,214,227,89,235,255,158,253,15,0,32,0,241,240,187,1,1,1,64,0,
16,0,232,18,4,160,137,133,136,215,254,186,145,235,245,63,0,128,0,172,
77,3,83,17,175,253,117,99,215,235,127,0,0,1,16,223,255,49,199,76,
31,69,188,246,215,141,94,175,255,1,0,4,0,66,8,0,32,0,128,0,
0,2,0,8,0,32,0,93,150,132,110,68,156,167,36,240,134,0,0,2,
208,101,20,74,68,28,75,129,20,1,0,4,160,203,136,20,27,211,93,26,
16,34,41,70,111,77,3,48,84,123,25,2,0,8,64,183,17,25,166,232,
29,33,210,211,118,13,44,105,179,39,255,128,0,0,2,128,0,76,228,78,
70,36,165,28,17,41,233,16,189,166,214,143,51,250,153,190,218,180,100,95,
83,150,132,1,24,73,41,139,41,21,185,111,241,95,123,103,45,239,92,12,
146,148,33,0,128,0,92,56,0,154,74,197,150,52,14,121,110,172,232,176,
52,8,0,79,114,152,77,137,253,49,1,0,4,96,209,235,0,88,202,73,
41,255,35,82,114,226,223,253,44,223,212,249,104,41,165,116,91,188,163,80,
82,52,179,79,98,111,144,166,105,49,229,108,230,247,6,104,247,125,74,201,
194,136,110,103,84,110,17,217,87,81,181,232,100,0,0,1,152,26,99,166,
139,62,7,32,165,10,237,223,125,101,24,111,41,34,83,146,68,148,212,78,
105,109,49,137,255,62,41,141,83,46,86,110,185,238,4,159,127,255,54,119,
46,0,128,0,172,123,252,14,207,181,214,35,146,68,218,217,80,150,21,159,
221,177,82,106,153,143,238,149,82,164,183,102,235,183,183,122,104,76,49,158,
232,33,233,154,41,53,41,21,6,160,152,38,95,108,51,210,147,221,216,232,
141,127,53,180,238,92,0,0,1,16,171,126,191,195,146,100,49,230,207,110,
120,12,192,189,84,110,87,199,205,3,160,138,89,170,227,223,3,176,18,221,
11,0,32,0,143,171,222,190,195,91,127,13,128,36,82,42,252,236,106,61,
42,62,228,155,253,174,194,188,18,128,204,125,227,231,2,176,213,90,215,6,
96,245,216,185,0,0,2,224,172,167,61,125,135,53,57,146,168,216,26,14,
139,207,238,220,200,34,0,75,34,83,226,0,120,159,11,128,83,19,128,233,
90,136,78,6,0,16,128,62,42,62,173,15,238,62,128,50,0,124,16,144,
40,125,255,35,128,199,223,228,220,28,56,8,200,109,8,15,2,242,148,142,
21,33,4,0,16,128,182,3,96,119,99,26,159,18,0,43,74,61,8,0,
32,0,8,192,251,79,171,11,0,145,172,61,13,216,40,0,78,205,135,158,
120,1,193,16,0,64,0,90,70,228,79,252,217,114,236,141,70,197,96,23,
128,81,49,30,234,157,33,127,211,71,83,150,55,6,185,19,127,239,3,192,
11,32,0,16,29,0,75,21,10,1,56,1,237,88,30,215,223,14,84,199,
126,60,165,37,253,238,210,31,69,137,112,120,74,4,0,206,29,128,161,158,
32,0,141,217,157,87,30,135,132,24,216,67,94,63,158,210,210,70,123,27,
186,157,249,127,243,51,31,128,112,74,4,0,206,16,0,93,189,208,84,118,
33,0,96,105,207,30,191,171,24,1,128,200,0,108,181,191,88,53,163,255,
146,210,211,91,194,126,125,75,74,105,82,81,249,154,111,191,126,251,115,157,
75,6,3,158,82,52,3,175,118,239,117,80,12,222,190,38,0,128,0,240,
37,39,225,141,167,199,165,39,253,185,21,173,2,3,39,66,0,134,202,27,
210,204,82,166,10,67,218,143,137,198,170,52,38,75,227,253,152,84,41,35,
75,84,142,171,83,166,3,1,29,14,0,32,0,225,209,231,130,230,49,145,
50,37,69,135,239,115,45,183,194,41,173,128,206,5,0,16,0,41,229,210,
76,164,82,114,226,159,96,145,143,71,67,169,205,15,233,141,178,124,172,243,
193,196,72,169,140,49,91,63,94,238,159,116,161,243,113,102,140,153,251,177,
150,217,72,250,73,101,56,101,151,3,128,0,0,206,2,212,221,120,74,188,
123,224,191,182,58,38,167,238,62,87,126,177,58,101,71,3,128,0,0,2,
224,254,129,38,89,60,195,202,24,163,121,15,224,112,0,120,15,160,54,0,
242,255,45,79,217,213,0,32,0,128,0,240,79,253,7,127,238,175,15,128,
50,94,125,0,86,143,41,79,217,209,0,32,0,128,0,252,87,185,234,252,
62,60,242,239,31,62,117,40,0,252,172,171,218,0,88,59,11,166,236,98,
0,16,0,64,0,194,251,206,66,238,149,131,1,112,47,54,59,6,224,116,
51,0,8,0,32,0,234,222,204,245,40,83,91,179,213,185,13,223,117,102,
140,26,142,253,51,44,181,158,27,165,130,0,248,111,211,122,242,62,0,67,
101,140,118,170,83,206,254,148,107,1,17,0,192,117,0,210,148,194,187,208,
27,29,3,168,189,14,192,10,232,88,0,0,1,104,226,142,206,224,207,12,
0,2,0,8,64,218,195,0,252,175,157,58,54,66,32,134,1,32,168,6,
62,80,228,200,31,217,234,191,68,8,24,48,57,9,163,221,30,238,12,0,
3,248,130,1,96,0,24,0,6,128,1,96,0,24,0,6,128,1,96,0,
24,0,6,128,1,96,0,24,0,6,128,1,96,0,24,0,6,128,1,96,
0,24,0,6,128,1,96,0,24,0,6,128,1,96,0,24,0,6,128,1,
96,0,24,0,6,192,207,173,196,0,14,43,232,100,230,1,3,152,209,9,
149,7,12,160,162,21,70,190,97,0,35,122,97,223,249,130,1,220,59,112,
0,218,12,64,255,236,145,79,24,192,232,217,63,53,87,246,195,117,229,199,
154,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,63,121,0,
5,214,70,141,29,55,139,44,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::liveModeBackdrop_png = (const char*) resource_LiveMode_liveModeBackdrop_png;
const int LiveMode::liveModeBackdrop_pngSize = 19620;

// JUCER_RESOURCE: recordnormal_png, 463, "../../UI/Record-Normal.png"
static const unsigned char resource_LiveMode_recordnormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,
0,0,0,32,8,6,0,0,0,115,122,122,244,0,0,1,150,73,68,65,
84,120,1,197,86,3,114,101,65,0,236,210,122,183,180,214,204,91,27,119,
89,36,167,137,243,16,219,119,137,237,156,32,86,49,118,50,157,250,54,103,
186,170,63,222,27,244,168,167,145,42,138,223,225,129,45,81,232,10,116,57,
18,227,138,91,138,39,62,110,93,63,19,232,84,223,5,238,71,220,71,174,
80,249,6,31,28,137,30,197,125,197,203,148,200,178,22,186,189,55,120,143,
76,81,251,18,183,93,11,213,142,192,41,27,205,144,39,174,128,87,44,113,
11,233,128,202,93,129,5,54,146,35,142,84,8,60,67,42,176,5,126,251,
214,244,50,167,20,88,174,178,240,35,233,200,35,58,207,185,8,79,226,41,
98,129,235,164,10,205,178,96,94,105,97,146,251,11,145,224,134,99,1,77,
44,137,62,106,190,221,174,133,2,187,97,75,225,59,231,151,154,217,26,112,
184,128,201,232,229,30,29,19,180,87,62,48,65,91,226,63,232,237,166,4,
184,18,29,240,93,44,151,134,56,2,71,96,219,160,128,77,168,143,99,131,
2,142,96,94,128,249,37,48,191,9,59,13,10,104,7,51,156,49,35,178,
240,23,197,95,113,143,182,104,194,138,217,55,8,6,72,221,2,184,244,145,
73,232,68,163,128,99,251,53,222,32,20,76,175,26,5,216,241,34,217,136,
134,11,104,184,241,29,110,34,22,152,82,84,129,165,60,10,88,45,127,137,
23,72,4,70,103,166,215,60,140,124,201,121,131,239,72,5,149,239,240,200,
145,232,203,229,180,251,50,96,234,224,58,49,189,102,233,17,199,182,68,165,
111,205,51,3,149,51,64,166,41,100,143,105,199,119,212,114,3,186,22,51,
28,253,91,113,84,113,83,241,216,71,254,30,117,37,218,28,11,255,88,22,
41,226,10,181,149,81,114,232,255,238,47,0,0,0,0,73,69,78,68,174,
66,96,130
};

const char* LiveMode::recordnormal_png = (const char*) resource_LiveMode_recordnormal_png;
const int LiveMode::recordnormal_pngSize = 463;

// JUCER_RESOURCE: recordover_png, 489, "../../UI/Record-Over.png"
static const unsigned char resource_LiveMode_recordover_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,
0,0,0,32,8,6,0,0,0,115,122,122,244,0,0,1,176,73,68,65,
84,120,1,197,86,5,110,29,65,20,123,162,114,43,42,87,84,20,21,239,
82,60,66,97,59,251,121,161,204,36,86,185,189,70,196,225,100,33,156,156,
32,76,194,48,39,207,210,103,198,25,75,254,56,224,129,231,53,149,11,247,
149,118,204,51,244,7,204,191,142,161,251,252,62,231,26,250,6,136,207,248,
205,141,5,254,48,239,119,70,163,71,169,94,240,204,224,21,158,228,63,115,
153,185,91,38,151,157,88,224,159,27,121,122,153,170,69,119,32,112,208,53,
196,55,30,108,19,131,86,71,236,80,224,75,203,171,87,7,168,18,64,57,
111,233,8,6,169,15,133,211,107,233,103,202,91,185,17,188,21,63,223,221,
58,115,220,181,196,245,146,43,111,208,228,73,17,126,36,114,154,242,1,231,
196,13,6,209,176,177,12,244,226,126,81,54,226,23,110,87,10,205,192,235,
220,82,139,223,118,73,92,204,56,138,120,157,239,202,164,103,234,63,146,14,
151,52,25,185,92,130,99,18,236,21,63,168,160,99,136,123,4,111,199,23,
69,252,77,120,136,168,19,32,28,92,192,121,133,59,48,11,1,235,170,4,
240,241,175,169,23,160,250,8,212,95,66,196,40,101,2,76,253,23,33,195,
169,187,3,226,14,63,134,31,29,129,45,170,176,98,204,77,0,2,164,108,
1,56,250,140,36,132,0,41,81,192,122,143,17,184,64,233,64,122,149,119,
249,196,199,2,145,76,56,18,4,116,55,105,218,126,202,7,164,20,110,48,
214,192,201,39,187,237,192,57,42,6,68,103,164,215,6,76,62,214,29,11,
92,163,114,208,110,106,39,184,67,91,61,183,61,158,1,203,7,206,9,233,
181,70,143,88,103,126,192,88,84,45,160,28,1,178,66,33,104,251,59,94,
106,245,1,92,11,25,14,254,205,131,187,204,89,230,122,156,248,236,242,255,
63,217,212,238,162,45,149,137,61,246,154,195,226,253,178,77,133,0,0,0,
0,73,69,78,68,174,66,96,130
};

const char* LiveMode::recordover_png = (const char*) resource_LiveMode_recordover_png;
const int LiveMode::recordover_pngSize = 489;

// JUCER_RESOURCE: recorddown_png, 475, "../../UI/Record-Down.png"
static const unsigned char resource_LiveMode_recorddown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,32,
0,0,0,32,8,6,0,0,0,115,122,122,244,0,0,1,162,73,68,65,
84,120,1,205,150,133,110,28,49,16,134,45,42,183,162,114,69,69,81,241,
45,202,194,173,215,229,71,9,179,88,225,228,93,194,204,17,134,121,233,24,
194,137,51,19,57,76,203,206,47,125,135,134,255,110,236,209,79,236,42,26,
253,117,39,169,51,150,208,105,125,66,87,123,0,19,88,23,152,226,179,186,
164,78,85,203,250,126,155,248,165,148,69,95,193,194,141,64,22,224,54,193,
177,13,73,243,231,75,226,86,243,243,202,245,132,70,43,96,161,13,128,187,
100,61,97,176,50,62,253,255,26,113,34,116,14,147,71,1,238,19,157,89,
235,247,35,98,71,113,83,253,32,106,202,125,197,80,231,99,6,123,107,231,
151,219,223,220,133,137,140,169,60,36,167,9,235,4,131,134,220,111,96,219,
68,31,158,47,114,92,226,192,241,48,136,107,44,247,228,85,19,167,61,36,
210,71,74,33,238,57,15,21,77,173,218,239,112,123,77,38,100,50,187,29,
19,219,43,126,32,9,74,176,183,75,52,80,139,245,239,145,104,160,19,13,
88,18,13,24,104,96,77,162,129,85,233,6,46,69,9,164,31,194,58,121,
6,104,13,193,12,39,205,128,70,21,98,154,202,45,108,139,50,90,49,238,
77,80,24,32,37,24,168,59,158,132,214,67,220,124,45,97,252,124,70,14,
11,211,107,120,6,88,241,89,145,172,51,4,3,29,124,252,211,85,114,154,
48,165,192,128,185,160,54,79,234,234,98,36,162,60,33,231,9,163,51,166,
215,0,12,204,197,244,95,111,136,29,165,53,229,94,194,96,205,126,254,237,
34,3,218,23,214,9,211,171,199,30,177,6,20,137,154,187,19,58,199,0,
233,208,8,142,173,21,87,205,31,137,142,73,177,127,195,115,23,96,0,107,
2,3,63,3,163,213,9,141,253,16,29,206,150,118,0,201,175,112,45,179,
102,218,231,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::recorddown_png = (const char*) resource_LiveMode_recorddown_png;
const int LiveMode::recorddown_pngSize = 475;

// JUCER_RESOURCE: recordIndicator_png, 273, "../../UI/RecordIndicator.png"
static const unsigned char resource_LiveMode_recordIndicator_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,50,
0,0,0,22,8,6,0,0,0,130,2,207,145,0,0,0,216,73,68,65,
84,120,1,237,151,1,198,195,64,16,133,31,228,28,73,254,255,28,61,66,
219,34,128,34,5,162,80,32,170,7,72,54,5,189,80,83,109,47,208,171,
52,45,64,108,243,52,163,57,194,14,51,124,36,44,230,243,22,251,32,227,
18,44,7,46,3,239,1,31,56,220,177,109,82,44,48,157,38,129,227,1,
141,212,9,170,105,18,190,250,143,124,177,217,251,172,185,251,213,233,17,52,
220,177,200,75,238,252,21,74,49,199,120,157,40,193,67,154,160,140,36,211,
194,197,120,241,71,146,208,68,230,174,34,210,97,252,80,39,33,200,254,38,
98,34,38,98,34,129,98,34,38,98,34,38,210,233,127,52,226,249,123,198,
231,165,58,145,237,122,39,34,103,176,46,74,177,162,76,230,110,42,146,160,
68,253,23,81,162,63,166,152,129,195,186,72,25,133,244,46,198,1,211,97,
93,100,68,82,180,2,167,227,174,146,4,231,3,225,150,74,9,13,71,229,
66,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::recordIndicator_png = (const char*) resource_LiveMode_recordIndicator_png;
const int LiveMode::recordIndicator_pngSize = 273;

// JUCER_RESOURCE: recordIndicatorblink_png, 202, "../../UI/RecordIndicator-Blink.png"
static const unsigned char resource_LiveMode_recordIndicatorblink_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,50,
0,0,0,22,8,6,0,0,0,130,2,207,145,0,0,0,145,73,68,65,
84,120,218,237,151,193,13,128,32,12,69,255,38,194,32,142,160,238,227,0,
138,238,36,206,36,114,53,216,38,54,97,4,75,250,147,151,244,192,229,165,
28,250,33,9,14,19,113,18,153,40,63,39,19,113,243,24,81,103,115,8,
252,64,35,171,195,82,111,162,172,26,37,100,246,24,240,125,167,162,156,136,
208,225,110,64,36,129,135,22,48,17,19,49,17,19,49,17,19,49,17,19,
249,169,72,106,64,228,106,229,140,63,192,117,81,105,177,18,158,221,163,7,
135,235,162,86,137,208,97,70,29,174,139,188,34,37,69,43,17,135,108,130,
243,2,248,241,252,25,137,148,70,78,0,0,0,0,73,69,78,68,174,66,
96,130
};

const char* LiveMode::recordIndicatorblink_png = (const char*) resource_LiveMode_recordIndicatorblink_png;
const int LiveMode::recordIndicatorblink_pngSize = 202;

// JUCER_RESOURCE: bigCheck_png, 1384, "../../UI/BigCheck.png"
static const unsigned char resource_LiveMode_bigCheck_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,45,
0,0,0,47,8,6,0,0,0,119,210,67,145,0,0,5,47,73,68,65,
84,120,1,98,24,76,32,176,251,162,152,255,132,139,113,128,230,204,1,94,
114,36,8,227,103,219,207,214,218,182,57,56,219,182,109,59,201,96,109,219,
182,189,147,206,217,182,237,187,190,250,146,169,117,122,241,230,77,239,254,126,
181,207,201,63,149,194,87,213,33,195,25,18,54,109,39,100,138,79,131,166,
248,157,62,254,70,246,42,125,255,158,135,31,150,251,237,21,176,61,159,223,
112,66,216,176,159,35,176,95,201,164,202,232,97,158,208,15,252,162,168,78,
48,31,187,80,134,144,109,175,95,36,235,116,157,32,139,107,12,146,185,121,
189,101,214,73,81,178,152,44,111,48,44,9,238,124,168,21,56,100,189,84,
159,64,190,3,76,251,91,150,200,194,242,1,242,148,99,204,29,90,89,189,
161,236,237,53,218,128,3,230,203,39,179,135,91,94,62,95,102,28,31,241,
5,134,183,59,63,176,218,131,54,236,155,181,0,95,217,119,195,129,33,75,
44,115,61,124,219,82,37,48,172,249,197,115,217,203,27,207,120,248,213,131,
244,132,133,233,196,1,209,237,209,53,50,39,171,151,18,184,110,183,137,12,
252,99,192,116,202,180,0,163,164,1,34,240,92,66,22,87,31,168,4,46,
173,59,68,6,95,180,1,252,31,61,232,105,90,128,79,141,56,77,8,224,
15,64,215,106,59,86,9,156,155,219,71,118,127,98,125,50,142,197,163,218,
26,7,154,5,32,154,156,61,67,9,156,121,66,68,118,184,99,57,151,184,
153,122,26,138,148,251,18,192,116,64,180,187,121,137,204,56,206,82,39,222,
69,115,56,142,223,15,199,214,30,175,199,203,166,125,7,32,240,186,115,179,
213,137,87,167,227,120,6,254,37,108,57,53,244,212,227,23,19,13,8,224,
79,116,187,138,70,35,148,192,37,212,5,131,47,36,220,196,11,154,226,44,
45,192,103,196,95,61,34,100,137,55,225,185,198,103,78,87,2,227,13,116,
127,108,45,39,222,51,218,186,94,208,18,35,0,209,241,206,229,202,6,130,
24,111,127,235,82,14,139,5,109,30,94,124,128,158,56,54,196,165,128,232,
249,236,70,153,95,212,79,233,229,134,167,79,221,36,134,160,248,180,0,159,
102,217,37,72,36,128,212,104,53,122,23,26,136,235,225,191,79,53,236,230,
90,128,81,83,89,87,180,184,100,206,206,227,248,137,117,158,78,182,196,221,
124,13,109,229,13,73,149,149,17,243,143,227,99,45,217,246,198,197,28,199,
115,180,77,36,97,99,99,133,59,30,25,2,162,93,233,229,6,161,41,12,
252,5,85,153,83,180,0,35,227,9,96,29,64,154,158,63,83,93,143,107,
111,138,227,127,131,70,162,131,198,176,16,15,2,184,235,67,107,48,30,249,
2,231,100,197,183,168,199,246,195,218,128,233,230,117,8,226,175,160,97,203,
210,58,131,253,189,124,172,41,91,95,187,128,195,98,241,25,227,198,237,175,
5,24,147,4,198,253,93,81,111,245,122,108,18,244,95,5,162,137,76,141,
195,169,243,16,64,186,220,191,10,146,210,23,184,176,98,0,235,138,127,195,
150,211,37,181,141,193,120,169,48,100,137,23,200,214,210,13,190,14,154,98,
117,208,18,151,236,240,119,163,47,149,67,212,35,44,74,106,14,86,234,227,
206,247,173,226,174,103,164,238,53,191,248,234,113,148,76,131,232,194,255,236,
104,73,18,180,156,199,183,213,200,20,22,75,119,165,90,52,166,176,241,22,
45,226,149,139,7,191,127,72,202,22,38,116,193,79,92,184,231,19,174,8,
71,89,66,199,170,209,114,212,166,215,10,153,185,73,12,25,206,229,238,112,
250,248,58,153,125,114,76,189,175,48,220,7,255,51,16,17,117,83,57,6,
125,69,230,42,173,130,162,190,190,130,6,59,54,222,89,240,146,165,90,179,
81,190,192,232,136,221,30,229,242,230,220,147,194,114,37,250,226,162,109,175,
95,44,51,124,18,9,235,41,196,45,118,109,93,35,107,142,162,56,31,77,
159,163,124,41,195,162,197,101,243,188,208,50,197,138,148,150,55,186,232,187,
100,236,97,95,107,115,195,38,157,48,198,147,156,27,48,49,251,254,126,141,
22,163,248,247,127,66,114,167,120,113,34,190,71,204,169,186,152,11,209,114,
244,86,137,89,183,243,4,255,174,151,211,91,246,124,106,3,87,139,203,82,
94,103,89,70,114,201,82,149,173,158,79,123,32,24,239,51,142,243,239,122,
109,174,95,200,113,60,165,170,70,162,24,110,80,167,211,120,5,52,39,228,
52,119,18,41,44,243,221,110,226,58,252,54,190,68,146,87,149,110,184,216,
77,170,107,22,236,20,26,115,94,94,190,127,28,227,103,120,40,119,237,101,
58,129,170,222,252,252,19,160,250,156,121,98,148,1,246,200,80,129,0,140,
129,54,13,75,65,177,194,173,185,77,134,239,49,48,118,115,44,134,48,156,
166,109,68,106,118,209,236,61,2,70,231,228,106,145,182,37,75,248,5,81,
234,173,173,214,249,84,5,181,181,190,106,1,31,226,76,77,247,228,241,10,
110,12,173,176,59,192,213,91,140,244,194,194,18,63,244,120,81,100,165,123,
217,125,47,110,222,252,226,57,187,12,156,157,65,163,211,227,235,216,203,87,
164,255,104,44,234,20,96,241,135,146,149,117,74,108,87,160,177,215,224,228,
91,8,169,170,235,44,100,38,32,48,22,237,12,152,207,245,220,3,203,200,
203,69,58,71,167,246,0,233,241,228,122,153,157,25,247,15,139,76,146,156,
143,172,245,194,194,16,183,106,3,222,162,173,207,224,141,61,14,35,161,137,
113,142,135,110,152,155,219,155,212,219,104,217,249,254,85,74,201,153,254,216,
182,54,228,134,76,251,29,64,41,205,18,47,249,55,17,13,255,112,206,65,
213,164,31,202,96,114,66,249,55,57,59,126,73,182,32,104,218,215,226,0,
83,23,223,255,179,28,119,253,62,203,248,138,0,0,0,0,73,69,78,68,
174,66,96,130
};

const char* LiveMode::bigCheck_png = (const char*) resource_LiveMode_bigCheck_png;
const int LiveMode::bigCheck_pngSize = 1384;

// JUCER_RESOURCE: liveModeButtonDown_png, 964, "../../UI/LiveModeButtonDown.png"
static const unsigned char resource_LiveMode_liveModeButtonDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,92,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,24,16,144,23,
17,142,23,16,145,24,16,144,23,16,144,24,16,144,25,17,142,25,15,145,
24,17,144,24,16,144,23,17,144,80,144,208,24,16,144,38,48,159,24,17,
144,38,49,160,45,65,168,59,96,184,41,56,164,34,40,156,31,33,152,62,
104,189,76,137,204,27,25,148,29,27,150,66,112,192,27,24,148,52,80,176,
30,28,150,45,64,167,31,32,151,52,81,176,74,129,201,72,126,199,69,120,
197,48,72,172,55,88,180,37,46,159,30,31,151,25,17,145,63,107,189,60,
97,184,32,34,153,79,141,206,60,100,185,27,22,148,69,119,195,76,134,203,
25,18,145,28,26,148,26,21,147,31,32,152,27,22,147,26,19,145,44,61,
166,30,30,152,26,20,146,61,100,186,52,79,176,71,123,198,65,111,191,67,
113,192,30,30,151,64,109,191,33,37,154,43,60,166,28,26,149,56,89,181,
39,49,161,67,116,194,47,69,170,72,124,198,28,25,149,71,124,198,50,76,
174,53,84,178,53,81,177,26,21,146,55,89,180,77,138,204,51,78,175,29,
28,150,53,82,177,70,119,196,67,115,193,48,70,171,33,37,155,34,38,155,
77,138,205,35,42,157,29,29,151,62,102,186,71,123,197,79,140,206,56,90,
181,76,135,203,41,53,163,37,45,159,51,77,175,75,131,201,46,66,169,68,
116,194,36,43,157,78,140,206,41,55,164,63,106,188,68,117,194,63,105,188,
41,54,164,78,139,205,30,29,150,210,179,55,59,0,0,0,16,116,82,78,
83,0,191,189,242,244,243,77,79,190,78,253,61,134,136,241,122,173,79,89,
121,0,0,2,7,73,68,65,84,120,94,205,150,101,111,220,64,16,134,55,
119,73,154,180,105,251,142,249,152,41,200,12,101,102,102,102,166,255,47,117,
206,30,169,58,223,185,82,28,71,218,231,203,237,59,171,93,63,178,110,70,
86,74,29,26,26,38,205,24,30,27,87,204,81,210,146,9,126,103,164,41,
163,106,136,52,101,76,141,144,166,164,21,105,75,164,154,105,154,20,11,57,
42,171,3,80,43,1,200,82,44,92,0,109,63,228,128,214,65,171,77,103,
50,153,194,94,212,110,101,110,211,159,204,221,8,181,2,95,55,157,136,154,
164,189,168,1,46,181,128,8,181,44,128,82,66,106,107,197,98,241,1,209,
156,101,89,27,68,43,252,243,52,72,204,228,96,181,123,86,83,212,206,88,
1,43,33,181,13,169,95,72,226,191,214,1,224,201,94,144,152,92,191,154,
32,106,109,9,165,144,154,39,117,119,63,106,91,54,115,169,87,237,156,125,
22,167,28,199,153,255,106,127,235,87,251,225,52,240,211,153,103,181,41,123,
129,147,227,188,197,149,45,162,41,187,203,67,0,5,251,4,26,92,63,137,
139,246,181,248,106,57,248,169,71,173,13,192,149,46,28,212,161,89,120,254,
94,144,136,90,64,206,223,19,214,229,1,114,103,92,181,27,55,7,171,237,
214,235,245,215,17,106,231,203,247,251,212,42,245,93,92,46,151,203,215,69,
237,42,159,255,28,91,77,210,32,53,33,66,141,233,83,243,0,116,164,13,
214,33,36,163,246,165,186,132,239,179,179,11,104,84,45,86,195,157,170,207,
175,184,106,75,213,128,124,18,115,45,219,211,119,46,9,49,213,178,177,231,
218,242,233,128,185,153,71,126,122,76,244,196,104,2,207,140,231,68,47,140,
151,120,213,221,157,249,191,218,170,241,6,77,190,228,55,222,189,95,51,62,
224,35,175,151,1,172,26,159,228,1,147,49,212,4,120,185,32,116,72,58,
141,152,208,92,139,80,11,207,53,23,194,62,230,154,89,251,199,230,118,16,
242,196,84,106,181,109,242,201,251,69,78,33,118,184,184,232,7,62,87,33,
90,148,107,76,217,147,68,155,178,218,137,82,75,147,166,28,211,247,3,60,
165,198,73,79,14,31,81,106,66,79,179,227,138,25,77,141,144,102,164,83,
252,206,254,2,238,34,50,28,244,77,253,136,0,0,0,0,73,69,78,68,
174,66,96,130
};

const char* LiveMode::liveModeButtonDown_png = (const char*) resource_LiveMode_liveModeButtonDown_png;
const int LiveMode::liveModeButtonDown_pngSize = 964;

// JUCER_RESOURCE: patchEditorButtonNormal_png, 950, "../../UI/PatchEditorButtonNormal.png"
static const unsigned char resource_LiveMode_patchEditorButtonNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,26,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,144,25,
17,142,23,16,145,24,16,144,24,16,144,25,15,145,23,17,142,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,59,95,184,66,112,
193,73,128,201,59,96,184,52,80,176,45,64,168,37,47,160,74,132,202,77,
136,204,31,32,151,35,40,155,55,89,180,38,48,160,31,32,152,52,79,176,
78,139,206,78,139,205,38,48,159,76,134,203,75,132,202,66,112,192,59,96,
185,70,120,196,45,64,167,73,127,200,73,128,200,55,85,179,25,20,145,67,
115,193,79,142,208,56,90,181,66,111,192,71,124,198,32,36,154,72,126,199,
37,45,159,41,56,164,69,120,197,67,114,193,37,46,159,40,52,162,76,137,
204,77,138,205,28,23,148,54,84,178,64,108,190,50,76,174,79,140,206,80,
143,208,30,28,150,62,102,186,34,40,156,25,18,145,55,88,180,74,130,201,
72,124,198,27,22,147,33,36,154,51,76,174,61,100,186,28,26,149,28,26,
148,30,30,151,68,116,194,25,20,146,42,56,163,36,44,158,53,84,178,49,
75,173,48,72,172,56,88,180,77,135,204,25,19,146,46,66,169,44,63,168,
76,135,203,248,206,226,190,0,0,0,16,116,82,78,83,0,189,191,242,243,
78,61,79,244,190,134,77,253,136,241,122,10,67,173,122,0,0,2,59,73,
68,65,84,120,94,205,150,215,118,219,48,16,5,33,217,78,92,147,187,96,
87,239,221,189,247,154,222,123,255,255,223,200,130,148,113,36,209,84,28,217,
15,152,151,229,21,0,98,8,2,60,18,66,60,76,207,194,48,102,231,102,
4,179,4,35,153,231,53,195,242,90,134,12,35,147,95,198,130,72,99,141,
12,36,143,57,49,141,12,25,200,31,76,9,128,140,4,208,106,23,215,208,
29,185,208,220,147,154,131,107,232,110,180,161,105,223,159,218,219,98,177,248,
20,157,231,52,194,81,167,211,57,162,33,2,254,41,89,237,125,49,228,43,
245,225,206,1,81,134,75,57,204,101,190,202,252,151,154,195,53,11,100,105,
16,221,54,68,21,64,178,90,55,54,13,170,68,46,128,70,152,27,0,220,
9,213,130,245,136,50,149,185,156,1,56,211,73,17,76,162,214,44,20,10,
187,68,60,252,59,128,54,215,12,167,8,30,209,90,239,179,49,86,205,65,
68,151,186,96,98,201,153,68,77,7,77,67,39,151,168,170,183,104,92,13,
191,164,148,239,224,125,37,90,241,20,151,232,201,26,215,125,0,251,92,107,
178,135,75,79,177,162,212,164,98,239,38,181,158,148,87,81,218,147,10,165,
182,37,21,1,17,15,63,0,240,132,235,139,43,137,151,225,4,159,228,150,
82,11,219,182,101,235,159,39,84,117,214,43,58,248,244,177,71,140,159,208,
172,78,17,85,7,24,221,107,122,103,59,250,69,232,182,17,181,29,87,161,
82,171,164,200,142,87,227,190,30,114,165,70,92,237,155,235,62,11,21,74,
57,120,220,77,169,237,186,133,91,169,217,172,96,221,184,215,72,39,102,188,
154,158,35,97,175,233,51,25,59,161,201,106,154,4,181,141,223,219,216,105,
54,155,175,140,83,211,35,171,230,169,29,90,175,145,245,125,255,184,175,86,
183,60,108,114,14,172,55,56,246,21,167,227,213,62,251,33,95,108,235,0,
57,190,80,106,167,62,123,112,10,6,38,104,125,176,240,145,235,38,60,171,
126,43,181,248,121,117,227,223,181,100,53,77,59,118,66,245,138,58,241,239,
90,162,90,197,182,237,10,49,58,69,68,249,48,12,171,180,106,71,84,234,
81,211,57,151,67,26,162,102,107,106,3,169,126,125,203,213,129,9,206,137,
84,137,110,162,110,57,172,54,101,234,95,201,71,34,141,60,25,200,9,82,
98,6,203,249,31,198,173,217,201,207,197,7,66,204,195,68,22,31,11,102,
33,53,13,195,152,74,241,154,253,5,178,139,46,118,227,166,235,108,0,0,
0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::patchEditorButtonNormal_png = (const char*) resource_LiveMode_patchEditorButtonNormal_png;
const int LiveMode::patchEditorButtonNormal_pngSize = 950;

// JUCER_RESOURCE: patchEditorButtonOver_png, 952, "../../UI/PatchEditorButtonOver.png"
static const unsigned char resource_LiveMode_patchEditorButtonOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,26,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,144,25,
17,142,23,16,145,24,16,144,24,16,144,25,15,145,23,17,142,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,158,150,110,187,179,
102,214,206,95,132,124,116,105,97,123,76,68,130,219,212,94,77,69,130,159,
151,109,50,42,137,64,56,133,146,139,112,78,70,130,29,22,142,51,43,137,
227,218,91,237,229,89,131,123,116,233,225,90,231,223,90,224,216,92,220,212,
93,186,178,102,160,152,109,200,191,98,104,96,123,212,204,96,142,133,114,190,
182,101,213,205,95,148,141,112,185,177,103,206,199,97,57,49,135,209,201,96,
74,66,131,91,84,127,200,192,99,190,181,101,74,67,131,85,77,128,227,219,
91,230,222,91,37,29,141,139,131,114,179,171,104,125,117,118,234,226,90,239,
231,89,45,36,138,169,161,106,64,57,134,28,20,143,146,138,113,217,209,94,
207,199,97,34,26,141,58,49,135,126,117,117,166,158,107,41,33,140,40,32,
140,47,39,138,193,185,100,30,22,142,91,83,126,71,63,132,138,131,115,122,
115,118,118,111,120,146,137,112,226,218,92,28,21,143,108,100,122,103,96,123,
225,217,92,74,175,212,225,0,0,0,16,116,82,78,83,0,189,191,242,243,
78,61,79,244,190,134,77,253,136,241,122,10,67,173,122,0,0,2,61,73,
68,65,84,120,94,205,150,215,154,218,64,12,70,7,216,77,182,38,255,140,
43,189,119,182,247,94,211,123,239,239,255,26,209,12,224,193,49,134,108,185,
152,115,35,203,178,173,131,176,248,96,140,61,76,206,193,48,230,230,103,25,
177,12,35,89,160,153,161,184,94,230,134,81,206,23,177,200,146,88,231,6,
146,199,60,155,65,153,27,200,31,164,24,192,141,4,8,212,46,135,240,59,
114,25,112,79,106,25,12,225,119,163,139,128,238,253,169,189,45,149,74,79,
209,123,206,255,225,184,215,235,29,243,16,62,157,138,87,123,95,82,124,29,
22,232,98,159,214,142,66,77,229,53,58,42,223,72,45,67,49,11,100,185,
102,164,22,34,13,32,94,109,45,210,6,105,206,29,0,45,149,183,0,56,
183,84,243,55,250,212,120,141,194,57,128,243,32,147,248,183,81,107,23,10,
133,61,206,233,246,239,0,186,20,203,50,83,208,29,29,10,138,205,73,106,
42,131,234,177,6,141,206,50,55,87,211,137,166,21,100,52,195,180,126,69,
163,106,191,132,16,239,224,210,43,178,234,74,174,176,34,26,20,15,0,28,
80,108,136,21,92,169,202,170,84,19,146,253,113,106,43,66,92,115,197,190,
144,72,181,109,33,241,57,167,219,15,1,60,161,248,226,90,224,165,106,240,
73,108,75,53,85,219,17,157,169,27,42,251,235,137,134,62,189,254,136,49,
27,154,213,153,34,45,27,132,223,53,253,102,103,130,47,66,215,194,106,187,
142,68,102,157,170,36,59,89,141,174,117,145,171,182,162,106,223,28,231,153,
82,168,230,224,210,101,82,109,207,41,252,151,154,77,10,214,216,53,32,244,
12,39,171,5,61,98,214,64,239,164,222,208,233,106,138,88,181,205,223,59,
216,109,183,219,175,76,83,211,13,211,230,169,29,89,175,145,245,60,239,100,
160,214,180,92,108,81,238,91,111,112,226,73,206,38,171,125,246,20,95,108,
235,16,57,58,144,106,103,30,121,80,230,143,52,232,124,176,240,145,226,22,
92,171,57,93,109,236,190,58,209,223,181,120,181,128,110,100,67,131,137,102,
162,191,107,177,106,117,219,182,235,92,161,178,33,131,57,170,164,194,43,118,
159,122,179,95,186,160,112,196,67,52,236,128,198,72,214,28,62,178,50,210,
224,130,115,21,213,67,228,35,195,106,41,83,255,74,62,98,73,228,185,129,
156,34,193,102,81,204,255,48,110,102,167,63,151,30,48,182,0,19,89,122,
204,136,197,196,12,12,35,149,160,153,253,5,244,7,46,138,246,170,87,44,
0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::patchEditorButtonOver_png = (const char*) resource_LiveMode_patchEditorButtonOver_png;
const int LiveMode::patchEditorButtonOver_pngSize = 952;

// JUCER_RESOURCE: patchEditorButtonDown_png, 898, "../../UI/PatchEditorButtonDown.png"
static const unsigned char resource_LiveMode_patchEditorButtonDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,2,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,23,17,142,24,16,144,24,
16,144,24,16,144,23,16,145,25,15,145,25,17,142,23,16,144,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,45,65,168,38,48,
159,31,32,151,52,80,176,59,96,184,67,113,192,30,28,150,45,64,168,73,
128,201,45,64,167,66,112,192,52,81,176,73,128,200,26,20,146,49,75,173,
27,24,148,25,18,144,26,21,147,66,112,193,28,26,148,29,28,150,38,48,
160,34,40,156,69,120,197,59,96,185,31,33,152,31,32,152,25,20,146,37,
46,159,76,134,203,72,124,198,32,34,153,27,22,147,54,84,178,76,137,204,
42,58,166,67,115,193,64,108,190,67,114,193,35,40,155,40,52,162,33,36,
154,63,104,188,37,45,159,24,17,144,74,132,202,28,23,148,38,49,160,77,
138,205,71,124,198,74,130,201,60,97,184,56,88,180,55,85,179,43,60,166,
32,36,154,68,116,194,51,76,174,36,44,158,79,140,206,70,120,196,79,142,
207,48,72,172,53,84,178,49,72,172,58,94,183,30,30,151,62,104,189,124,
10,233,223,0,0,0,16,116,82,78,83,0,191,242,189,77,243,253,244,79,
134,61,78,190,136,241,122,219,41,121,49,0,0,2,31,73,68,65,84,120,
94,205,150,215,122,26,49,16,70,101,176,227,56,118,146,145,182,211,123,119,
239,221,169,189,151,247,127,149,252,18,48,31,187,176,144,96,95,232,220,252,
204,8,173,14,66,226,67,8,241,120,101,157,44,99,125,107,83,128,167,100,
37,27,216,51,178,148,85,177,66,150,178,37,214,200,82,50,130,172,133,213,
110,198,208,61,185,97,30,72,45,146,99,232,126,244,36,211,123,56,181,221,
82,169,244,77,246,127,83,130,131,126,191,127,64,49,66,180,210,213,94,151,
12,239,104,4,230,135,68,85,68,217,212,101,52,170,255,165,22,33,115,82,
230,136,153,28,139,209,64,43,93,109,64,113,208,106,16,121,136,182,169,219,
104,120,75,170,133,47,134,148,169,140,56,196,216,33,87,154,112,25,181,124,
161,80,56,39,194,244,239,104,244,144,85,84,67,48,163,131,48,92,206,85,
67,101,24,208,192,100,178,138,150,81,227,130,105,115,229,17,53,248,136,206,
80,251,165,148,218,149,62,142,200,181,175,185,149,21,213,68,158,97,236,12,
217,84,21,121,107,70,174,181,154,210,236,204,82,171,40,117,76,134,29,165,
209,106,251,74,19,18,97,250,41,26,95,145,31,142,149,124,105,22,248,163,
246,181,154,25,59,81,157,5,55,148,15,20,239,40,127,250,228,71,76,170,
129,92,172,130,26,22,72,158,53,62,217,17,127,17,60,150,80,187,242,52,
4,58,69,77,110,190,26,222,235,203,110,177,61,173,246,214,243,126,26,133,
98,87,250,120,155,86,59,247,10,255,164,230,66,193,153,117,214,184,50,204,
87,227,53,82,206,26,223,73,190,161,139,213,152,20,181,203,55,39,242,42,
159,207,191,178,78,141,103,54,236,83,187,115,126,200,92,16,4,71,35,181,
150,227,203,61,212,161,243,94,30,5,154,139,249,106,31,3,195,39,215,57,
149,93,188,208,106,23,1,60,80,133,19,11,116,62,59,242,11,114,79,250,
78,107,145,90,202,125,245,146,191,107,243,212,152,222,212,13,229,29,141,166,
127,215,82,213,234,174,235,214,145,92,141,32,195,157,41,106,84,27,117,235,
173,225,208,54,226,142,98,52,93,166,57,81,181,198,143,172,77,44,176,77,
100,210,60,164,133,136,171,101,200,82,158,217,251,7,60,43,54,201,78,30,
61,17,98,195,78,179,231,2,172,102,215,200,50,50,89,236,217,95,59,244,
38,163,211,205,105,196,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::patchEditorButtonDown_png = (const char*) resource_LiveMode_patchEditorButtonDown_png;
const int LiveMode::patchEditorButtonDown_pngSize = 898;

// JUCER_RESOURCE: addButtonNormal_png, 603, "../../UI/AddButtonNormal.png"
static const unsigned char resource_LiveMode_addButtonNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,222,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,23,16,144,24,16,144,24,
16,144,23,17,142,25,15,145,24,16,144,23,16,145,25,17,142,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,52,80,176,73,127,200,80,144,
208,77,136,204,49,72,172,37,47,160,59,95,184,73,128,201,77,135,204,25,
20,145,55,89,180,80,143,208,51,76,174,26,20,146,66,111,192,37,45,159,
70,120,196,37,46,159,35,42,157,74,131,202,72,126,199,35,40,155,47,68,
170,57,91,182,52,79,176,38,48,160,56,90,181,66,112,193,42,56,163,54,
84,178,75,133,203,75,133,202,28,23,148,33,36,154,68,117,194,27,22,148,
52,81,176,32,36,154,65,111,191,36,44,158,64,108,190,75,131,201,42,58,
166,33,37,155,25,18,144,56,88,180,74,129,201,78,141,207,70,122,197,74,
132,202,76,135,203,32,34,153,67,116,194,25,19,146,44,60,166,79,143,207,
63,104,188,247,157,180,161,0,0,0,16,116,82,78,83,0,189,242,191,78,
190,243,77,134,244,79,61,253,136,241,122,236,152,225,158,0,0,1,28,73,
68,65,84,120,94,237,214,213,110,196,48,16,134,209,73,178,8,109,127,219,
65,88,102,46,51,115,223,255,133,26,43,81,246,1,246,34,83,169,223,141,
53,119,71,214,88,50,17,53,172,58,152,85,47,151,40,233,0,44,171,17,
53,16,46,109,197,44,59,10,81,37,11,75,197,176,8,101,170,192,230,72,
123,131,73,128,98,25,176,63,45,142,185,210,78,128,9,75,218,72,158,3,
167,242,56,7,124,75,185,155,158,164,28,21,70,155,64,135,117,14,176,179,
41,191,209,130,104,47,221,119,12,22,139,33,122,221,49,51,218,26,128,173,
84,31,128,195,144,54,243,188,139,148,118,229,37,205,82,218,153,167,235,20,
73,203,115,118,147,166,57,72,43,148,214,22,98,170,105,55,243,75,76,133,
104,107,218,199,252,26,95,66,136,14,143,93,115,0,244,179,93,123,4,240,
163,119,237,239,210,254,105,227,213,0,67,215,237,105,218,237,234,14,247,174,
235,62,48,160,241,123,161,91,223,247,99,165,158,147,35,208,83,214,86,169,
192,207,122,221,131,102,114,253,74,30,146,133,136,35,109,3,131,74,8,163,
128,221,157,109,62,91,77,162,26,56,214,58,162,164,170,81,1,179,76,163,
73,244,11,36,6,42,188,119,60,50,165,0,0,0,0,73,69,78,68,174,
66,96,130
};

const char* LiveMode::addButtonNormal_png = (const char*) resource_LiveMode_addButtonNormal_png;
const int LiveMode::addButtonNormal_pngSize = 603;

// JUCER_RESOURCE: addButtonOver_png, 613, "../../UI/AddButtonOver.png"
static const unsigned char resource_LiveMode_addButtonOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,231,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,23,16,144,24,16,144,23,
17,142,24,16,144,24,16,144,25,15,145,23,16,145,25,17,142,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,212,204,96,132,124,116,240,232,
88,118,110,119,76,68,130,158,150,110,214,206,95,29,22,142,226,218,92,146,
139,112,227,218,91,239,231,89,148,141,112,74,66,131,150,143,111,222,214,93,
185,177,103,78,70,130,139,131,114,131,123,116,187,179,102,200,191,98,91,83,
126,112,104,121,74,67,131,126,117,117,64,56,133,218,210,94,221,213,92,37,
29,141,184,176,102,31,23,142,59,50,135,35,27,141,238,230,88,194,186,99,
146,137,112,31,22,142,192,185,101,203,195,98,99,90,124,54,46,136,57,49,
135,133,125,116,218,209,94,95,87,126,60,52,135,27,19,143,215,207,95,179,
171,104,235,227,89,67,59,133,218,211,93,173,164,105,71,63,132,68,60,133,
28,21,143,209,201,96,210,202,96,225,217,92,1,9,40,65,0,0,0,16,
116,82,78,83,0,242,191,189,78,190,77,244,243,134,79,61,253,136,241,122,
15,75,248,37,0,0,1,29,73,68,65,84,120,94,237,214,213,110,196,48,
16,134,209,73,178,8,109,127,219,65,88,102,42,51,51,191,255,243,52,89,
55,218,7,216,139,76,165,126,55,206,220,29,89,25,201,68,84,51,203,96,
86,185,88,160,164,45,176,172,74,84,131,223,140,20,179,162,208,71,137,76,
52,21,195,66,20,169,130,136,35,237,27,6,1,138,101,192,230,180,56,230,
74,219,5,230,44,105,11,113,8,28,136,165,202,58,18,98,61,61,8,177,
200,141,54,199,170,177,202,138,244,180,190,209,156,104,231,221,75,76,123,189,
119,180,186,159,204,104,99,0,145,82,35,0,54,67,90,219,117,175,53,109,
207,77,106,107,218,177,155,182,159,43,45,203,206,38,77,179,161,203,149,54,
147,114,146,210,30,7,87,152,72,57,75,105,103,131,55,92,72,41,79,121,
252,107,54,128,209,239,26,156,0,120,213,107,240,87,105,255,180,175,225,20,
207,142,211,74,105,55,195,91,220,57,142,115,207,128,198,111,67,59,158,231,
197,74,61,37,71,176,154,116,29,165,130,236,251,101,3,154,193,245,41,185,
77,38,66,142,180,62,44,42,192,15,3,118,119,214,255,104,212,137,170,224,
88,99,135,146,74,86,5,204,50,172,58,209,15,174,2,42,247,45,197,195,
125,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::addButtonOver_png = (const char*) resource_LiveMode_addButtonOver_png;
const int LiveMode::addButtonOver_pngSize = 613;

// JUCER_RESOURCE: addButtonDown_png, 566, "../../UI/AddButtonDown.png"
static const unsigned char resource_LiveMode_addButtonDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,207,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,24,16,144,24,
16,144,23,16,145,23,16,144,23,17,142,25,15,145,24,16,144,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,31,33,152,67,113,
192,52,80,176,45,65,168,31,32,151,55,88,180,24,17,144,27,25,148,67,
114,193,62,104,189,32,34,153,69,120,197,69,118,195,30,29,150,34,40,156,
47,69,170,38,48,159,52,81,176,57,92,182,67,115,193,53,84,178,29,27,
149,38,49,160,27,24,148,66,112,192,39,49,161,36,43,158,25,17,145,30,
31,151,37,44,158,78,140,206,76,137,204,48,72,172,72,126,199,40,52,162,
71,124,198,72,124,198,29,29,151,62,102,186,71,123,197,79,142,208,34,38,
155,77,138,204,26,19,145,52,79,176,30,28,150,41,56,164,68,116,194,60,
100,186,78,139,206,29,27,150,216,1,221,83,0,0,0,16,116,82,78,83,
0,242,191,189,243,244,190,79,78,77,134,253,61,136,241,122,202,241,201,56,
0,0,1,6,73,68,65,84,120,218,237,214,87,142,194,48,16,128,225,9,
161,47,187,59,99,59,133,222,235,246,94,232,229,254,103,194,38,88,28,128,
7,15,18,255,131,157,121,251,20,77,164,0,64,46,149,65,102,101,178,121,
208,221,34,203,138,0,57,100,90,1,82,200,180,44,164,145,105,30,32,219,
206,167,197,49,87,218,27,81,157,37,173,41,102,68,95,98,135,182,39,33,
78,211,179,16,77,103,180,58,29,170,162,109,108,39,251,70,29,209,166,163,
15,170,76,38,13,234,143,106,204,104,85,34,26,35,182,244,21,49,164,181,
131,96,145,208,30,2,93,59,161,61,6,166,87,167,52,91,100,167,132,22,
81,146,83,218,64,169,158,161,125,118,191,169,167,212,192,208,94,186,107,218,
40,165,182,60,118,45,210,71,235,184,107,239,250,88,153,93,187,210,46,151,
86,235,84,168,33,101,223,208,126,58,191,244,39,165,252,119,79,99,248,133,
14,195,48,140,17,231,250,42,155,233,216,16,177,108,159,151,103,208,60,100,
218,29,223,31,112,31,242,200,179,155,18,64,145,167,236,30,116,5,63,141,
204,242,252,18,192,30,98,39,5,161,26,135,177,105,0,0,0,0,73,69,
78,68,174,66,96,130
};

const char* LiveMode::addButtonDown_png = (const char*) resource_LiveMode_addButtonDown_png;
const int LiveMode::addButtonDown_pngSize = 566;

// JUCER_RESOURCE: replaceButtonNormal_png, 809, "../../UI/ReplaceButtonNormal.png"
static const unsigned char resource_LiveMode_replaceButtonNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,5,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,25,15,145,23,16,145,23,
16,144,24,16,144,24,16,144,23,17,142,24,16,144,24,16,144,25,17,142,
24,16,144,24,17,144,23,17,144,24,16,144,80,144,208,31,32,151,73,128,
201,59,95,184,44,63,168,45,64,168,37,47,160,31,32,152,66,112,193,74,
132,202,55,89,180,52,80,176,66,112,192,27,22,147,25,20,145,73,128,200,
76,134,203,38,48,159,59,96,185,59,96,184,41,56,164,75,132,202,52,79,
176,77,136,204,37,45,159,25,20,146,73,127,200,76,135,203,35,40,155,78,
139,206,78,139,205,34,40,156,56,90,181,37,46,159,54,84,178,30,28,150,
79,142,208,40,52,162,49,72,172,76,137,204,66,111,192,46,66,169,45,64,
167,28,23,148,60,100,186,77,135,204,46,66,170,26,21,147,71,124,198,25,
19,146,42,56,163,55,85,179,80,143,208,64,108,190,72,126,199,62,102,186,
38,48,160,26,20,146,79,142,207,67,116,194,48,72,172,75,131,201,61,100,
186,33,36,154,74,130,201,28,26,149,62,104,189,67,114,193,51,76,174,32,
36,154,244,231,130,242,0,0,0,16,116,82,78,83,0,242,191,189,134,79,
78,190,244,77,243,253,61,241,136,122,34,119,90,38,0,0,1,195,73,68,
65,84,120,94,205,213,229,110,220,64,20,134,225,217,221,52,88,248,206,140,
25,22,25,194,76,101,102,190,255,75,233,177,61,155,104,164,90,138,212,184,
153,231,143,237,213,30,233,213,145,65,8,113,175,190,10,203,172,174,44,11,
246,16,86,90,226,157,161,181,59,38,203,140,227,22,214,68,29,187,100,161,
24,43,98,29,99,178,208,28,53,1,144,149,128,155,166,189,90,176,46,173,
141,133,212,198,180,102,16,4,77,92,206,62,80,137,104,198,190,221,69,218,
57,31,207,1,180,169,68,23,76,222,109,218,214,105,33,34,250,120,170,113,
240,167,119,239,117,90,91,255,72,44,210,231,91,215,99,21,166,181,81,232,
19,73,104,9,49,169,211,18,20,136,245,193,204,177,91,79,155,56,142,51,
193,145,215,113,94,226,192,243,188,29,156,57,145,4,154,124,190,135,23,206,
155,235,180,31,94,166,9,231,109,228,156,97,199,99,230,88,85,79,40,128,
174,94,77,170,99,250,87,59,148,164,21,87,233,98,161,230,88,5,105,131,
68,229,105,114,52,26,117,203,211,210,81,230,194,72,51,198,42,72,235,19,
131,86,158,150,64,51,210,180,10,210,246,122,3,76,220,103,121,218,215,94,
97,40,129,167,174,235,78,48,232,93,221,107,63,221,77,60,225,63,124,55,
210,140,177,91,127,66,19,227,94,99,127,123,66,245,10,75,238,181,170,222,
107,42,60,194,166,31,133,95,112,225,103,94,231,49,7,97,70,17,29,251,
83,96,234,31,15,67,15,191,125,63,187,146,39,225,47,72,159,25,99,255,
235,189,38,141,175,65,190,154,4,154,172,254,189,118,168,148,234,240,177,195,
199,67,190,42,108,155,105,67,149,27,18,157,40,237,51,209,182,98,230,216,
13,211,106,24,211,63,8,128,128,42,48,199,3,81,71,76,22,218,71,67,
44,163,21,63,38,203,204,247,159,111,220,23,98,9,54,218,120,36,216,90,
99,29,150,169,53,120,103,127,0,18,43,37,84,171,134,46,164,0,0,0,
0,73,69,78,68,174,66,96,130
};

const char* LiveMode::replaceButtonNormal_png = (const char*) resource_LiveMode_replaceButtonNormal_png;
const int LiveMode::replaceButtonNormal_pngSize = 809;

// JUCER_RESOURCE: replaceButtonOver_png, 814, "../../UI/ReplaceButtonOver.png"
static const unsigned char resource_LiveMode_replaceButtonOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,8,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,23,17,142,25,15,145,23,
16,145,24,16,144,24,16,144,23,16,144,24,16,144,24,16,144,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,50,42,137,103,96,
123,214,206,95,158,150,110,76,68,130,105,97,123,132,124,116,219,212,94,51,
43,137,187,179,102,131,123,116,220,212,93,34,26,141,213,205,95,74,66,131,
146,139,112,160,152,109,159,151,109,186,178,102,227,218,91,224,216,92,77,69,
130,29,22,142,91,84,127,233,225,90,231,223,90,37,29,141,118,110,119,237,
229,89,64,56,133,30,22,142,185,177,103,64,57,134,74,67,131,148,141,112,
108,100,122,212,204,96,139,131,114,104,96,123,227,219,91,225,217,92,45,36,
138,85,77,128,31,22,142,239,231,89,142,133,114,165,158,108,166,158,107,33,
25,142,169,161,106,109,101,123,41,33,140,78,70,130,236,228,89,209,201,96,
91,83,126,57,49,135,173,165,106,126,117,117,192,185,101,118,111,120,218,209,
94,58,49,135,206,199,97,217,209,94,226,218,92,28,21,143,210,202,96,190,
181,101,179,171,104,21,185,226,91,0,0,0,16,116,82,78,83,0,189,191,
242,77,134,79,243,190,78,244,253,61,136,241,122,44,89,34,189,0,0,1,
197,73,68,65,84,120,94,205,150,229,110,228,48,20,70,61,51,237,150,22,
190,235,48,13,51,20,25,22,153,25,222,255,77,246,102,226,168,177,86,145,
42,109,179,245,249,227,216,214,39,29,93,93,59,22,66,220,169,111,194,48,
54,215,55,4,115,15,70,178,202,53,195,248,112,64,134,49,232,140,177,34,
234,56,36,3,233,96,93,172,97,64,6,114,142,134,0,200,72,128,235,170,
61,202,49,78,173,133,156,190,137,106,205,48,12,155,120,114,252,154,74,8,
142,153,111,183,161,118,202,227,41,128,22,149,48,2,35,111,87,109,186,151,
17,16,125,220,83,176,240,167,87,15,149,90,75,45,18,19,168,239,105,33,
86,157,90,222,121,61,34,9,133,79,140,84,106,62,50,136,233,129,209,99,
55,174,214,118,28,167,141,75,111,232,60,198,133,231,121,251,56,114,2,9,
52,249,251,0,111,157,55,87,106,239,189,148,38,156,231,129,115,132,125,143,
209,99,85,157,80,0,35,85,154,190,146,233,169,26,106,189,150,206,250,121,
65,245,88,5,106,19,223,94,170,201,56,142,71,229,106,253,56,101,174,171,
229,177,74,212,84,155,64,81,174,230,67,161,169,41,42,80,59,232,78,208,
182,190,46,213,190,116,51,18,9,60,179,44,171,141,73,247,103,174,246,203,
218,193,11,222,124,169,169,105,177,27,63,161,126,161,215,20,127,159,80,85,
194,146,94,171,234,94,179,163,75,236,184,65,244,20,115,55,229,247,82,230,
34,74,177,137,22,238,46,176,235,46,146,200,195,59,222,230,153,60,139,62,
64,186,140,22,251,95,247,154,212,254,6,192,168,216,107,213,223,107,219,182,
109,15,121,28,242,184,205,179,140,153,174,150,100,171,9,209,153,173,248,76,
52,75,71,61,118,77,181,198,191,61,37,67,32,172,230,41,121,95,212,209,
33,3,57,65,77,108,96,220,249,78,134,113,126,242,99,235,174,16,171,48,
145,173,7,130,89,169,173,193,48,26,53,174,217,31,35,165,35,239,173,5,
142,2,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::replaceButtonOver_png = (const char*) resource_LiveMode_replaceButtonOver_png;
const int LiveMode::replaceButtonOver_pngSize = 814;

// JUCER_RESOURCE: replaceButtonDown_png, 757, "../../UI/ReplaceButtonDown.png"
static const unsigned char resource_LiveMode_replaceButtonDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,237,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,25,15,145,23,17,142,23,
16,145,24,16,144,24,16,144,24,16,144,24,16,144,25,17,142,23,16,144,
24,17,144,24,16,144,23,17,144,80,144,208,24,16,144,31,32,151,45,65,
168,67,115,193,30,28,150,60,97,184,73,128,201,67,113,192,59,96,184,52,
80,176,66,112,193,73,128,200,38,48,159,31,32,152,29,28,150,77,138,205,
28,26,148,45,64,168,25,18,144,45,64,167,63,104,188,52,81,176,70,120,
196,67,114,193,38,48,160,58,94,183,38,49,160,76,137,204,74,132,202,59,
96,185,28,23,148,26,20,146,26,21,147,55,88,180,64,108,190,31,33,152,
79,140,206,71,124,198,69,120,197,43,60,166,53,84,178,24,17,144,42,56,
163,42,58,166,33,36,154,72,124,198,66,112,192,40,52,162,44,60,166,30,
30,151,78,139,205,56,88,180,58,94,182,76,134,203,37,44,158,62,104,189,
29,29,151,49,75,173,32,34,153,78,139,206,37,46,159,25,18,145,235,194,
46,142,0,0,0,16,116,82,78,83,0,191,189,242,134,77,79,243,253,244,
190,61,78,136,241,122,219,68,155,232,0,0,1,167,73,68,65,84,120,94,
205,214,103,111,219,48,16,128,97,122,36,142,93,167,189,163,246,150,247,158,
153,123,116,239,255,255,115,122,150,104,39,4,34,32,64,67,132,207,23,90,
16,14,120,65,144,130,25,99,251,165,58,106,166,222,104,50,114,136,90,170,
210,158,161,166,246,88,9,53,213,96,53,212,84,133,161,182,94,154,118,185,
165,93,90,12,91,35,29,211,210,48,12,83,120,56,254,139,5,172,99,242,
241,45,210,230,180,206,105,141,177,64,0,196,121,219,180,229,36,103,33,126,
155,8,20,252,249,238,183,72,139,39,57,36,150,248,189,124,28,83,152,22,
67,174,141,232,128,224,35,113,68,154,15,57,36,109,32,242,216,171,167,153,
134,97,152,112,228,181,140,159,48,243,60,111,0,99,195,162,152,148,126,15,
225,187,241,235,49,237,202,219,72,193,184,182,140,49,12,60,34,143,169,186,
161,180,4,98,107,70,34,166,189,219,67,7,133,252,105,180,221,80,121,76,
65,90,207,231,89,154,211,239,247,131,226,180,81,127,99,42,165,73,99,10,
210,218,72,64,40,78,243,65,144,210,4,5,105,195,110,15,76,251,38,75,
59,237,230,18,138,249,100,219,182,9,189,238,238,172,253,177,207,224,11,189,
252,42,165,73,99,175,126,67,125,233,172,145,231,110,168,216,194,130,179,166,
234,187,198,163,35,56,115,173,232,28,166,238,198,125,22,51,139,54,56,226,
218,61,1,56,113,215,73,228,193,45,189,166,39,103,17,93,128,227,18,121,
76,253,119,77,190,147,1,100,130,167,103,77,253,119,173,195,57,111,209,218,
162,181,67,79,185,149,156,150,240,76,130,184,224,194,15,196,21,207,72,99,
47,194,42,248,95,66,128,16,149,120,175,239,31,240,50,107,162,158,14,222,
49,86,213,179,236,3,35,123,229,26,106,166,82,166,61,251,7,137,161,34,
71,135,139,249,105,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::replaceButtonDown_png = (const char*) resource_LiveMode_replaceButtonDown_png;
const int LiveMode::replaceButtonDown_pngSize = 757;

// JUCER_RESOURCE: removeButtonNormal_png, 884, "../../UI/RemoveButtonNormal.png"
static const unsigned char resource_LiveMode_removeButtonNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,74,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,25,15,145,23,16,145,24,
16,144,25,17,142,24,16,144,24,16,144,24,16,144,23,16,144,23,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,59,95,184,45,64,
168,73,128,201,59,96,185,77,136,204,37,47,160,66,112,193,52,79,176,44,
63,168,30,30,152,31,32,152,44,61,166,77,135,204,49,72,172,55,89,180,
28,23,148,42,56,163,67,115,193,70,120,196,26,21,146,32,34,153,25,20,
145,74,132,202,77,138,205,41,55,164,72,126,199,34,41,156,68,117,194,78,
141,207,56,90,181,54,84,178,76,134,203,80,143,208,57,91,182,37,45,159,
69,118,195,77,138,204,60,99,186,65,111,191,63,104,188,71,123,197,79,142,
207,75,133,203,56,88,180,53,81,177,70,122,197,35,40,155,48,71,171,28,
25,149,57,92,181,76,135,203,74,129,201,25,17,145,38,49,160,29,27,150,
74,130,201,37,46,159,66,111,192,73,127,200,67,114,193,46,68,170,60,100,
185,71,124,198,77,137,205,44,60,167,29,29,151,36,43,158,62,102,186,29,
28,150,33,36,154,52,80,176,51,77,175,50,76,174,45,65,168,35,42,157,
63,107,189,48,70,171,53,83,177,26,20,146,74,130,200,78,140,206,33,37,
154,68,117,195,64,109,191,39,52,161,65,108,190,26,19,145,63,106,188,25,
19,146,78,139,205,52,81,176,39,52,162,49,242,226,166,0,0,0,16,116,
82,78,83,0,242,189,191,134,79,190,61,243,244,253,78,77,136,241,122,240,
118,186,241,0,0,1,201,73,68,65,84,120,94,205,150,69,147,220,48,20,
132,53,51,155,205,98,210,45,243,48,207,50,51,7,153,153,153,225,255,95,
35,251,249,224,218,83,230,224,148,190,139,170,235,93,62,119,201,175,164,148,
58,83,26,135,101,140,143,78,42,195,52,172,100,196,116,134,193,178,79,203,
240,155,3,76,169,18,150,105,33,77,140,170,49,248,180,144,203,40,40,128,
86,2,12,161,182,150,98,159,218,9,82,26,54,170,93,173,86,171,215,241,
234,246,3,251,212,90,36,119,1,28,90,173,182,121,43,225,152,156,55,199,
44,185,47,137,60,150,201,38,121,195,28,171,36,239,164,73,216,207,89,205,
164,132,54,217,0,208,37,125,73,100,91,38,39,228,33,128,93,146,173,52,
9,126,46,106,239,181,214,23,240,201,249,178,163,43,168,57,206,28,22,244,
98,172,246,91,235,117,32,78,139,122,1,115,142,83,67,69,239,100,213,174,
232,135,120,236,56,206,69,172,111,231,250,135,182,229,235,187,113,106,32,67,
35,219,97,86,77,202,150,238,243,82,123,246,252,155,168,189,140,162,187,195,
169,253,137,162,232,105,142,106,217,251,132,161,212,132,156,212,122,222,17,42,
229,109,81,187,228,37,124,142,101,142,188,158,153,157,86,187,239,125,197,181,
114,185,252,189,231,253,136,213,106,94,194,189,124,150,71,55,123,215,4,145,
105,165,179,172,154,204,164,167,236,58,204,71,237,87,248,14,143,130,39,123,
97,31,27,129,225,69,170,198,78,71,212,230,195,155,120,29,4,27,232,135,
123,100,156,128,55,29,114,53,124,139,126,16,51,251,223,247,26,69,45,187,
215,200,76,191,121,238,181,25,215,253,64,242,163,235,186,91,113,74,56,32,
235,230,88,162,97,201,228,58,121,32,147,25,26,36,201,91,101,203,21,214,
254,89,173,96,235,83,242,156,42,161,73,11,89,65,81,77,98,208,172,91,
215,217,202,207,137,179,74,141,192,70,38,206,43,195,84,113,12,150,81,40,
154,206,254,2,190,101,48,206,56,115,31,185,0,0,0,0,73,69,78,68,
174,66,96,130
};

const char* LiveMode::removeButtonNormal_png = (const char*) resource_LiveMode_removeButtonNormal_png;
const int LiveMode::removeButtonNormal_pngSize = 884;

// JUCER_RESOURCE: removeButtonOver_png, 893, "../../UI/RemoveButtonOver.png"
static const unsigned char resource_LiveMode_removeButtonOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,83,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,145,24,
16,144,24,16,144,25,17,142,24,16,144,25,15,145,23,16,144,23,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,158,150,110,105,97,
123,214,206,95,160,152,109,227,218,91,187,179,102,76,68,130,131,123,116,32,
24,141,101,92,124,51,43,137,190,182,101,48,40,138,226,218,92,118,110,119,
91,83,126,146,139,112,37,29,141,103,96,123,200,191,98,239,231,89,29,22,
142,194,186,99,184,176,102,235,227,89,148,141,112,236,228,89,90,82,127,150,
143,111,229,221,91,65,58,133,139,131,114,163,156,108,74,66,131,222,214,93,
196,188,99,64,56,133,204,196,97,55,47,136,230,222,91,134,126,116,173,164,
105,146,137,112,203,195,98,218,211,93,84,77,128,205,198,97,43,35,140,70,
62,133,132,124,116,31,23,142,217,209,94,210,202,96,225,217,92,74,67,131,
223,215,92,228,220,91,164,157,107,231,223,90,28,21,143,136,128,115,215,207,
95,106,98,122,212,204,96,185,177,103,46,39,138,26,18,144,169,161,106,39,
31,140,195,187,100,58,49,135,128,120,117,180,171,103,125,117,118,175,167,104,
67,59,133,176,169,104,224,216,92,116,107,120,54,46,136,100,91,125,117,108,
120,216,208,94,233,225,90,181,173,103,83,76,128,79,71,129,29,21,143,133,
125,116,60,51,134,111,104,122,190,181,101,44,36,139,209,201,96,151,143,111,
58,177,21,242,0,0,0,16,116,82,78,83,0,191,189,242,190,79,244,243,
61,253,134,78,77,136,241,122,76,203,160,200,0,0,1,201,73,68,65,84,
120,94,205,150,69,143,28,49,20,132,61,51,155,221,44,36,169,106,30,100,
88,102,198,48,51,51,51,255,127,140,61,175,15,86,78,153,67,71,254,46,
86,233,93,190,46,217,79,173,148,58,150,27,133,99,140,142,76,42,205,9,
56,201,132,238,12,253,185,136,142,17,181,250,152,82,57,204,209,65,90,24,
81,99,136,232,32,151,80,80,0,157,4,24,66,173,151,226,158,218,38,82,
26,46,170,221,175,84,42,103,112,251,206,85,247,212,218,36,247,0,236,59,
173,182,113,119,192,1,249,75,31,59,228,188,36,242,64,38,27,228,5,125,
92,33,249,35,77,194,124,198,106,38,25,154,100,3,64,151,140,36,145,77,
153,108,146,251,0,246,72,182,211,36,68,153,168,157,247,60,239,29,190,249,
31,103,188,26,202,190,191,128,101,111,218,168,125,245,188,69,192,164,105,111,
25,11,190,95,70,205,155,177,213,110,121,111,113,214,247,253,135,88,92,205,
244,133,54,229,235,187,38,53,96,209,176,59,180,213,164,108,233,62,43,181,
199,231,158,138,218,179,98,241,251,112,106,71,197,98,241,103,134,106,246,125,
194,80,106,66,70,106,165,112,23,181,206,170,168,253,14,7,60,50,50,187,
97,73,207,254,86,59,29,126,194,231,78,167,243,165,20,62,55,106,229,112,
192,181,108,94,104,215,190,107,130,200,180,211,153,173,38,51,233,201,94,135,
217,168,93,143,111,226,94,242,96,43,222,198,90,162,121,146,170,177,90,21,
181,139,241,101,188,72,146,53,108,199,91,164,73,192,203,42,249,42,126,141,
55,137,97,231,191,239,53,138,154,189,215,72,171,223,44,247,218,97,16,188,
39,249,33,8,130,37,147,6,172,147,117,125,204,82,51,171,115,157,92,151,
201,33,53,146,122,52,44,5,66,239,159,213,10,174,254,74,158,84,57,180,
232,32,43,200,171,73,244,91,117,231,58,91,185,49,126,92,169,9,184,200,
248,41,165,153,202,143,193,49,10,121,221,217,31,47,45,49,119,111,220,61,
132,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* LiveMode::removeButtonOver_png = (const char*) resource_LiveMode_removeButtonOver_png;
const int LiveMode::removeButtonOver_pngSize = 893;

// JUCER_RESOURCE: removeButtonDown_png, 842, "../../UI/RemoveButtonDown.png"
static const unsigned char resource_LiveMode_removeButtonDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,59,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,24,16,144,23,
16,144,23,17,142,24,16,144,23,16,145,24,16,144,25,15,145,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,45,65,168,59,96,
184,31,32,151,45,64,167,38,48,159,67,113,192,52,81,176,60,97,184,55,
88,180,73,128,200,78,139,206,51,79,175,37,45,159,72,126,199,62,104,189,
76,137,204,60,99,186,34,40,156,24,17,144,74,130,200,35,42,157,67,115,
193,41,56,164,32,34,153,30,28,150,34,38,155,39,49,161,27,22,147,44,
61,166,63,105,188,70,119,196,27,22,148,36,43,158,27,25,148,26,19,145,
25,18,145,48,72,172,47,69,170,33,37,155,29,27,149,79,143,207,37,46,
159,78,140,206,60,100,185,54,84,178,69,120,197,27,24,148,47,68,171,44,
60,167,75,132,202,59,95,184,51,77,175,75,131,201,30,30,151,52,79,176,
26,21,147,30,31,151,40,51,161,52,80,176,68,117,194,39,52,162,65,108,
190,36,43,157,75,133,202,56,89,181,31,33,152,28,26,149,53,83,177,27,
23,147,58,92,182,69,118,195,41,53,163,28,26,148,56,90,181,71,123,198,
76,135,203,30,30,152,26,20,146,33,36,154,65,108,191,66,111,192,78,141,
207,38,49,160,67,114,193,41,54,164,42,58,166,71,124,198,192,135,134,89,
0,0,0,16,116,82,78,83,0,191,242,189,244,190,78,77,243,79,253,134,
61,136,241,122,65,9,181,155,0,0,1,174,73,68,65,84,120,94,205,150,
197,114,36,49,16,68,229,25,179,23,178,212,56,200,96,102,102,230,101,102,
134,255,255,130,45,77,245,161,237,147,231,160,13,189,75,70,70,93,94,87,
72,138,86,74,141,244,245,195,49,250,7,6,21,115,31,78,50,198,59,131,
163,12,169,62,56,202,128,26,134,163,100,20,156,165,7,181,102,130,123,106,
123,148,144,119,81,109,179,80,40,60,163,227,23,175,221,83,171,113,140,19,
209,170,211,106,237,159,93,166,128,9,142,25,96,69,26,48,37,147,54,112,
198,241,18,192,86,210,132,21,219,106,220,12,85,32,207,209,0,246,165,1,
85,153,236,1,171,28,227,0,106,73,19,246,173,168,109,107,173,159,211,71,
239,106,90,183,168,238,121,115,52,175,23,141,218,185,214,107,28,220,22,245,
60,205,121,94,157,90,122,58,173,118,169,119,232,145,231,121,159,104,109,214,
234,13,173,202,215,55,76,203,83,138,124,122,135,105,53,89,182,236,222,150,
218,223,235,199,162,182,27,199,111,122,83,123,18,199,241,145,69,181,244,121,
162,158,212,4,75,106,197,160,68,173,220,172,168,29,4,93,158,26,153,82,
80,228,217,109,181,175,193,55,250,158,203,229,126,20,131,223,70,173,30,116,
57,180,115,67,27,233,179,38,136,76,141,103,183,213,100,198,212,110,62,135,
118,212,46,194,19,58,141,254,172,135,21,234,68,204,171,68,13,229,178,168,
77,132,191,232,109,20,117,168,18,174,3,166,17,189,43,3,239,195,15,84,
137,12,51,255,253,93,131,168,165,223,53,32,181,95,155,239,218,164,239,127,
230,248,226,251,254,130,105,93,54,128,37,142,101,48,203,220,151,128,13,153,
76,130,145,214,132,97,193,23,154,119,86,203,192,81,30,184,251,3,158,85,
131,112,147,209,123,74,141,185,105,246,80,49,67,217,97,56,70,38,203,59,
251,7,160,199,38,63,43,194,50,183,0,0,0,0,73,69,78,68,174,66,
96,130
};

const char* LiveMode::removeButtonDown_png = (const char*) resource_LiveMode_removeButtonDown_png;
const int LiveMode::removeButtonDown_pngSize = 842;


//[EndFile] You can add extra defines here...
//[/EndFile]

