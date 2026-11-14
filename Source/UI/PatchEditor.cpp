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
#include "NoteTableView.h"
#include "PulseTableView.h"
#include "SIDestepLookAndFeel.h"
#include "WavetableView.h"
//[/Headers]

#include "PatchEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PatchEditor::PatchEditor (
        const std::shared_ptr < EventDispatcher >& dispatcher
        )
    :
    dispatcher (
                dispatcher )
{
    //[Constructor_pre] You can add your own custom stuff here..
    look = std::make_shared < SIDestepLookAndFeel > ();
    setLookAndFeel (
                    look . get () );
    //core = nullptr;
    //[/Constructor_pre]

    attackSlider = std::make_unique < Slider > (
                                                "new slider" );
    addAndMakeVisible (
                       attackSlider . get () );
    attackSlider -> setRange (
                              0
                            , 15
                            , 1 );
    attackSlider -> setSliderStyle (
                                    Slider::RotaryHorizontalVerticalDrag );
    attackSlider -> setTextBoxStyle (
                                     Slider::NoTextBox
                                   , true
                                   , 80
                                   , 20 );
    attackSlider -> addListener (
                                 this );
    attackSlider -> setBounds (
                               64
                             , 121
                             , 48
                             , 48 );
    decaySlider . reset (
                         new Slider (
                                     "new slider" ) );
    addAndMakeVisible (
                       decaySlider . get () );
    decaySlider -> setRange (
                             0
                           , 15
                           , 1 );
    decaySlider -> setSliderStyle (
                                   Slider::RotaryHorizontalVerticalDrag );
    decaySlider -> setTextBoxStyle (
                                    Slider::NoTextBox
                                  , true
                                  , 80
                                  , 20 );
    decaySlider -> addListener (
                                this );
    decaySlider -> setBounds (
                              144
                            , 121
                            , 48
                            , 48 );
    sustainSlider . reset (
                           new Slider (
                                       "new slider" ) );
    addAndMakeVisible (
                       sustainSlider . get () );
    sustainSlider -> setRange (
                               0
                             , 15
                             , 1 );
    sustainSlider -> setSliderStyle (
                                     Slider::RotaryHorizontalVerticalDrag );
    sustainSlider -> setTextBoxStyle (
                                      Slider::NoTextBox
                                    , true
                                    , 80
                                    , 20 );
    sustainSlider -> addListener (
                                  this );
    sustainSlider -> setBounds (
                                224
                              , 121
                              , 48
                              , 48 );
    releaseSlider . reset (
                           new Slider (
                                       "new slider" ) );
    addAndMakeVisible (
                       releaseSlider . get () );
    releaseSlider -> setRange (
                               0
                             , 15
                             , 1 );
    releaseSlider -> setSliderStyle (
                                     Slider::RotaryHorizontalVerticalDrag );
    releaseSlider -> setTextBoxStyle (
                                      Slider::NoTextBox
                                    , true
                                    , 80
                                    , 20 );
    releaseSlider -> addListener (
                                  this );
    releaseSlider -> setBounds (
                                304
                              , 121
                              , 48
                              , 48 );
    pitchBendRangeSlider . reset (
                                  new Slider (
                                              "new slider" ) );
    addAndMakeVisible (
                       pitchBendRangeSlider . get () );
    pitchBendRangeSlider -> setRange (
                                      0
                                    , 8192
                                    , 1 );
    pitchBendRangeSlider -> setSliderStyle (
                                            Slider::RotaryHorizontalVerticalDrag );
    pitchBendRangeSlider -> setTextBoxStyle (
                                             Slider::NoTextBox
                                           , true
                                           , 80
                                           , 20 );
    pitchBendRangeSlider -> addListener (
                                         this );
    pitchBendRangeSlider -> setBounds (
                                       64
                                     , 209
                                     , 48
                                     , 48 );
    vibratoRangeSlider . reset (
                                new Slider (
                                            "new slider" ) );
    addAndMakeVisible (
                       vibratoRangeSlider . get () );
    vibratoRangeSlider -> setRange (
                                    0
                                  , 8192
                                  , 1 );
    vibratoRangeSlider -> setSliderStyle (
                                          Slider::RotaryHorizontalVerticalDrag );
    vibratoRangeSlider -> setTextBoxStyle (
                                           Slider::NoTextBox
                                         , true
                                         , 80
                                         , 20 );
    vibratoRangeSlider -> addListener (
                                       this );
    vibratoRangeSlider -> setBounds (
                                     224
                                   , 209
                                   , 48
                                   , 48 );
    vibratoSpeedSlider . reset (
                                new Slider (
                                            "new slider" ) );
    addAndMakeVisible (
                       vibratoSpeedSlider . get () );
    vibratoSpeedSlider -> setRange (
                                    0
                                  , 50
                                  , 1 );
    vibratoSpeedSlider -> setSliderStyle (
                                          Slider::RotaryHorizontalVerticalDrag );
    vibratoSpeedSlider -> setTextBoxStyle (
                                           Slider::NoTextBox
                                         , true
                                         , 80
                                         , 20 );
    vibratoSpeedSlider -> addListener (
                                       this );
    vibratoSpeedSlider -> setBounds (
                                     304
                                   , 209
                                   , 48
                                   , 48 );
    pulseWidthRangeSlider . reset (
                                   new Slider (
                                               "new slider" ) );
    addAndMakeVisible (
                       pulseWidthRangeSlider . get () );
    pulseWidthRangeSlider -> setRange (
                                       0
                                     , 4095
                                     , 1 );
    pulseWidthRangeSlider -> setSliderStyle (
                                             Slider::RotaryHorizontalVerticalDrag );
    pulseWidthRangeSlider -> setTextBoxStyle (
                                              Slider::NoTextBox
                                            , true
                                            , 80
                                            , 20 );
    pulseWidthRangeSlider -> addListener (
                                          this );
    pulseWidthRangeSlider -> setBounds (
                                        64
                                      , 297
                                      , 48
                                      , 48 );
    vibratoDelaySlider . reset (
                                new Slider (
                                            "new slider" ) );
    addAndMakeVisible (
                       vibratoDelaySlider . get () );
    vibratoDelaySlider -> setRange (
                                    0
                                  , 15
                                  , 1 );
    vibratoDelaySlider -> setSliderStyle (
                                          Slider::RotaryHorizontalVerticalDrag );
    vibratoDelaySlider -> setTextBoxStyle (
                                           Slider::NoTextBox
                                         , true
                                         , 80
                                         , 20 );
    vibratoDelaySlider -> addListener (
                                       this );
    vibratoDelaySlider -> setBounds (
                                     224
                                   , 367
                                   , 48
                                   , 48 );
    attackLabel . reset (
                         new Label (
                                    "new label"
                                  , TRANS (
                                           "0" ) ) );
    addAndMakeVisible (
                       attackLabel . get () );
    attackLabel -> setFont (
                            Font (
                                  "C64 Pro"
                                , 12.00f
                                , Font::plain ) . withTypefaceStyle (
                                                                     "Regular" ) );
    attackLabel -> setJustificationType (
                                         Justification::centred );
    attackLabel -> setEditable (
                                true
                              , true
                              , false );
    attackLabel -> setColour (
                              Label::textColourId
                            , Colour (
                                      0xff5090d0 ) );
    attackLabel -> setColour (
                              TextEditor::textColourId
                            , Colours::black );
    attackLabel -> setColour (
                              TextEditor::backgroundColourId
                            , Colour (
                                      0x00000000 ) );
    attackLabel -> addListener (
                                this );
    attackLabel -> setBounds (
                              64
                            , 97
                            , 48
                            , 18 );
    decayLabel . reset (
                        new Label (
                                   "new label"
                                 , TRANS (
                                          "0" ) ) );
    addAndMakeVisible (
                       decayLabel . get () );
    decayLabel -> setFont (
                           Font (
                                 "C64 Pro"
                               , 12.00f
                               , Font::plain ) . withTypefaceStyle (
                                                                    "Regular" ) );
    decayLabel -> setJustificationType (
                                        Justification::centred );
    decayLabel -> setEditable (
                               true
                             , true
                             , false );
    decayLabel -> setColour (
                             Label::textColourId
                           , Colour (
                                     0xff5090d0 ) );
    decayLabel -> setColour (
                             TextEditor::textColourId
                           , Colours::black );
    decayLabel -> setColour (
                             TextEditor::backgroundColourId
                           , Colour (
                                     0x00000000 ) );
    decayLabel -> addListener (
                               this );
    decayLabel -> setBounds (
                             144
                           , 97
                           , 48
                           , 18 );
    sustainLabel . reset (
                          new Label (
                                     "new label"
                                   , TRANS (
                                            "0" ) ) );
    addAndMakeVisible (
                       sustainLabel . get () );
    sustainLabel -> setFont (
                             Font (
                                   "C64 Pro"
                                 , 12.00f
                                 , Font::plain ) . withTypefaceStyle (
                                                                      "Regular" ) );
    sustainLabel -> setJustificationType (
                                          Justification::centred );
    sustainLabel -> setEditable (
                                 true
                               , true
                               , false );
    sustainLabel -> setColour (
                               Label::textColourId
                             , Colour (
                                       0xff5090d0 ) );
    sustainLabel -> setColour (
                               TextEditor::textColourId
                             , Colours::black );
    sustainLabel -> setColour (
                               TextEditor::backgroundColourId
                             , Colour (
                                       0x00000000 ) );
    sustainLabel -> addListener (
                                 this );
    sustainLabel -> setBounds (
                               224
                             , 97
                             , 48
                             , 18 );
    releaseLabel . reset (
                          new Label (
                                     "new label"
                                   , TRANS (
                                            "0" ) ) );
    addAndMakeVisible (
                       releaseLabel . get () );
    releaseLabel -> setFont (
                             Font (
                                   "C64 Pro"
                                 , 12.00f
                                 , Font::plain ) . withTypefaceStyle (
                                                                      "Regular" ) );
    releaseLabel -> setJustificationType (
                                          Justification::centred );
    releaseLabel -> setEditable (
                                 true
                               , true
                               , false );
    releaseLabel -> setColour (
                               Label::textColourId
                             , Colour (
                                       0xff5090d0 ) );
    releaseLabel -> setColour (
                               TextEditor::textColourId
                             , Colours::black );
    releaseLabel -> setColour (
                               TextEditor::backgroundColourId
                             , Colour (
                                       0x00000000 ) );
    releaseLabel -> addListener (
                                 this );
    releaseLabel -> setBounds (
                               304
                             , 97
                             , 48
                             , 18 );
    pitchBendRangeLabel . reset (
                                 new Label (
                                            "new label"
                                          , TRANS (
                                                   "0" ) ) );
    addAndMakeVisible (
                       pitchBendRangeLabel . get () );
    pitchBendRangeLabel -> setFont (
                                    Font (
                                          "C64 Pro"
                                        , 12.00f
                                        , Font::plain ) . withTypefaceStyle (
                                                                             "Regular" ) );
    pitchBendRangeLabel -> setJustificationType (
                                                 Justification::centred );
    pitchBendRangeLabel -> setEditable (
                                        true
                                      , true
                                      , false );
    pitchBendRangeLabel -> setColour (
                                      Label::textColourId
                                    , Colour (
                                              0xff5090d0 ) );
    pitchBendRangeLabel -> setColour (
                                      TextEditor::textColourId
                                    , Colours::black );
    pitchBendRangeLabel -> setColour (
                                      TextEditor::backgroundColourId
                                    , Colour (
                                              0x00000000 ) );
    pitchBendRangeLabel -> addListener (
                                        this );
    pitchBendRangeLabel -> setBounds (
                                      64
                                    , 185
                                    , 48
                                    , 18 );
    vibratoRangeLabel . reset (
                               new Label (
                                          "new label"
                                        , TRANS (
                                                 "0" ) ) );
    addAndMakeVisible (
                       vibratoRangeLabel . get () );
    vibratoRangeLabel -> setFont (
                                  Font (
                                        "C64 Pro"
                                      , 12.00f
                                      , Font::plain ) . withTypefaceStyle (
                                                                           "Regular" ) );
    vibratoRangeLabel -> setJustificationType (
                                               Justification::centred );
    vibratoRangeLabel -> setEditable (
                                      true
                                    , true
                                    , false );
    vibratoRangeLabel -> setColour (
                                    Label::textColourId
                                  , Colour (
                                            0xff5090d0 ) );
    vibratoRangeLabel -> setColour (
                                    TextEditor::textColourId
                                  , Colours::black );
    vibratoRangeLabel -> setColour (
                                    TextEditor::backgroundColourId
                                  , Colour (
                                            0x00000000 ) );
    vibratoRangeLabel -> addListener (
                                      this );
    vibratoRangeLabel -> setBounds (
                                    224
                                  , 185
                                  , 48
                                  , 18 );
    vibratoSpeedLabel . reset (
                               new Label (
                                          "new label"
                                        , TRANS (
                                                 "0" ) ) );
    addAndMakeVisible (
                       vibratoSpeedLabel . get () );
    vibratoSpeedLabel -> setFont (
                                  Font (
                                        "C64 Pro"
                                      , 12.00f
                                      , Font::plain ) . withTypefaceStyle (
                                                                           "Regular" ) );
    vibratoSpeedLabel -> setJustificationType (
                                               Justification::centred );
    vibratoSpeedLabel -> setEditable (
                                      true
                                    , true
                                    , false );
    vibratoSpeedLabel -> setColour (
                                    Label::textColourId
                                  , Colour (
                                            0xff5090d0 ) );
    vibratoSpeedLabel -> setColour (
                                    TextEditor::textColourId
                                  , Colours::black );
    vibratoSpeedLabel -> setColour (
                                    TextEditor::backgroundColourId
                                  , Colour (
                                            0x00000000 ) );
    vibratoSpeedLabel -> addListener (
                                      this );
    vibratoSpeedLabel -> setBounds (
                                    304
                                  , 185
                                  , 48
                                  , 18 );
    pulseWidthRangeLabel . reset (
                                  new Label (
                                             "new label"
                                           , TRANS (
                                                    "0" ) ) );
    addAndMakeVisible (
                       pulseWidthRangeLabel . get () );
    pulseWidthRangeLabel -> setFont (
                                     Font (
                                           "C64 Pro"
                                         , 12.00f
                                         , Font::plain ) . withTypefaceStyle (
                                                                              "Regular" ) );
    pulseWidthRangeLabel -> setJustificationType (
                                                  Justification::centred );
    pulseWidthRangeLabel -> setEditable (
                                         true
                                       , true
                                       , false );
    pulseWidthRangeLabel -> setColour (
                                       Label::textColourId
                                     , Colour (
                                               0xff5090d0 ) );
    pulseWidthRangeLabel -> setColour (
                                       TextEditor::textColourId
                                     , Colours::black );
    pulseWidthRangeLabel -> setColour (
                                       TextEditor::backgroundColourId
                                     , Colour (
                                               0x00000000 ) );
    pulseWidthRangeLabel -> addListener (
                                         this );
    pulseWidthRangeLabel -> setBounds (
                                       64
                                     , 273
                                     , 48
                                     , 18 );
    vibratoDelayLabel . reset (
                               new Label (
                                          "new label"
                                        , TRANS (
                                                 "0" ) ) );
    addAndMakeVisible (
                       vibratoDelayLabel . get () );
    vibratoDelayLabel -> setFont (
                                  Font (
                                        "C64 Pro"
                                      , 12.00f
                                      , Font::plain ) . withTypefaceStyle (
                                                                           "Regular" ) );
    vibratoDelayLabel -> setJustificationType (
                                               Justification::centred );
    vibratoDelayLabel -> setEditable (
                                      true
                                    , true
                                    , false );
    vibratoDelayLabel -> setColour (
                                    Label::textColourId
                                  , Colour (
                                            0xff5090d0 ) );
    vibratoDelayLabel -> setColour (
                                    TextEditor::textColourId
                                  , Colours::black );
    vibratoDelayLabel -> setColour (
                                    TextEditor::backgroundColourId
                                  , Colour (
                                            0x00000000 ) );
    vibratoDelayLabel -> addListener (
                                      this );
    vibratoDelayLabel -> setBounds (
                                    224
                                  , 343
                                  , 48
                                  , 18 );
    patchName . reset (
                       new Label (
                                  "new label"
                                , TRANS (
                                         "Patch Name" ) ) );
    addAndMakeVisible (
                       patchName . get () );
    patchName -> setFont (
                          Font (
                                "C64 Pro"
                              , 12.00f
                              , Font::plain ) . withTypefaceStyle (
                                                                   "Regular" ) );
    patchName -> setJustificationType (
                                       Justification::centredLeft );
    patchName -> setEditable (
                              true
                            , true
                            , false );
    patchName -> setColour (
                            Label::textColourId
                          , Colour (
                                    0xff5090d0 ) );
    patchName -> setColour (
                            TextEditor::textColourId
                          , Colours::black );
    patchName -> setColour (
                            TextEditor::backgroundColourId
                          , Colour (
                                    0x00000000 ) );
    patchName -> addListener (
                              this );
    patchName -> setBounds (
                            24
                          , 71
                          , 324
                          , 16 );
    liveModeButton . reset (
                            new ImageButton (
                                             "new button" ) );
    addAndMakeVisible (
                       liveModeButton . get () );
    liveModeButton -> addListener (
                                   this );
    liveModeButton -> setImages (
                                 false
                               , true
                               , true
                               , ImageCache::getFromMemory (
                                                            liveModeButtonNormal_png
                                                          , liveModeButtonNormal_pngSize )
                               , 1.000f
                               , Colour (
                                         0x00000000 )
                               , ImageCache::getFromMemory (
                                                            liveModeButtonOver_png
                                                          , liveModeButtonOver_pngSize )
                               , 1.000f
                               , Colour (
                                         0x00000000 )
                               , ImageCache::getFromMemory (
                                                            liveModeButtonDown_png
                                                          , liveModeButtonDown_pngSize )
                               , 1.000f
                               , Colour (
                                         0x00000000 ) );
    liveModeButton -> setBounds (
                                 32
                               , 544
                               , 154
                               , 26 );
    menuButton . reset (
                        new ImageButton (
                                         "new button" ) );
    addAndMakeVisible (
                       menuButton . get () );
    menuButton -> addListener (
                               this );
    menuButton -> setImages (
                             false
                           , true
                           , true
                           , ImageCache::getFromMemory (
                                                        downArrowNormal_png
                                                      , downArrowNormal_pngSize )
                           , 1.000f
                           , Colour (
                                     0x00000000 )
                           , Image ()
                           , 1.000f
                           , Colour (
                                     0x00000000 )
                           , Image ()
                           , 1.000f
                           , Colour (
                                     0x00000000 ) );
    menuButton -> setBounds (
                             353
                           , 73
                           , 14
                           , 12 );
    commandTableViewport . reset (
                                  new Viewport (
                                                "new viewport" ) );
    addAndMakeVisible (
                       commandTableViewport . get () );
    commandTableViewport -> setScrollBarsShown (
                                                true
                                              , false );
    commandTableViewport -> setScrollBarThickness (
                                                   16 );
    commandTableViewport -> setBounds (
                                       400
                                     , 16
                                     , 608
                                     , 184 );
    wavetableText . reset (
                           new WavetableText (
                                              dispatcher ) );
    addAndMakeVisible (
                       wavetableText . get () );
    wavetableText -> setBounds (
                                416
                              , 8
                              , 110
                              , 17 );
    newRowButton . reset (
                          new ImageButton (
                                           "new button" ) );
    addAndMakeVisible (
                       newRowButton . get () );
    newRowButton -> addListener (
                                 this );
    newRowButton -> setImages (
                               false
                             , true
                             , true
                             , ImageCache::getFromMemory (
                                                          newRowNormal_png
                                                        , newRowNormal_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 )
                             , ImageCache::getFromMemory (
                                                          newRowOver_png
                                                        , newRowOver_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 )
                             , ImageCache::getFromMemory (
                                                          newRowDown_png
                                                        , newRowDown_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 ) );
    newRowButton -> setBounds (
                               448
                             , 192
                             , 154
                             , 26 );
    newCommandButton . reset (
                              new ImageButton (
                                               "new button" ) );
    addAndMakeVisible (
                       newCommandButton . get () );
    newCommandButton -> addListener (
                                     this );
    newCommandButton -> setImages (
                                   false
                                 , true
                                 , true
                                 , ImageCache::getFromMemory (
                                                              newCommandNormal_png
                                                            , newCommandNormal_pngSize )
                                 , 1.000f
                                 , Colour (
                                           0x00000000 )
                                 , ImageCache::getFromMemory (
                                                              newCommandOver_png
                                                            , newCommandOver_pngSize )
                                 , 1.000f
                                 , Colour (
                                           0x00000000 )
                                 , ImageCache::getFromMemory (
                                                              newCommandDown_png
                                                            , newCommandDown_pngSize )
                                 , 1.000f
                                 , Colour (
                                           0x00000000 ) );
    newCommandButton -> setBounds (
                                   624
                                 , 192
                                 , 154
                                 , 26 );
    deleteButton . reset (
                          new ImageButton (
                                           "new button" ) );
    addAndMakeVisible (
                       deleteButton . get () );
    deleteButton -> addListener (
                                 this );
    deleteButton -> setImages (
                               false
                             , true
                             , true
                             , ImageCache::getFromMemory (
                                                          deleteNormal_png
                                                        , deleteNormal_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 )
                             , ImageCache::getFromMemory (
                                                          deleteOver_png
                                                        , deleteOver_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 )
                             , ImageCache::getFromMemory (
                                                          deleteDown_png
                                                        , deleteDown_pngSize )
                             , 1.000f
                             , Colour (
                                       0x00000000 ) );
    deleteButton -> setBounds (
                               800
                             , 192
                             , 154
                             , 26 );
    waveformView . reset (
                          new WaveformView (
                                            dispatcher ) );
    addAndMakeVisible (
                       waveformView . get () );
    waveformView -> setBounds (
                               400
                             , 248
                             , 608
                             , 296 );
    vibratoDefaultAmountLabel . reset (
                                       new Label (
                                                  "new label"
                                                , TRANS (
                                                         "0%" ) ) );
    addAndMakeVisible (
                       vibratoDefaultAmountLabel . get () );
    vibratoDefaultAmountLabel -> setFont (
                                          Font (
                                                "C64 Pro"
                                              , 12.00f
                                              , Font::plain ) . withTypefaceStyle (
                                                                                   "Regular" ) );
    vibratoDefaultAmountLabel -> setJustificationType (
                                                       Justification::centred );
    vibratoDefaultAmountLabel -> setEditable (
                                              true
                                            , true
                                            , false );
    vibratoDefaultAmountLabel -> setColour (
                                            Label::textColourId
                                          , Colour (
                                                    0xff5090d0 ) );
    vibratoDefaultAmountLabel -> setColour (
                                            TextEditor::textColourId
                                          , Colours::black );
    vibratoDefaultAmountLabel -> setColour (
                                            TextEditor::backgroundColourId
                                          , Colour (
                                                    0x00000000 ) );
    vibratoDefaultAmountLabel -> addListener (
                                              this );
    vibratoDefaultAmountLabel -> setBounds (
                                            224
                                          , 264
                                          , 48
                                          , 18 );
    vibratoDefaultSpeedLabel . reset (
                                      new Label (
                                                 "new label"
                                               , TRANS (
                                                        "0%" ) ) );
    addAndMakeVisible (
                       vibratoDefaultSpeedLabel . get () );
    vibratoDefaultSpeedLabel -> setFont (
                                         Font (
                                               "C64 Pro"
                                             , 12.00f
                                             , Font::plain ) . withTypefaceStyle (
                                                                                  "Regular" ) );
    vibratoDefaultSpeedLabel -> setJustificationType (
                                                      Justification::centred );
    vibratoDefaultSpeedLabel -> setEditable (
                                             true
                                           , true
                                           , false );
    vibratoDefaultSpeedLabel -> setColour (
                                           Label::textColourId
                                         , Colour (
                                                   0xff5090d0 ) );
    vibratoDefaultSpeedLabel -> setColour (
                                           TextEditor::textColourId
                                         , Colours::black );
    vibratoDefaultSpeedLabel -> setColour (
                                           TextEditor::backgroundColourId
                                         , Colour (
                                                   0x00000000 ) );
    vibratoDefaultSpeedLabel -> addListener (
                                             this );
    vibratoDefaultSpeedLabel -> setBounds (
                                           304
                                         , 264
                                         , 48
                                         , 18 );
    pulseWidthCenterLabel . reset (
                                   new Label (
                                              "new label"
                                            , TRANS (
                                                     "0" ) ) );
    addAndMakeVisible (
                       pulseWidthCenterLabel . get () );
    pulseWidthCenterLabel -> setFont (
                                      Font (
                                            "C64 Pro"
                                          , 12.00f
                                          , Font::plain ) . withTypefaceStyle (
                                                                               "Regular" ) );
    pulseWidthCenterLabel -> setJustificationType (
                                                   Justification::centred );
    pulseWidthCenterLabel -> setEditable (
                                          true
                                        , true
                                        , false );
    pulseWidthCenterLabel -> setColour (
                                        Label::textColourId
                                      , Colour (
                                                0xff5090d0 ) );
    pulseWidthCenterLabel -> setColour (
                                        TextEditor::textColourId
                                      , Colours::black );
    pulseWidthCenterLabel -> setColour (
                                        TextEditor::backgroundColourId
                                      , Colour (
                                                0x00000000 ) );
    pulseWidthCenterLabel -> addListener (
                                          this );
    pulseWidthCenterLabel -> setBounds (
                                        64
                                      , 353
                                      , 48
                                      , 18 );
    pulseWidthDefaultLabel . reset (
                                    new Label (
                                               "new label"
                                             , TRANS (
                                                      "0%" ) ) );
    addAndMakeVisible (
                       pulseWidthDefaultLabel . get () );
    pulseWidthDefaultLabel -> setFont (
                                       Font (
                                             "C64 Pro"
                                           , 12.00f
                                           , Font::plain ) . withTypefaceStyle (
                                                                                "Regular" ) );
    pulseWidthDefaultLabel -> setJustificationType (
                                                    Justification::centred );
    pulseWidthDefaultLabel -> setEditable (
                                           true
                                         , true
                                         , false );
    pulseWidthDefaultLabel -> setColour (
                                         Label::textColourId
                                       , Colour (
                                                 0xff5090d0 ) );
    pulseWidthDefaultLabel -> setColour (
                                         TextEditor::textColourId
                                       , Colours::black );
    pulseWidthDefaultLabel -> setColour (
                                         TextEditor::backgroundColourId
                                       , Colour (
                                                 0x00000000 ) );
    pulseWidthDefaultLabel -> addListener (
                                           this );
    pulseWidthDefaultLabel -> setBounds (
                                         64
                                       , 433
                                       , 48
                                       , 18 );
    vibratoDefaultAmountSlider . reset (
                                        new Slider (
                                                    "new slider" ) );
    addAndMakeVisible (
                       vibratoDefaultAmountSlider . get () );
    vibratoDefaultAmountSlider -> setRange (
                                            0
                                          , 100
                                          , 1 );
    vibratoDefaultAmountSlider -> setSliderStyle (
                                                  Slider::RotaryHorizontalVerticalDrag );
    vibratoDefaultAmountSlider -> setTextBoxStyle (
                                                   Slider::NoTextBox
                                                 , true
                                                 , 80
                                                 , 20 );
    vibratoDefaultAmountSlider -> addListener (
                                               this );
    vibratoDefaultAmountSlider -> setBounds (
                                             224
                                           , 288
                                           , 48
                                           , 48 );
    vibratoDefaultSpeedSlider . reset (
                                       new Slider (
                                                   "new slider" ) );
    addAndMakeVisible (
                       vibratoDefaultSpeedSlider . get () );
    vibratoDefaultSpeedSlider -> setRange (
                                           0
                                         , 100
                                         , 1 );
    vibratoDefaultSpeedSlider -> setSliderStyle (
                                                 Slider::RotaryHorizontalVerticalDrag );
    vibratoDefaultSpeedSlider -> setTextBoxStyle (
                                                  Slider::NoTextBox
                                                , true
                                                , 80
                                                , 20 );
    vibratoDefaultSpeedSlider -> addListener (
                                              this );
    vibratoDefaultSpeedSlider -> setBounds (
                                            304
                                          , 288
                                          , 48
                                          , 48 );
    pulseWidthCenterSlider . reset (
                                    new Slider (
                                                "new slider" ) );
    addAndMakeVisible (
                       pulseWidthCenterSlider . get () );
    pulseWidthCenterSlider -> setRange (
                                        0
                                      , 4095
                                      , 1 );
    pulseWidthCenterSlider -> setSliderStyle (
                                              Slider::RotaryHorizontalVerticalDrag );
    pulseWidthCenterSlider -> setTextBoxStyle (
                                               Slider::NoTextBox
                                             , true
                                             , 80
                                             , 20 );
    pulseWidthCenterSlider -> addListener (
                                           this );
    pulseWidthCenterSlider -> setBounds (
                                         64
                                       , 376
                                       , 48
                                       , 48 );
    pulseWidthDefaultSlider . reset (
                                     new Slider (
                                                 "new slider" ) );
    addAndMakeVisible (
                       pulseWidthDefaultSlider . get () );
    pulseWidthDefaultSlider -> setRange (
                                         -100
                                       , 100
                                       , 1 );
    pulseWidthDefaultSlider -> setSliderStyle (
                                               Slider::RotaryHorizontalVerticalDrag );
    pulseWidthDefaultSlider -> setTextBoxStyle (
                                                Slider::NoTextBox
                                              , true
                                              , 80
                                              , 20 );
    pulseWidthDefaultSlider -> addListener (
                                            this );
    pulseWidthDefaultSlider -> setBounds (
                                          64
                                        , 456
                                        , 48
                                        , 48 );
    bankMenu . reset (
                      new BankMenu (
                                    dispatcher ) );
    addAndMakeVisible (
                       bankMenu . get () );
    bankMenu -> setBounds (
                           24
                         , 80
                         , 324
                         , 448 );
    saveAsDialog . reset (
                          new SavePatchAsDialog (
                                                 dispatcher ) );
    addAndMakeVisible (
                       saveAsDialog . get () );
    saveAsDialog -> setBounds (
                               274
                             , 239
                             , 476
                             , 98 );
    noteTableText . reset (
                           new NoteTableText (
                                              dispatcher ) );
    addAndMakeVisible (
                       noteTableText . get () );
    noteTableText -> setBounds (
                                632
                              , 8
                              , 131
                              , 17 );
    pulseTableText . reset (
                            new PulseTableText (
                                                dispatcher ) );
    addAndMakeVisible (
                       pulseTableText . get () );
    pulseTableText -> setBounds (
                                 840
                               , 8
                               , 141
                               , 17 );
    cachedImage_patchEditorBackdrop_png_1 = ImageCache::getFromMemory (
                                                                       patchEditorBackdrop_png
                                                                     , patchEditorBackdrop_pngSize );
    cachedImage_patchEditorButtonDown_png_2 = ImageCache::getFromMemory (
                                                                         patchEditorButtonDown_png
                                                                       , patchEditorButtonDown_pngSize );

    //[UserPreSize]
    wavetable = std::make_shared < WavetableView > (
                                                    dispatcher );
    commandTableViewport -> setViewedComponent (
                                                wavetable . get ()
                                              , false );
    commandTableViewport -> getVerticalScrollBar () -> setAutoHide (
                                                                    false );
    bankMenu -> setVisible (
                            false );
    saveAsDialog -> setVisible (
                                false );
    noteTable = std::make_shared < NoteTableView > (
                                                    dispatcher );
    pulseTable = std::make_shared < PulseTableView > (
                                                      dispatcher );

    dispatcher -> bankProgramChangedListeners -> add (
                                                      this );
    dispatcher -> bankStartSaveAsListeners -> add (
                                                   this );
    dispatcher -> livePatchEditorModeClickedListeners -> add (
                                                              this );
    dispatcher -> patchEditorShowNoteTableListeners -> add (
                                                            this );
    dispatcher -> patchEditorShowPulseTableListeners -> add (
                                                             this );
    dispatcher -> patchEditorShowWaveTableListeners -> add (
                                                            this );
    //[/UserPreSize]

    setSize (
             1024
           , 576 );


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PatchEditor::~PatchEditor ()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    dispatcher -> bankProgramChangedListeners -> remove (
                                                         this );
    dispatcher -> bankStartSaveAsListeners -> remove (
                                                      this );
    dispatcher -> livePatchEditorModeClickedListeners -> remove (
                                                                 this );
    dispatcher -> patchEditorShowNoteTableListeners -> remove (
                                                               this );
    dispatcher -> patchEditorShowPulseTableListeners -> remove (
                                                                this );
    dispatcher -> patchEditorShowWaveTableListeners -> remove (
                                                               this );
    //[/Destructor_pre]

    attackSlider               = nullptr;
    decaySlider                = nullptr;
    sustainSlider              = nullptr;
    releaseSlider              = nullptr;
    pitchBendRangeSlider       = nullptr;
    vibratoRangeSlider         = nullptr;
    vibratoSpeedSlider         = nullptr;
    pulseWidthRangeSlider      = nullptr;
    vibratoDelaySlider         = nullptr;
    attackLabel                = nullptr;
    decayLabel                 = nullptr;
    sustainLabel               = nullptr;
    releaseLabel               = nullptr;
    pitchBendRangeLabel        = nullptr;
    vibratoRangeLabel          = nullptr;
    vibratoSpeedLabel          = nullptr;
    pulseWidthRangeLabel       = nullptr;
    vibratoDelayLabel          = nullptr;
    patchName                  = nullptr;
    liveModeButton             = nullptr;
    menuButton                 = nullptr;
    commandTableViewport       = nullptr;
    wavetableText              = nullptr;
    newRowButton               = nullptr;
    newCommandButton           = nullptr;
    deleteButton               = nullptr;
    waveformView               = nullptr;
    vibratoDefaultAmountLabel  = nullptr;
    vibratoDefaultSpeedLabel   = nullptr;
    pulseWidthCenterLabel      = nullptr;
    pulseWidthDefaultLabel     = nullptr;
    vibratoDefaultAmountSlider = nullptr;
    vibratoDefaultSpeedSlider  = nullptr;
    pulseWidthCenterSlider     = nullptr;
    pulseWidthDefaultSlider    = nullptr;
    bankMenu                   = nullptr;
    saveAsDialog               = nullptr;
    noteTableText              = nullptr;
    pulseTableText             = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    wavetable  = nullptr;
    noteTable  = nullptr;
    pulseTable = nullptr;
    look       = nullptr;
    //[/Destructor]
}

//==============================================================================
void
    PatchEditor::paint (
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
                       cachedImage_patchEditorBackdrop_png_1
                     , x
                     , y
                     , width
                     , height
                     , 0
                     , 0
                     , cachedImage_patchEditorBackdrop_png_1 . getWidth ()
                     , cachedImage_patchEditorBackdrop_png_1 . getHeight () );
    }
    {
        const auto x = 208;
        const auto y = 544;
        const auto width = 154;
        const auto height = 26;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g . setColour (
                       Colours::black );
        g . drawImage (
                       cachedImage_patchEditorButtonDown_png_2
                     , x
                     , y
                     , width
                     , height
                     , 0
                     , 0
                     , cachedImage_patchEditorButtonDown_png_2 . getWidth ()
                     , cachedImage_patchEditorButtonDown_png_2 . getHeight () );
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void
    PatchEditor::resized ()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void
    PatchEditor::sliderValueChanged (
            Slider* slider_that_was_moved
            )
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if ( slider_that_was_moved == attackSlider . get () )
    {
        //[UserSliderCode_attackSlider] -- add your slider handling code here..
        attackLabel -> setText (
                                attackSlider -> getTextFromValue (
                                                                  attackSlider -> getValue () )
                              , dontSendNotification );
        dispatcher -> patchEditorAttackChangedListeners -> call (
                                                                 &PatchEditorAttackChanged::onPatchEditorAttackChanged
                                                               , static_cast < unsigned int > ( attackSlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_attackSlider]
    }
    else if ( slider_that_was_moved == decaySlider . get () )
    {
        //[UserSliderCode_decaySlider] -- add your slider handling code here..
        decayLabel -> setText (
                               decaySlider -> getTextFromValue (
                                                                decaySlider -> getValue () )
                             , dontSendNotification );
        dispatcher -> patchEditorDecayChangedListeners -> call (
                                                                &PatchEditorDecayChanged::onPatchEditorDecayChanged
                                                              , static_cast < unsigned int > ( decaySlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_decaySlider]
    }
    else if ( slider_that_was_moved == sustainSlider . get () )
    {
        //[UserSliderCode_sustainSlider] -- add your slider handling code here..
        sustainLabel -> setText (
                                 sustainSlider -> getTextFromValue (
                                                                    sustainSlider -> getValue () )
                               , dontSendNotification );
        dispatcher -> patchEditorSustainChangedListeners -> call (
                                                                  &PatchEditorSustainChanged::onPatchEditorSustainChanged
                                                                , static_cast < unsigned int > ( sustainSlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_sustainSlider]
    }
    else if ( slider_that_was_moved == releaseSlider . get () )
    {
        //[UserSliderCode_releaseSlider] -- add your slider handling code here..
        releaseLabel -> setText (
                                 releaseSlider -> getTextFromValue (
                                                                    releaseSlider -> getValue () )
                               , dontSendNotification );
        dispatcher -> patchEditorReleaseChangedListeners -> call (
                                                                  &PatchEditorReleaseChanged::onPatchEditorReleaseChanged
                                                                , static_cast < unsigned int > ( releaseSlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_releaseSlider]
    }
    else if ( slider_that_was_moved == pitchBendRangeSlider . get () )
    {
        //[UserSliderCode_pitchBendRangeSlider] -- add your slider handling code here..
        pitchBendRangeLabel -> setText (
                                        pitchBendRangeSlider -> getTextFromValue (
                                                                                  pitchBendRangeSlider -> getValue () )
                                      , dontSendNotification );
        dispatcher -> patchEditorPitchBendRangeChangedListeners -> call (
                                                                         &PatchEditorPitchBendRangeChanged::onPatchEditorPitchBendRangeChanged
                                                                       , static_cast < unsigned int > ( pitchBendRangeSlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_pitchBendRangeSlider]
    }
    else if ( slider_that_was_moved == vibratoRangeSlider . get () )
    {
        //[UserSliderCode_vibratoRangeSlider] -- add your slider handling code here..
        vibratoRangeLabel -> setText (
                                      vibratoRangeSlider -> getTextFromValue (
                                                                              vibratoRangeSlider -> getValue () )
                                    , dontSendNotification );
        dispatcher -> patchEditorVibratoRangeChangedListeners -> call (
                                                                       &PatchEditorVibratoRangeChanged::onPatchEditorVibratoRangeChanged
                                                                     , static_cast < unsigned int > ( vibratoRangeSlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_vibratoRangeSlider]
    }
    else if ( slider_that_was_moved == vibratoSpeedSlider . get () )
    {
        //[UserSliderCode_vibratoSpeedSlider] -- add your slider handling code here..
        vibratoSpeedLabel -> setText (
                                      vibratoSpeedSlider -> getTextFromValue (
                                                                              vibratoSpeedSlider -> getValue () )
                                    , dontSendNotification );
        dispatcher -> patchEditorVibratoSpeedChangedListeners -> call (
                                                                       &PatchEditorVibratoSpeedChanged::onPatchEditorVibratoSpeedChanged
                                                                     , static_cast < unsigned int > ( vibratoSpeedSlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_vibratoSpeedSlider]
    }
    else if ( slider_that_was_moved == pulseWidthRangeSlider . get () )
    {
        //[UserSliderCode_pulseWidthRangeSlider] -- add your slider handling code here..
        pulseWidthRangeLabel -> setText (
                                         pulseWidthRangeSlider -> getTextFromValue (
                                                                                    pulseWidthRangeSlider -> getValue () )
                                       , dontSendNotification );
        dispatcher -> patchEditorPulseWidthRangeChangedListeners -> call (
                                                                          &PatchEditorPulseWidthRangeChanged::onPatchEditorPulseWidthRangeChanged
                                                                        , static_cast < unsigned int > ( pulseWidthRangeSlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_pulseWidthRangeSlider]
    }
    else if ( slider_that_was_moved == vibratoDelaySlider . get () )
    {
        //[UserSliderCode_vibratoDelaySlider] -- add your slider handling code here..
        vibratoDelayLabel -> setText (
                                      vibratoDelaySlider -> getTextFromValue (
                                                                              vibratoDelaySlider -> getValue () )
                                    , dontSendNotification );
        dispatcher -> patchEditorVibratoDelayChangedListeners -> call (
                                                                       &PatchEditorVibratoDelayChanged::onPatchEditorVibratoDelayChanged
                                                                     , static_cast < unsigned int > ( vibratoDelaySlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_vibratoDelaySlider]
    }
    else if ( slider_that_was_moved == vibratoDefaultAmountSlider . get () )
    {
        //[UserSliderCode_vibratoDefaultAmountSlider] -- add your slider handling code here..
        vibratoDefaultAmountLabel -> setText (
                                              vibratoDefaultAmountSlider -> getTextFromValue (
                                                                                              vibratoDefaultAmountSlider -> getValue () ) + "%"
                                            , dontSendNotification );
        dispatcher -> patchEditorVibratoDefaultAmountChangedListeners -> call (
                                                                               &PatchEditorVibratoDefaultAmountChanged::onPatchEditorVibratoDefaultAmountChanged
                                                                             , static_cast < float > ( vibratoDefaultAmountSlider -> getValue () / 100.0 ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_vibratoDefaultAmountSlider]
    }
    else if ( slider_that_was_moved == vibratoDefaultSpeedSlider . get () )
    {
        //[UserSliderCode_vibratoDefaultSpeedSlider] -- add your slider handling code here..
        vibratoDefaultSpeedLabel -> setText (
                                             vibratoDefaultSpeedSlider -> getTextFromValue (
                                                                                            vibratoDefaultSpeedSlider -> getValue () ) + "%"
                                           , dontSendNotification );
        dispatcher -> patchEditorVibratoDefaultSpeedChangedListeners -> call (
                                                                              &PatchEditorVibratoDefaultSpeedChanged::onPatchEditorVibratoDefaultSpeedChanged
                                                                            , static_cast < float > ( vibratoDefaultSpeedSlider -> getValue () / 100.0 ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_vibratoDefaultSpeedSlider]
    }
    else if ( slider_that_was_moved == pulseWidthCenterSlider . get () )
    {
        //[UserSliderCode_pulseWidthCenterSlider] -- add your slider handling code here..
        pulseWidthCenterLabel -> setText (
                                          pulseWidthCenterSlider -> getTextFromValue (
                                                                                      pulseWidthCenterSlider -> getValue () )
                                        , dontSendNotification );
        dispatcher -> patchEditorPulseWidthCenterChangedListeners -> call (
                                                                           &PatchEditorPulseWidthCenterChanged::onPatchEditorPulseWidthCenterChanged
                                                                         , static_cast < unsigned int > ( pulseWidthCenterSlider -> getValue () ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_pulseWidthCenterSlider]
    }
    else if ( slider_that_was_moved == pulseWidthDefaultSlider . get () )
    {
        //[UserSliderCode_pulseWidthDefaultSlider] -- add your slider handling code here..
        pulseWidthDefaultLabel -> setText (
                                           pulseWidthDefaultSlider -> getTextFromValue (
                                                                                        pulseWidthDefaultSlider -> getValue () ) + "%"
                                         , dontSendNotification );
        dispatcher -> patchEditorPulseWidthDefaultChangedListeners -> call (
                                                                            &PatchEditorPulseWidthDefaultChanged::onPatchEditorPulseWidthDefaultChanged
                                                                          , static_cast < float > ( pulseWidthDefaultSlider -> getValue () / 100.0 ) );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserSliderCode_pulseWidthDefaultSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void
    PatchEditor::labelTextChanged (
            Label* label_that_has_changed
            )
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if ( label_that_has_changed == attackLabel . get () )
    {
        //[UserLabelCode_attackLabel] -- add your label text handling code here..
        attackSlider -> setValue (
                                  attackLabel -> getText () . getIntValue () );
        //[/UserLabelCode_attackLabel]
    }
    else if ( label_that_has_changed == decayLabel . get () )
    {
        //[UserLabelCode_decayLabel] -- add your label text handling code here..
        decaySlider -> setValue (
                                 decayLabel -> getText () . getIntValue () );
        //[/UserLabelCode_decayLabel]
    }
    else if ( label_that_has_changed == sustainLabel . get () )
    {
        //[UserLabelCode_sustainLabel] -- add your label text handling code here..
        sustainSlider -> setValue (
                                   sustainLabel -> getText () . getIntValue () );
        //[/UserLabelCode_sustainLabel]
    }
    else if ( label_that_has_changed == releaseLabel . get () )
    {
        //[UserLabelCode_releaseLabel] -- add your label text handling code here..
        releaseSlider -> setValue (
                                   releaseLabel -> getText () . getIntValue () );
        //[/UserLabelCode_releaseLabel]
    }
    else if ( label_that_has_changed == pitchBendRangeLabel . get () )
    {
        //[UserLabelCode_pitchBendRangeLabel] -- add your label text handling code here..
        pitchBendRangeSlider -> setValue (
                                          pitchBendRangeLabel -> getText () . getIntValue () );
        //[/UserLabelCode_pitchBendRangeLabel]
    }
    else if ( label_that_has_changed == vibratoRangeLabel . get () )
    {
        //[UserLabelCode_vibratoRangeLabel] -- add your label text handling code here..
        vibratoRangeSlider -> setValue (
                                        vibratoRangeLabel -> getText () . getIntValue () );
        //[/UserLabelCode_vibratoRangeLabel]
    }
    else if ( label_that_has_changed == vibratoSpeedLabel . get () )
    {
        //[UserLabelCode_vibratoSpeedLabel] -- add your label text handling code here..
        vibratoSpeedSlider -> setValue (
                                        vibratoSpeedLabel -> getText () . getIntValue () );
        //[/UserLabelCode_vibratoSpeedLabel]
    }
    else if ( label_that_has_changed == pulseWidthRangeLabel . get () )
    {
        //[UserLabelCode_pulseWidthRangeLabel] -- add your label text handling code here..
        pulseWidthRangeSlider -> setValue (
                                           pulseWidthRangeLabel -> getText () . getIntValue () );
        //[/UserLabelCode_pulseWidthRangeLabel]
    }
    else if ( label_that_has_changed == vibratoDelayLabel . get () )
    {
        //[UserLabelCode_vibratoDelayLabel] -- add your label text handling code here..
        vibratoDelaySlider -> setValue (
                                        vibratoDelayLabel -> getText () . getIntValue () );
        //[/UserLabelCode_vibratoDelayLabel]
    }
    else if ( label_that_has_changed == patchName . get () )
    {
        //[UserLabelCode_patchName] -- add your label text handling code here..
        dispatcher -> patchEditorNameChangedListeners -> call (
                                                               &PatchEditorNameChanged::onPatchEditorNameChanged
                                                             , patchName -> getText () );
        //[/UserLabelCode_patchName]
    }
    else if ( label_that_has_changed == vibratoDefaultAmountLabel . get () )
    {
        //[UserLabelCode_vibratoDefaultAmountLabel] -- add your label text handling code here..
        vibratoDefaultAmountSlider -> setValue (
                                                vibratoDefaultAmountLabel -> getText () . getIntValue () );
        //[/UserLabelCode_vibratoDefaultAmountLabel]
    }
    else if ( label_that_has_changed == vibratoDefaultSpeedLabel . get () )
    {
        //[UserLabelCode_vibratoDefaultSpeedLabel] -- add your label text handling code here..
        vibratoDefaultSpeedSlider -> setValue (
                                               vibratoDefaultSpeedLabel -> getText () . getIntValue () );
        //[/UserLabelCode_vibratoDefaultSpeedLabel]
    }
    else if ( label_that_has_changed == pulseWidthCenterLabel . get () )
    {
        //[UserLabelCode_pulseWidthCenterLabel] -- add your label text handling code here..
        pulseWidthCenterSlider -> setValue (
                                            pulseWidthCenterLabel -> getText () . getIntValue () );
        //[/UserLabelCode_pulseWidthCenterLabel]
    }
    else if ( label_that_has_changed == pulseWidthDefaultLabel . get () )
    {
        //[UserLabelCode_pulseWidthDefaultLabel] -- add your label text handling code here..
        pulseWidthDefaultSlider -> setValue (
                                             pulseWidthDefaultLabel -> getText () . getIntValue () );
        //[/UserLabelCode_pulseWidthDefaultLabel]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void
    PatchEditor::buttonClicked (
            Button* button_that_was_clicked
            )
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if ( button_that_was_clicked == liveModeButton . get () )
    {
        //[UserButtonCode_liveModeButton] -- add your button handler code here..
        // TODO: Need to trigger sending a BankProgramChanged event before the switch so that live patches will be refreshed.
        // In order to do this, Bank will need to respond to the PatchEditorLiveModeClicked event.  Not sure how to manage
        // the timing yet, but SIDestep will STILL need to respond to the PatchEditorLiveModeClicked event as WELL, because
        // a refresh during a save as must be executed immediately to allow for properly refreshing oldID.
        dispatcher -> bankRefreshLive -> call (
                                               &BankRefreshLive::onBankRefreshLive );
        dispatcher -> patchEditorLiveModeClickedListeners -> call (
                                                                   &PatchEditorLiveModeClicked::onPatchEditorLiveModeClicked );
        setVisible (
                    false );
        //[/UserButtonCode_liveModeButton]
    }
    else if ( button_that_was_clicked == menuButton . get () )
    {
        //[UserButtonCode_menuButton] -- add your button handler code here..
        bankMenu -> setVisible (
                                !bankMenu -> isVisible () );
        //[/UserButtonCode_menuButton]
    }
    else if ( button_that_was_clicked == newRowButton . get () )
    {
        //[UserButtonCode_newRowButton] -- add your button handler code here..
        dispatcher -> patchEditorNewWavetableRowClickedListeners -> call (
                                                                          &PatchEditorNewTableRowClicked::onPatchEditorNewTableRowClicked );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserButtonCode_newRowButton]
    }
    else if ( button_that_was_clicked == newCommandButton . get () )
    {
        //[UserButtonCode_newCommandButton] -- add your button handler code here..
        dispatcher -> patchEditorNewWavetableCommandClickedListeners -> call (
                                                                              &PatchEditorNewTableCommandClicked::onPatchEditorNewTableCommandClicked );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserButtonCode_newCommandButton]
    }
    else if ( button_that_was_clicked == deleteButton . get () )
    {
        //[UserButtonCode_deleteButton] -- add your button handler code here..
        dispatcher -> patchEditorDeleteWavetableRowClickedListeners -> call (
                                                                             &PatchEditorDeleteTableRowClicked::onPatchEditorDeleteTableRowClicked );
        dispatcher -> bankRepaintWaveformListeners -> call (
                                                            &BankRepaintWaveform::onBankRepaintWaveform );
        //[/UserButtonCode_deleteButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}


//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void
    PatchEditor::onBankProgramChanged (
            String                                         old_id
          , const ReferenceCountedObjectPtr < SidProgram > program
            )
{
    patchName -> setText (
                          program -> GetName ()
                        , dontSendNotification );
    const auto e  = program -> GetEnvelope ();
    const auto ex = program -> GetExpression ();
    const auto v  = ex -> getVibrato ();
    attackSlider -> setValue (
                              e -> getDefaultAttack ()
                            , dontSendNotification );
    attackLabel -> setText (
                            attackSlider -> getTextFromValue (
                                                              attackSlider -> getValue () )
                          , dontSendNotification );
    decaySlider -> setValue (
                             e -> getDefaultDecay ()
                           , dontSendNotification );
    decayLabel -> setText (
                           decaySlider -> getTextFromValue (
                                                            decaySlider -> getValue () )
                         , dontSendNotification );
    sustainSlider -> setValue (
                               e -> getDefaultSustain ()
                             , dontSendNotification );
    sustainLabel -> setText (
                             sustainSlider -> getTextFromValue (
                                                                sustainSlider -> getValue () )
                           , dontSendNotification );
    releaseSlider -> setValue (
                               e -> getDefaultRelease ()
                             , dontSendNotification );
    releaseLabel -> setText (
                             releaseSlider -> getTextFromValue (
                                                                releaseSlider -> getValue () )
                           , dontSendNotification );
    pitchBendRangeSlider -> setValue (
                                      ex -> getPitchBendRange ()
                                    , dontSendNotification );
    pitchBendRangeLabel -> setText (
                                    pitchBendRangeSlider -> getTextFromValue (
                                                                              pitchBendRangeSlider -> getValue () )
                                  , dontSendNotification );
    pulseWidthRangeSlider -> setValue (
                                       ex -> getPulseWidthRange ()
                                     , dontSendNotification );
    pulseWidthRangeLabel -> setText (
                                     pulseWidthRangeSlider -> getTextFromValue (
                                                                                pulseWidthRangeSlider -> getValue () )
                                   , dontSendNotification );
    pulseWidthCenterSlider -> setValue (
                                        ex -> getPulseWidthCenter ()
                                      , dontSendNotification );
    pulseWidthCenterLabel -> setText (
                                      pulseWidthCenterSlider -> getTextFromValue (
                                                                                  pulseWidthCenterSlider -> getValue () )
                                    , dontSendNotification );
    pulseWidthDefaultSlider -> setValue (
                                         ex -> getPulseWidthDefault () * 100
                                       , dontSendNotification );
    pulseWidthDefaultLabel -> setText (
                                       pulseWidthDefaultSlider -> getTextFromValue (
                                                                                    pulseWidthDefaultSlider -> getValue () ) + "%"
                                     , dontSendNotification );
    vibratoRangeSlider -> setValue (
                                    v -> GetVibratoRange ()
                                  , dontSendNotification );
    vibratoRangeLabel -> setText (
                                  vibratoRangeSlider -> getTextFromValue (
                                                                          vibratoRangeSlider -> getValue () )
                                , dontSendNotification );
    vibratoSpeedSlider -> setValue (
                                    v -> GetVibratoSpeed ()
                                  , dontSendNotification );
    vibratoSpeedLabel -> setText (
                                  vibratoSpeedSlider -> getTextFromValue (
                                                                          vibratoSpeedSlider -> getValue () )
                                , dontSendNotification );
    vibratoDefaultAmountSlider -> setValue (
                                            v -> GetDefaultVibratoAmount () * 100
                                          , dontSendNotification );
    vibratoDefaultAmountLabel -> setText (
                                          vibratoDefaultAmountSlider -> getTextFromValue (
                                                                                          vibratoDefaultAmountSlider -> getValue () ) + "%"
                                        , dontSendNotification );
    vibratoDefaultSpeedSlider -> setValue (
                                           v -> GetDefaultVibratoSpeed () * 100
                                         , dontSendNotification );
    vibratoDefaultSpeedLabel -> setText (
                                         vibratoDefaultSpeedSlider -> getTextFromValue (
                                                                                        vibratoDefaultSpeedSlider -> getValue () ) + "%"
                                       , dontSendNotification );
    repaint ();
    MessageManager::callAsync (
                               [=] ()
                               {
                                   //dispatcher -> patchEditorShowWaveTableListeners -> call (
                                   //                                                         &PatchEditorShowWaveTable::onPatchEditorShowWaveTable );
                               } );
}

void
    PatchEditor::onBankStartSaveAs ()
{
    saveAsDialog -> setVisible (
                                true );
}

void
    PatchEditor::onLivePatchEditorModeClicked ()
{
    MessageManager::callAsync (
                               [=] ()
                               {
                                   setVisible (
                                               true );
                               } );
}

void
    PatchEditor::onPatchEditorShowNoteTable ()
{
    commandTableViewport -> setViewedComponent (
                                                noteTable . get ()
                                              , false );
    noteTable -> resized ();
}

void
    PatchEditor::onPatchEditorShowPulseTable ()
{
    commandTableViewport -> setViewedComponent (
                                                pulseTable . get ()
                                              , false );
    pulseTable -> resized ();
}

void
    PatchEditor::onPatchEditorShowWaveTable ()
{
    commandTableViewport -> setViewedComponent (
                                                wavetable . get ()
                                              , false );
    wavetable -> resized ();
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PatchEditor" componentName=""
                 parentClasses="public Component, public BankProgramChanged, public BankStartSaveAs, public LivePatchEditorModeClicked, public PatchEditorShowNoteTable, public PatchEditorShowPulseTable, public PatchEditorShowWaveTable"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="1" initialWidth="1024"
                 initialHeight="576">
  <BACKGROUND backgroundColour="ffffffff">
    <IMAGE pos="0 0 1024 576" resource="patchEditorBackdrop_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="208 544 154 26" resource="patchEditorButtonDown_png" opacity="1.0"
           mode="0"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="2cd41b7a823a6bbf" memberName="attackSlider"
          virtualName="" explicitFocusOrder="0" pos="64 121 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="d0eb97745507bc2c" memberName="decaySlider"
          virtualName="" explicitFocusOrder="0" pos="144 121 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="e5784263e4921b63" memberName="sustainSlider"
          virtualName="" explicitFocusOrder="0" pos="224 121 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="7a2342fded630851" memberName="releaseSlider"
          virtualName="" explicitFocusOrder="0" pos="304 121 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="5bc7fdbcca1bb289" memberName="pitchBendRangeSlider"
          virtualName="" explicitFocusOrder="0" pos="64 209 48 48" min="0.0"
          max="8192.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="f7cfaf569a269657" memberName="vibratoRangeSlider"
          virtualName="" explicitFocusOrder="0" pos="224 209 48 48" min="0.0"
          max="8192.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="7d3bed32c5886626" memberName="vibratoSpeedSlider"
          virtualName="" explicitFocusOrder="0" pos="304 209 48 48" min="0.0"
          max="50.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="f3f43917dd8ba620" memberName="pulseWidthRangeSlider"
          virtualName="" explicitFocusOrder="0" pos="64 297 48 48" min="0.0"
          max="4095.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="a1ac9c263317de1b" memberName="vibratoDelaySlider"
          virtualName="" explicitFocusOrder="0" pos="224 367 48 48" min="0.0"
          max="15.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="77267ab013a4c949" memberName="attackLabel"
         virtualName="" explicitFocusOrder="0" pos="64 97 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="19baaaadba91b1b8" memberName="decayLabel"
         virtualName="" explicitFocusOrder="0" pos="144 97 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="83d52dcf5372e118" memberName="sustainLabel"
         virtualName="" explicitFocusOrder="0" pos="224 97 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8db7a6b3640585ff" memberName="releaseLabel"
         virtualName="" explicitFocusOrder="0" pos="304 97 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1b4eae892bfe6bdb" memberName="pitchBendRangeLabel"
         virtualName="" explicitFocusOrder="0" pos="64 185 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="fb3cfd8322f97df9" memberName="vibratoRangeLabel"
         virtualName="" explicitFocusOrder="0" pos="224 185 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="bf0e8fcca263bb70" memberName="vibratoSpeedLabel"
         virtualName="" explicitFocusOrder="0" pos="304 185 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="d744a5b8e6b6053d" memberName="pulseWidthRangeLabel"
         virtualName="" explicitFocusOrder="0" pos="64 273 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="1925133b210c2aaf" memberName="vibratoDelayLabel"
         virtualName="" explicitFocusOrder="0" pos="224 343 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="ea9b0e712c154b55" memberName="patchName"
         virtualName="" explicitFocusOrder="0" pos="24 71 324 16" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="Patch Name" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="new button" id="3cacf57910e35e81" memberName="liveModeButton"
               virtualName="" explicitFocusOrder="0" pos="32 544 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="liveModeButtonNormal_png" opacityNormal="1.0"
               colourNormal="0" resourceOver="liveModeButtonOver_png" opacityOver="1.0"
               colourOver="0" resourceDown="liveModeButtonDown_png" opacityDown="1.0"
               colourDown="0"/>
  <IMAGEBUTTON name="new button" id="786cd39810ba357a" memberName="menuButton"
               virtualName="" explicitFocusOrder="0" pos="353 73 14 12" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="downArrowNormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="" opacityOver="1.0" colourOver="0" resourceDown=""
               opacityDown="1.0" colourDown="0"/>
  <VIEWPORT name="new viewport" id="bf26876a7aa88432" memberName="commandTableViewport"
            virtualName="" explicitFocusOrder="0" pos="400 16 608 184" vscroll="1"
            hscroll="0" scrollbarThickness="16" contentType="0" jucerFile="WavetableView.cpp"
            contentClass="" constructorParams=""/>
  <JUCERCOMP name="" id="e69b3e9625ea8249" memberName="wavetableText" virtualName=""
             explicitFocusOrder="0" pos="416 8 110 17" sourceFile="WavetableText.cpp"
             constructorParams=""/>
  <IMAGEBUTTON name="new button" id="5074c2d12ab6cc20" memberName="newRowButton"
               virtualName="" explicitFocusOrder="0" pos="448 192 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="newRowNormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="newRowOver_png" opacityOver="1.0" colourOver="0"
               resourceDown="newRowDown_png" opacityDown="1.0" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="4bfd9e29bd87063" memberName="newCommandButton"
               virtualName="" explicitFocusOrder="0" pos="624 192 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="newCommandNormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="newCommandOver_png" opacityOver="1.0" colourOver="0"
               resourceDown="newCommandDown_png" opacityDown="1.0" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="4f91e601a6e818cd" memberName="deleteButton"
               virtualName="" explicitFocusOrder="0" pos="800 192 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="deleteNormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="deleteOver_png" opacityOver="1.0" colourOver="0"
               resourceDown="deleteDown_png" opacityDown="1.0" colourDown="0"/>
  <JUCERCOMP name="" id="f252ae17811a83c" memberName="waveformView" virtualName=""
             explicitFocusOrder="0" pos="400 248 608 296" sourceFile="WaveformView.cpp"
             constructorParams=""/>
  <LABEL name="new label" id="fcec55ed8a0d807c" memberName="vibratoDefaultAmountLabel"
         virtualName="" explicitFocusOrder="0" pos="224 264 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="38a29eacc682410d" memberName="vibratoDefaultSpeedLabel"
         virtualName="" explicitFocusOrder="0" pos="304 264 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="84c24db139122cf4" memberName="pulseWidthCenterLabel"
         virtualName="" explicitFocusOrder="0" pos="64 353 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="7dec2956c5fe9349" memberName="pulseWidthDefaultLabel"
         virtualName="" explicitFocusOrder="0" pos="64 433 48 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="0%" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="new slider" id="4d555b08be48dcee" memberName="vibratoDefaultAmountSlider"
          virtualName="" explicitFocusOrder="0" pos="224 288 48 48" min="0.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="254b7b10e3d6ca53" memberName="vibratoDefaultSpeedSlider"
          virtualName="" explicitFocusOrder="0" pos="304 288 48 48" min="0.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="8d776adc94f70db7" memberName="pulseWidthCenterSlider"
          virtualName="" explicitFocusOrder="0" pos="64 376 48 48" min="0.0"
          max="4095.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="new slider" id="deb17363d6a80ad" memberName="pulseWidthDefaultSlider"
          virtualName="" explicitFocusOrder="0" pos="64 456 48 48" min="-100.0"
          max="100.0" int="1.0" style="RotaryHorizontalVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="0" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <JUCERCOMP name="" id="cfb51def3185550f" memberName="bankMenu" virtualName=""
             explicitFocusOrder="0" pos="24 80 324 448" sourceFile="BankMenu.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="775992dc0c12017" memberName="saveAsDialog" virtualName=""
             explicitFocusOrder="0" pos="274 239 476 98" sourceFile="SavePatchAsDialog.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="8e7b5ba0d4d1d31c" memberName="noteTableText" virtualName=""
             explicitFocusOrder="0" pos="632 8 131 17" sourceFile="NoteTableText.cpp"
             constructorParams=""/>
  <JUCERCOMP name="" id="4e2e9d5f1d09cab6" memberName="pulseTableText" virtualName=""
             explicitFocusOrder="0" pos="840 8 141 17" sourceFile="PulseTableText.cpp"
             constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: patchEditorBackdrop_png, 8427, "../../UI/Patch Editor Backdrop.png"
static const unsigned char resource_PatchEditor_patchEditorBackdrop_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,4,0,
0,0,2,64,8,3,0,0,0,36,75,228,231,0,0,0,231,80,76,84,
69,0,0,0,0,0,0,0,0,0,0,0,0,60,58,22,240,232,88,180,
174,66,80,143,207,80,143,207,0,0,0,0,0,0,150,145,55,0,0,0,
0,0,0,80,144,208,80,144,208,0,0,0,120,116,44,80,144,208,24,16,
143,25,16,144,25,16,144,24,16,144,90,87,33,195,189,72,0,0,0,225,
218,83,45,44,17,24,16,144,0,0,0,30,29,11,0,0,0,210,203,77,
135,131,50,0,0,0,15,15,6,0,0,0,0,0,0,105,102,39,25,16,
144,25,16,144,27,16,143,24,16,143,26,16,143,24,16,144,24,16,144,32,
16,143,25,16,143,24,16,143,80,143,207,80,143,207,80,144,208,73,128,200,
45,64,168,28,24,148,80,143,207,80,143,207,38,48,160,42,56,164,52,80,
176,80,144,208,77,136,204,80,143,207,66,112,192,35,40,156,70,120,196,49,
72,172,24,16,143,63,104,188,31,32,152,59,96,184,56,88,180,80,144,209,
80,143,207,80,144,208,80,144,208,61,101,187,180,183,255,20,0,0,0,77,
116,82,78,83,0,64,255,191,255,255,255,32,64,96,207,255,239,48,239,255,
128,255,191,32,143,207,255,255,255,159,255,255,159,32,255,16,255,255,112,255,
223,143,255,239,175,48,128,80,223,191,16,112,64,96,16,207,255,255,255,128,
112,255,255,255,159,255,48,255,255,255,255,96,255,255,255,255,143,80,223,175,
191,163,193,171,128,0,0,31,102,73,68,65,84,120,1,236,221,233,86,179,
58,20,128,225,0,41,231,212,58,128,243,60,235,253,95,226,89,205,22,100,
87,246,10,18,219,69,15,239,243,215,152,47,254,224,253,106,86,12,14,243,
0,0,0,0,0,0,0,0,0,0,0,64,150,219,10,7,128,0,0,32,
0,0,254,127,1,240,139,62,37,1,0,8,0,0,2,0,96,138,254,249,
183,151,139,90,22,107,7,18,0,175,173,66,0,14,139,192,137,66,91,70,
167,215,220,118,29,21,218,145,3,230,224,248,164,87,188,0,85,46,66,0,
114,173,14,1,248,226,68,174,85,209,233,181,29,111,102,102,14,152,131,147,
147,211,159,142,9,128,155,182,179,243,139,75,32,221,201,201,101,227,226,252,
204,137,211,97,1,184,42,215,174,37,0,89,227,38,4,224,182,12,84,0,
202,198,85,44,0,237,244,98,39,1,184,43,27,119,147,15,192,249,37,240,
167,1,16,231,191,10,64,189,8,36,0,246,23,218,0,44,26,181,29,0,
107,150,93,110,102,250,169,7,224,254,18,248,227,0,136,123,9,0,1,224,
255,127,204,44,0,226,252,47,2,224,235,134,10,64,221,240,163,3,80,217,
244,140,203,42,38,235,14,185,217,8,192,77,245,109,233,130,135,202,160,134,
196,184,116,103,151,192,22,2,32,206,210,3,32,146,55,1,141,207,17,38,
215,85,228,49,149,30,162,2,160,20,246,169,103,123,136,133,15,0,152,118,
0,206,9,192,196,3,192,254,63,182,24,128,139,212,0,100,149,214,140,215,
178,209,1,168,123,245,4,224,170,182,249,16,0,53,100,181,104,172,234,111,
87,221,167,251,177,214,236,33,246,34,211,93,2,91,9,128,72,10,64,186,
225,91,137,74,79,0,202,133,69,182,33,173,33,74,217,125,186,253,184,33,
45,2,128,105,33,0,4,0,4,64,73,57,8,164,28,185,224,41,235,243,
224,132,53,228,102,35,0,95,67,36,0,215,165,162,86,240,53,240,32,60,
221,207,165,225,74,2,240,162,102,17,122,250,151,60,47,30,178,181,87,121,
186,75,237,57,4,224,32,19,109,0,98,139,220,223,0,128,0,216,71,129,
135,239,140,85,78,216,67,116,0,190,135,232,93,58,189,130,206,192,16,128,
250,79,54,1,7,159,122,238,4,32,178,200,244,0,0,4,128,0,0,187,
13,128,253,231,192,202,93,55,0,111,94,123,212,1,208,67,90,43,21,128,
118,136,60,91,7,133,208,43,120,147,0,248,224,58,4,224,189,48,44,63,
138,150,204,18,168,233,131,143,42,207,31,253,218,167,172,165,104,188,135,0,
92,251,64,5,32,178,200,125,15,0,8,64,202,206,88,173,3,48,100,243,
204,60,171,251,227,11,191,60,115,108,204,50,252,212,243,168,69,18,0,140,
67,0,8,0,64,0,8,0,48,129,0,40,198,206,152,208,207,101,108,43,
49,242,108,153,219,119,3,54,1,179,180,0,40,211,15,0,64,0,8,0,
64,0,8,0,144,30,0,219,240,11,65,18,126,189,54,168,103,203,60,231,
235,19,3,96,154,126,0,0,2,64,0,0,2,64,0,128,196,147,128,202,
46,3,240,233,13,111,221,0,220,249,77,234,20,225,114,92,0,188,133,147,
128,152,217,223,2,40,187,12,128,207,109,109,0,250,116,191,183,74,217,4,
84,246,239,111,1,0,2,64,0,128,212,251,0,196,238,3,240,154,25,158,
92,112,148,41,155,119,9,92,165,4,32,51,112,31,0,184,17,104,71,1,
200,220,112,246,10,18,143,2,107,123,113,35,16,64,0,8,0,144,30,0,
223,222,166,187,254,149,186,81,132,199,229,185,189,7,247,161,10,54,30,191,
162,90,91,70,102,81,1,120,172,3,253,230,14,251,250,97,173,93,193,170,
247,213,36,246,244,214,34,149,101,79,0,86,220,10,140,153,222,8,20,61,
10,108,92,182,51,226,70,160,232,11,8,6,111,2,154,211,23,195,47,63,
138,236,84,78,32,0,0,1,32,0,64,98,0,178,238,59,245,106,173,12,
1,120,175,2,245,233,90,148,237,11,53,34,179,124,209,191,72,68,62,93,
175,211,97,80,159,239,51,215,97,77,111,44,82,185,50,3,112,83,253,64,
0,192,133,32,3,135,24,91,137,99,135,68,54,16,245,247,166,255,28,246,
63,148,232,18,32,0,4,0,152,66,0,238,202,14,245,66,141,148,33,138,
122,186,71,15,17,119,145,0,36,252,28,4,0,92,8,178,221,183,234,38,
14,17,153,179,140,91,228,158,5,0,32,0,4,0,72,15,192,81,97,251,
72,28,162,56,145,56,68,28,57,75,226,207,65,0,48,175,0,64,33,0,
152,89,0,64,0,64,0,64,0,64,0,8,128,246,31,59,119,108,219,48,
12,132,97,244,118,16,240,87,236,25,201,178,236,253,167,11,144,54,72,23,
49,135,224,189,17,88,124,134,197,59,10,0,2,208,143,0,128,0,8,0,
8,64,75,2,128,0,32,0,8,0,2,128,0,32,0,8,0,89,4,1,
64,0,16,0,4,0,1,64,0,16,0,4,0,1,216,198,204,239,115,254,
31,187,0,244,39,0,219,204,29,156,127,230,38,0,173,9,192,54,170,70,
238,33,0,25,85,99,19,128,174,4,224,152,169,154,185,137,0,164,42,243,
16,128,150,4,224,113,38,169,202,157,4,32,57,31,2,208,142,0,236,207,
100,69,0,4,32,121,238,2,208,138,0,92,35,17,128,85,1,72,198,213,
39,0,8,192,107,70,0,86,6,32,243,213,36,0,8,192,251,76,4,96,
109,0,146,243,45,0,8,192,95,19,0,252,5,56,166,0,172,13,192,60,
234,155,128,143,128,62,2,130,107,64,215,128,96,16,200,32,16,172,9,64,
93,43,70,129,141,2,95,245,131,128,101,32,203,64,96,29,216,58,48,255,
136,7,65,156,255,215,143,191,0,224,73,48,4,0,1,64,0,16,0,4,
0,1,32,32,0,2,0,2,32,0,52,39,0,159,236,156,97,110,155,64,
16,70,247,95,248,213,145,176,60,183,112,36,219,128,187,221,218,27,219,77,
218,222,255,66,101,66,221,20,173,44,133,238,151,138,69,223,59,192,211,108,
164,121,40,24,216,214,242,110,234,45,125,12,0,89,80,0,118,123,153,196,
126,71,31,3,64,74,13,64,45,3,238,198,94,154,182,211,119,210,181,141,
236,221,141,131,24,32,95,98,196,204,7,240,49,0,203,131,1,216,185,129,
173,52,157,78,160,107,228,115,186,96,0,95,98,196,206,135,240,21,30,0,
194,0,216,74,120,211,246,220,130,208,234,36,190,72,253,102,11,106,224,124,
242,183,177,134,204,135,241,149,31,0,194,0,60,84,95,127,7,224,40,34,
213,201,245,124,146,110,242,72,201,130,97,124,73,0,32,243,1,124,133,7,
128,48,0,247,23,76,68,51,23,44,138,7,251,94,29,126,102,190,242,3,
64,24,128,38,182,250,228,189,87,141,103,220,130,93,192,62,145,126,196,11,
3,64,72,78,0,174,27,29,19,198,11,17,181,231,95,22,226,227,125,198,
236,230,51,54,87,6,128,20,17,128,199,181,26,105,0,66,140,113,174,1,
248,230,159,53,68,67,68,206,25,190,228,188,254,2,8,128,177,126,100,0,
72,1,1,88,235,157,0,24,51,13,192,248,30,5,104,62,156,111,96,205,
0,144,249,7,224,170,247,2,208,134,16,230,27,128,24,12,213,240,130,12,
64,8,34,241,59,38,0,122,101,0,200,236,3,176,81,213,205,202,13,20,
114,151,253,32,3,48,95,250,156,66,134,207,88,189,254,89,25,0,50,251,
0,104,207,202,253,159,0,188,12,87,108,128,207,174,255,13,120,190,54,60,
235,37,136,212,63,50,125,198,74,123,24,0,82,68,0,28,62,0,69,62,
7,128,154,207,96,0,200,8,6,224,201,119,26,163,200,97,155,225,251,208,
231,20,206,195,175,0,12,0,193,193,0,224,255,199,198,63,169,136,61,47,
3,64,10,15,192,49,198,120,20,145,115,196,92,97,205,103,136,252,172,242,
3,96,239,42,52,127,140,213,41,215,135,62,47,3,64,10,15,192,8,192,
203,54,111,56,35,211,151,26,243,124,232,243,50,0,164,232,0,236,170,17,
167,140,215,99,19,159,51,178,124,198,67,98,204,241,161,207,203,0,144,146,
3,144,128,255,64,198,242,125,12,0,89,76,0,240,159,200,90,190,143,1,
32,165,6,128,31,241,4,248,24,0,82,106,0,248,25,111,128,143,1,32,
165,6,128,0,208,95,236,212,49,17,0,0,8,0,161,254,173,53,193,15,
110,222,65,8,150,0,16,64,16,0,8,64,0,32,0,1,128,0,4,0,
2,16,0,8,64,0,32,0,1,128,0,4,0,2,16,0,8,64,0,32,
0,1,128,0,4,192,145,0,16,0,2,64,0,8,0,1,32,0,4,128,
0,16,0,2,64,0,8,0,1,32,0,4,128,0,16,0,2,64,0,8,
0,1,32,0,4,128,0,222,16,0,2,64,0,8,0,1,32,0,4,128,
0,16,0,2,64,0,8,0,1,32,0,4,128,0,16,0,2,64,0,8,
0,1,32,0,4,128,0,16,64,67,0,2,0,1,8,0,4,32,0,16,
128,0,64,0,2,0,1,8,0,4,32,0,16,128,0,64,0,2,0,1,
8,0,4,32,0,16,64,25,246,238,168,167,81,173,251,227,56,153,27,155,
115,225,74,112,186,146,39,113,46,231,226,92,56,137,10,116,150,75,92,80,
165,206,223,231,255,254,95,207,35,210,77,91,113,180,116,131,2,253,125,174,
14,49,174,204,153,132,111,25,216,155,158,210,142,217,17,5,0,16,0,4,
128,16,0,64,0,142,57,0,9,215,108,191,0,44,200,153,33,0,128,0,
140,25,17,111,24,253,158,237,225,118,43,0,179,191,184,10,238,102,181,19,
4,0,16,128,225,6,64,168,37,117,23,12,51,250,139,69,176,125,128,0,
192,104,3,112,118,76,1,200,109,45,34,162,200,204,232,217,230,176,148,19,
209,74,146,234,130,225,55,145,85,210,237,223,78,233,118,86,31,70,116,251,
234,26,224,108,20,1,0,4,224,130,153,47,206,142,36,0,139,32,36,225,
53,37,122,57,32,34,219,28,150,164,190,6,168,234,192,149,242,128,29,165,
210,214,193,98,231,252,127,249,107,69,0,6,15,1,184,63,142,191,154,204,
204,34,82,54,18,102,22,145,140,99,139,118,3,16,89,198,153,136,112,102,
249,86,0,236,145,19,17,41,248,209,82,98,94,31,196,150,82,110,91,163,
148,95,187,71,0,6,15,1,8,230,71,243,87,163,46,0,245,57,191,123,
160,155,79,121,33,122,251,112,251,160,241,219,187,230,1,2,48,124,8,192,
175,249,49,252,213,36,170,106,123,4,32,86,213,86,1,80,213,248,205,0,
204,127,33,0,131,134,0,56,247,23,60,101,245,41,76,31,6,160,210,34,
0,78,35,0,23,247,193,71,24,250,135,0,192,86,0,158,194,211,221,115,
126,165,69,245,25,94,168,185,43,128,210,234,157,0,20,170,42,44,26,185,
43,128,146,209,34,104,137,225,83,33,0,8,0,189,119,227,223,157,241,206,
219,1,104,60,67,112,16,128,193,66,0,16,128,68,42,249,235,0,228,198,
204,133,229,68,245,83,0,89,18,209,131,20,204,156,201,214,83,0,173,158,
2,20,86,138,214,191,43,165,21,133,139,25,2,0,8,192,240,151,2,191,
10,192,230,250,160,121,57,80,106,174,3,16,218,224,138,186,207,127,4,96,
186,16,128,147,223,127,194,61,45,46,175,130,79,119,249,223,107,218,91,186,
94,192,71,100,102,57,61,205,46,103,215,148,111,86,2,70,238,63,246,115,
125,137,0,76,4,2,112,25,190,242,39,40,253,161,54,78,47,131,207,117,
21,82,123,245,122,254,211,48,12,79,201,71,120,133,0,76,2,2,176,160,
87,194,224,217,45,209,106,41,123,82,35,250,228,2,132,148,198,25,239,41,
139,83,122,122,217,196,231,54,255,109,153,189,120,106,59,47,68,0,96,34,
1,88,201,150,37,133,229,101,1,165,25,183,16,19,157,4,253,184,123,235,
10,229,146,162,132,91,72,34,186,172,231,61,209,131,172,136,168,12,28,145,
207,60,4,0,38,16,0,229,45,242,18,128,107,138,185,149,21,253,9,250,
49,123,235,10,37,164,152,91,137,41,220,154,167,245,115,61,255,121,8,0,
76,47,0,68,220,142,80,216,91,0,242,230,21,10,81,194,173,36,68,91,
243,10,86,90,74,57,194,127,30,2,192,128,0,36,116,218,91,0,172,131,
63,31,19,237,204,83,18,255,121,8,0,76,33,0,219,43,230,252,79,136,
49,4,96,73,68,194,70,68,8,192,145,195,102,32,173,86,197,109,2,96,
204,124,200,9,209,220,28,115,152,127,207,231,188,69,118,2,224,247,231,115,
3,180,14,128,207,60,103,126,254,47,2,48,86,216,14,172,110,33,156,127,
0,154,219,99,219,251,117,206,27,205,23,246,12,44,0,206,249,47,4,96,
156,240,66,16,165,200,98,206,36,97,51,123,236,42,0,60,15,90,107,6,
202,5,32,181,184,211,0,196,102,150,177,81,254,121,193,99,24,36,188,18,
76,119,183,187,119,21,0,190,15,14,113,206,149,230,102,253,46,3,80,49,
234,240,255,247,188,117,121,1,58,11,192,252,240,151,130,46,72,89,52,162,
149,50,115,162,43,255,155,98,245,75,50,219,251,151,159,101,15,180,35,181,
152,11,73,248,209,204,88,168,194,45,209,70,190,222,250,151,19,179,44,253,
231,61,100,252,236,131,251,0,223,185,55,128,0,124,63,252,181,224,11,210,
221,141,114,190,1,112,175,201,62,244,2,32,75,105,215,246,99,59,207,0,
52,54,255,19,117,48,47,205,62,190,4,56,227,222,0,2,112,118,248,23,
131,44,200,52,150,156,136,84,117,69,167,139,75,255,0,4,135,6,96,206,
204,15,212,8,64,166,70,43,77,152,89,87,190,39,108,164,170,194,204,55,
170,186,212,78,2,64,15,213,69,24,46,1,224,107,2,240,61,240,9,0,
145,178,109,45,180,253,194,0,84,147,26,1,80,42,9,119,241,137,109,188,
65,228,63,175,254,237,246,183,55,0,58,9,192,121,224,21,128,149,20,156,
73,78,34,68,139,203,225,5,32,210,88,30,136,104,165,170,35,14,0,174,
1,160,159,0,124,15,252,2,224,238,177,187,179,120,56,1,112,148,149,156,
241,6,32,56,251,62,103,128,78,3,48,255,126,22,120,7,64,73,60,3,
80,208,83,111,1,200,165,224,66,114,90,74,23,39,108,106,102,113,181,18,
160,255,0,0,244,129,40,104,234,54,0,9,183,114,67,97,111,1,176,250,
253,126,180,113,195,173,220,52,175,40,252,230,77,56,0,128,0,220,146,114,
43,70,191,123,12,192,146,150,175,3,144,183,42,84,146,55,3,224,63,15,
1,128,175,65,180,104,122,58,60,0,177,101,252,104,91,1,184,35,90,242,
254,146,21,157,94,245,250,20,64,235,0,56,185,240,222,36,167,102,0,252,
231,33,0,240,53,232,77,135,7,160,121,39,239,146,40,178,189,165,116,122,
23,124,90,0,252,41,87,200,223,231,7,0,96,182,120,203,239,192,47,0,
34,68,129,51,187,166,22,194,187,160,207,0,196,22,243,163,101,76,29,89,
173,23,3,79,45,0,0,30,1,160,103,193,198,221,108,111,39,65,208,107,
0,28,234,72,227,139,193,16,0,64,0,150,74,20,248,235,45,0,153,80,
71,114,21,4,192,1,4,192,25,118,0,172,203,207,255,113,5,0,0,1,
136,149,246,245,250,77,194,59,34,149,122,158,255,52,4,0,16,128,193,221,
3,48,222,34,94,243,26,211,38,21,0,64,0,34,171,28,79,0,110,44,
102,181,140,17,0,64,0,200,57,154,0,184,117,5,195,15,0,0,2,144,
90,37,107,21,0,37,167,139,0,40,57,159,26,0,0,4,192,145,163,10,
0,0,110,2,122,4,128,119,222,116,216,12,64,201,99,218,20,2,0,8,
192,201,34,172,3,144,201,116,2,144,75,193,177,149,152,101,233,21,128,198,
180,201,4,0,16,128,217,206,214,152,41,220,4,116,148,29,207,165,192,141,
105,19,10,0,32,0,145,198,34,146,48,115,74,83,90,10,188,146,194,109,
113,106,136,220,55,13,121,76,155,68,0,0,1,48,214,250,141,187,211,90,
10,172,92,234,106,41,176,155,54,185,0,0,2,96,90,48,179,234,16,3,
144,234,82,68,138,3,2,96,90,184,229,190,30,75,129,221,44,113,191,49,
181,0,0,2,160,3,126,10,96,44,7,111,223,21,54,106,50,118,60,182,
15,77,41,0,128,0,168,153,13,55,0,166,114,208,102,160,132,51,161,6,
99,81,225,88,139,86,79,1,74,153,76,50,0,128,0,24,17,13,55,0,
234,177,20,152,156,78,150,2,35,0,240,5,16,128,216,204,138,131,2,32,
226,31,128,250,165,100,8,0,124,5,4,64,219,175,4,172,249,7,160,254,
141,233,5,0,16,0,103,58,1,112,132,141,254,22,128,76,146,99,13,0,
32,0,8,192,51,4,0,16,0,34,29,120,0,106,126,1,240,88,10,92,
39,99,122,1,0,4,96,37,137,123,200,53,161,0,68,22,209,82,114,18,
161,134,212,84,146,22,1,200,101,69,138,199,128,83,133,247,1,232,36,55,
3,105,167,223,10,160,211,92,8,4,8,64,174,194,60,216,165,192,205,101,
56,251,136,84,88,52,162,149,82,67,106,49,51,63,90,218,98,154,209,74,
68,114,82,69,0,160,127,120,33,136,231,230,157,230,87,138,251,108,46,50,
86,170,120,109,7,254,241,243,159,111,0,157,250,231,231,15,255,0,136,22,
28,235,240,2,224,177,121,135,69,229,175,1,200,84,181,96,107,53,173,226,
19,128,159,223,0,122,240,211,59,0,74,194,54,146,183,2,251,63,184,115,
27,160,219,4,192,241,8,192,127,190,1,244,226,63,19,15,128,219,188,51,
234,0,224,243,31,122,243,115,218,1,112,39,243,152,3,240,227,27,64,111,
126,248,7,32,147,105,5,160,144,194,45,247,109,254,108,189,85,88,100,255,
205,64,78,251,0,224,2,0,250,246,211,63,0,204,211,10,128,211,254,243,
188,201,88,125,191,29,24,247,255,161,71,255,248,4,160,36,67,123,41,168,
199,230,157,198,163,62,143,0,56,202,234,23,128,111,0,61,234,34,0,52,
232,0,148,218,7,224,209,186,8,64,106,49,199,150,82,110,19,10,0,32,
0,78,72,149,171,96,96,1,240,88,188,171,45,78,113,143,101,69,211,9,
0,32,0,193,100,2,144,90,220,105,0,10,41,166,26,0,64,0,156,161,
4,192,159,49,119,26,0,37,29,79,0,0,1,64,0,68,43,71,24,0,
64,0,16,0,165,78,32,0,128,0,32,0,110,49,50,2,0,8,192,17,
6,192,65,0,0,1,24,69,0,10,169,116,25,128,71,67,0,0,1,56,
194,167,0,21,35,4,0,16,128,35,11,128,113,102,102,49,254,9,0,8,
192,113,6,64,136,72,17,0,64,0,198,19,128,37,85,152,187,8,128,226,
38,32,140,60,0,179,103,242,108,86,186,10,14,51,219,118,53,228,0,196,
86,233,42,0,133,148,16,0,24,107,0,104,219,34,104,175,57,100,200,1,
112,58,9,192,4,182,3,3,2,96,78,74,183,179,202,93,16,220,205,42,
65,237,202,253,240,195,33,87,239,156,200,245,148,241,7,32,179,24,1,128,
209,7,128,29,37,39,124,107,43,224,204,253,240,195,33,179,119,78,228,122,
202,248,3,80,154,64,0,0,1,72,68,164,224,216,82,34,51,203,233,105,
177,120,162,220,204,136,22,181,91,74,95,126,24,126,56,228,118,241,150,255,
171,2,224,166,124,213,102,32,135,60,69,26,51,175,231,33,0,48,234,0,
184,7,90,230,142,74,194,204,205,15,61,161,240,195,33,111,11,171,0,52,
167,96,41,48,192,80,2,32,34,75,34,83,213,130,153,85,117,85,29,149,
170,83,247,105,81,58,121,111,136,86,140,104,165,107,15,244,180,208,103,183,
95,25,128,72,141,74,75,233,102,154,76,44,0,128,0,84,148,107,178,57,
170,78,221,202,236,189,33,92,81,34,217,140,113,252,3,224,77,152,58,161,
83,8,0,32,0,133,106,245,189,185,90,90,237,94,1,152,10,75,125,5,
80,104,41,162,235,240,228,239,67,152,215,255,109,82,13,137,185,168,175,7,
226,233,4,32,178,10,2,0,211,120,10,192,220,188,7,160,245,205,110,99,
199,170,159,59,205,33,238,247,214,67,172,113,61,48,137,0,56,8,0,140,
252,10,160,148,19,61,42,51,11,69,170,209,58,0,182,14,128,233,138,220,
21,64,193,153,68,141,0,84,87,0,133,228,252,76,68,138,215,1,80,73,
56,254,226,43,0,101,7,1,128,26,238,1,56,213,145,49,219,58,0,186,
14,128,178,144,187,7,32,236,126,190,182,123,15,128,157,87,1,168,126,173,
223,123,0,81,92,240,158,138,56,162,15,165,75,225,61,201,50,69,0,96,
164,1,120,250,127,85,173,3,64,244,96,205,127,2,180,9,128,85,162,79,
14,64,148,112,11,201,135,5,72,51,110,33,75,17,0,24,97,0,220,249,
184,21,128,48,252,48,0,179,160,214,12,0,173,125,114,0,98,110,37,238,
126,30,2,0,35,14,64,194,47,110,202,0,228,198,37,217,124,155,198,123,
1,112,98,75,115,227,138,238,6,32,178,172,239,155,128,9,183,146,116,63,
15,1,128,17,7,96,115,126,134,180,121,38,160,45,2,160,244,172,17,128,
207,122,10,192,45,117,63,15,1,128,17,110,7,118,1,168,133,119,51,250,
192,118,0,182,221,210,62,16,0,4,0,6,28,0,119,228,15,1,64,0,
224,107,4,29,187,10,169,149,235,171,192,31,2,0,48,140,0,132,109,159,
179,95,35,0,8,0,140,48,0,179,183,46,217,47,219,63,103,191,156,72,
0,16,0,64,0,254,219,254,185,248,53,2,128,0,192,24,3,96,92,115,
143,237,78,169,224,118,136,38,18,0,4,0,16,0,34,70,0,16,0,24,
62,4,0,1,0,8,246,118,127,193,59,132,242,245,142,222,76,68,214,59,
1,15,57,33,120,227,226,30,1,64,0,96,128,1,248,53,231,87,132,104,
235,53,97,190,1,112,230,191,16,0,4,0,6,23,128,57,191,21,128,92,
165,227,0,240,60,168,13,99,51,16,2,0,8,192,61,55,184,189,189,29,
7,128,239,251,13,192,13,183,114,211,253,60,4,0,70,23,128,11,102,150,
232,141,151,94,139,22,28,171,42,75,7,159,136,145,48,243,69,224,140,226,
133,32,121,187,121,57,2,0,35,253,122,240,136,118,184,29,188,194,165,78,
2,64,209,39,124,57,104,126,195,123,187,201,247,152,39,188,55,201,9,1,
128,33,241,57,193,140,111,44,162,220,50,102,182,188,139,0,144,127,0,6,
110,66,1,0,4,64,155,223,16,134,0,32,0,112,28,1,72,215,95,126,
157,155,25,2,128,0,28,21,4,160,164,172,84,65,0,16,128,163,131,127,
2,148,108,247,91,116,18,4,0,1,56,18,8,64,34,197,235,0,196,61,
63,23,71,0,0,134,115,19,80,95,7,32,234,249,185,56,2,0,3,134,
0,180,125,206,62,165,0,32,0,128,0,180,135,0,32,0,163,132,0,136,
10,199,255,99,239,14,118,219,54,210,0,142,251,22,221,6,48,154,57,229,
5,10,20,197,162,75,202,29,77,213,145,12,83,46,246,253,31,104,203,80,
142,164,4,222,88,41,232,165,253,253,254,55,34,62,228,194,31,196,153,111,
200,58,0,0,0,17,3,192,49,0,0,32,110,0,232,43,0,0,16,54,
0,180,4,0,0,132,13,0,187,2,0,0,204,144,172,1,0,64,2,0,
0,36,0,0,64,90,8,0,167,202,18,0,0,128,4,0,0,72,0,0,
128,52,255,27,129,166,118,75,1,0,0,146,69,64,0,72,70,129,1,32,
25,5,6,128,52,3,0,93,217,212,90,11,0,0,160,136,0,180,233,235,
128,0,0,128,162,2,112,40,131,195,64,0,80,84,0,170,93,0,0,40,
50,0,213,32,208,34,1,144,0,0,0,9,0,0,144,102,0,96,215,250,
220,27,5,6,128,98,2,112,10,0,225,0,144,65,160,29,0,0,32,163,
192,0,0,128,2,2,208,213,226,48,16,0,20,19,128,177,234,48,16,0,
20,21,128,125,25,124,23,0,0,178,6,0,0,0,40,32,0,125,235,243,
163,57,0,0,40,38,0,53,213,220,76,2,2,64,0,0,0,0,20,16,
128,7,0,0,64,113,1,176,8,8,128,160,217,6,60,164,106,27,16,0,
138,9,64,242,78,64,0,40,54,0,135,82,202,30,0,0,80,76,0,94,
229,134,0,128,4,0,0,72,0,0,128,4,0,0,72,0,0,128,4,0,
0,72,0,0,128,4,0,0,72,0,0,128,4,0,0,72,0,0,128,4,
128,174,31,242,11,27,250,238,61,1,32,1,160,91,231,43,90,119,239,8,
0,9,0,125,190,170,254,29,1,32,1,96,157,175,106,253,142,0,144,0,
144,175,236,237,3,32,1,0,0,18,0,0,32,1,0,0,18,0,0,160,
69,5,128,246,119,183,99,175,0,0,0,164,165,78,218,189,2,0,0,144,
150,52,105,247,80,158,74,233,246,175,217,1,0,128,180,164,73,187,122,126,
215,221,190,61,0,0,32,0,12,63,122,131,237,203,144,159,42,247,175,0,
0,0,164,229,220,96,45,159,85,0,0,0,5,3,224,62,61,5,0,0,
40,28,0,245,121,0,28,6,146,34,0,80,243,204,0,108,242,85,109,0,
240,58,9,0,125,235,62,3,176,111,39,0,188,16,68,97,178,8,88,63,
3,48,235,34,96,218,111,242,139,219,236,19,0,230,79,0,152,182,1,107,
106,53,165,89,183,1,151,20,0,4,128,83,53,215,52,118,57,8,4,0,
41,8,0,165,214,218,165,90,79,163,192,0,144,194,0,48,214,46,15,3,
1,64,81,178,6,48,182,43,41,253,117,7,0,0,40,232,40,112,74,55,
167,0,240,134,18,0,214,255,100,14,160,207,143,109,7,0,0,40,202,113,
224,205,197,36,96,205,45,21,0,0,32,74,94,8,178,255,255,1,0,0,
105,1,147,118,0,0,128,188,20,116,2,192,34,32,0,20,18,128,125,57,
164,122,220,6,252,0,0,0,40,22,0,99,245,56,8,180,2,0,0,20,
11,128,174,214,90,114,206,125,5,0,0,20,14,128,249,7,129,0,32,1,
0,0,18,0,0,160,5,5,128,109,155,218,1,0,0,138,6,192,169,2,
0,0,8,0,83,0,144,0,0,0,201,34,32,0,164,0,0,252,6,0,
0,40,38,0,70,129,1,160,144,135,129,166,14,13,0,0,144,69,192,41,
0,72,209,0,240,86,96,0,40,48,0,190,11,0,0,133,3,160,213,177,
33,215,10,0,0,40,28,0,53,63,5,0,0,40,220,46,192,0,0,0,
200,32,16,0,0,160,128,0,244,109,108,151,91,3,0,0,2,230,181,224,
201,46,0,0,4,128,213,10,0,0,80,208,71,0,135,129,0,160,176,219,
128,14,3,1,32,100,222,9,216,231,177,199,6,0,0,200,11,65,166,0,
32,197,0,96,87,75,222,212,1,0,0,80,68,0,124,30,252,50,0,8,
0,0,144,0,0,0,41,0,0,187,178,6,0,0,20,21,0,187,0,0,
80,208,57,128,46,85,115,0,0,80,76,0,198,234,156,147,128,0,144,124,
24,4,0,146,73,192,43,254,87,53,165,84,114,206,0,208,50,3,192,199,
156,243,195,252,0,108,91,107,93,74,251,214,90,122,65,221,247,254,238,33,
231,252,11,0,116,202,151,129,126,104,27,240,83,206,121,183,157,27,128,233,
106,186,184,98,73,227,217,182,187,156,243,39,0,252,195,228,203,64,63,231,
81,128,135,185,1,24,145,58,92,2,208,181,99,251,243,171,233,199,66,159,
115,126,60,94,77,93,24,245,176,203,127,247,47,0,252,120,2,192,212,167,
60,71,229,18,128,169,203,139,154,143,149,243,171,81,142,83,151,95,62,205,
23,253,116,3,128,127,154,0,240,235,199,87,0,160,142,181,233,162,142,61,
76,183,124,95,235,125,30,198,171,86,199,114,174,135,174,214,186,155,254,173,
118,181,207,165,214,58,228,190,126,5,192,199,95,1,240,37,1,224,112,253,
113,224,163,0,159,230,7,32,143,213,241,226,88,57,61,231,79,87,83,231,
191,7,218,55,207,17,249,172,159,206,238,127,0,8,0,229,180,11,112,109,
63,127,250,56,51,0,181,63,1,80,107,237,243,80,219,211,77,94,107,61,
156,126,1,228,146,186,253,17,128,246,28,0,191,124,250,234,249,31,0,2,
192,99,27,1,88,70,171,255,181,11,48,93,29,1,248,118,69,224,246,238,
8,192,221,244,135,47,208,13,0,2,64,75,75,2,96,219,106,30,74,41,
235,17,166,231,1,248,227,238,238,238,54,29,202,240,121,213,255,18,128,255,
0,224,133,9,0,251,182,77,191,175,150,3,192,229,2,254,179,0,140,255,
227,187,139,245,128,19,0,9,0,2,192,21,173,110,150,210,111,171,187,180,
61,110,231,111,83,42,187,156,243,80,14,37,231,92,74,217,229,93,235,206,
1,232,90,159,119,165,148,39,0,186,182,251,124,189,109,143,167,159,17,0,
120,46,1,160,252,221,234,183,155,229,180,58,31,232,203,83,245,114,23,224,
4,192,215,107,0,41,149,111,231,0,0,32,0,124,255,112,204,98,126,3,
252,145,166,126,255,222,143,150,15,227,159,158,186,253,176,250,119,250,166,239,
60,223,0,64,0,88,86,119,105,106,245,253,167,150,187,11,0,110,110,110,
175,126,190,1,128,0,176,240,254,92,173,62,220,28,251,240,231,203,126,70,
220,92,19,0,4,0,1,64,0,0,128,4,0,0,72,0,88,76,0,16,
0,186,122,214,1,0,0,8,21,0,90,62,171,0,0,0,2,64,234,250,
33,191,176,161,239,0,0,128,247,20,0,186,117,190,162,117,7,0,0,188,
213,0,176,105,79,125,1,160,207,87,213,3,0,0,111,53,0,212,244,212,
23,0,134,124,93,0,0,192,91,13,0,235,114,72,99,165,124,1,32,3,
0,0,97,178,6,80,211,88,206,0,0,64,184,12,2,213,203,251,24,0,
0,136,20,0,30,1,0,128,200,25,5,174,199,187,24,0,0,8,24,0,
14,101,157,119,5,0,0,8,25,0,166,23,121,3,0,0,10,122,24,104,
200,125,5,0,0,2,103,20,24,0,0,8,28,0,238,43,0,0,16,54,
0,216,6,4,64,184,0,176,109,99,187,252,216,0,0,0,5,222,5,56,
251,199,53,0,0,16,55,0,244,249,170,54,0,0,192,59,10,0,87,190,
16,100,15,0,0,232,237,30,6,170,233,235,246,155,252,226,54,251,4,0,
0,188,213,44,2,246,185,111,219,180,111,94,11,14,0,5,221,6,108,169,
100,0,0,32,96,0,24,202,0,0,0,40,238,59,1,43,0,102,8,0,
2,128,0,32,0,44,52,0,8,0,187,90,242,166,14,0,0,128,28,7,
6,0,0,2,6,128,199,6,0,0,132,13,0,45,1,0,0,17,51,9,
232,17,0,0,242,97,16,0,0,64,22,1,1,0,128,88,249,56,232,20,
0,0,16,56,159,7,7,192,12,1,64,0,0,128,4,128,229,5,0,1,
160,212,41,0,204,16,0,100,23,0,0,18,0,0,32,1,96,65,1,64,
0,216,180,169,93,1,0,0,20,118,23,32,103,0,0,64,62,14,10,0,
0,44,44,1,0,0,18,0,0,32,205,112,24,104,12,0,0,144,81,96,
0,0,32,74,0,216,151,67,26,59,84,0,0,32,92,0,56,54,195,119,
1,4,0,1,64,0,16,0,22,25,0,4,128,135,50,182,206,118,1,0,
16,48,0,84,115,0,0,80,220,93,128,1,0,0,144,73,64,0,0,32,
96,0,184,79,99,37,111,19,0,0,16,46,0,84,187,0,0,16,0,0,
0,128,176,25,5,190,47,0,0,64,128,0,48,123,0,0,128,0,32,0,
8,0,2,128,0,0,0,9,0,0,144,0,0,0,9,0,0,144,0,0,
0,9,0,0,144,0,0,0,9,0,0,144,0,240,227,1,64,0,248,235,
246,84,123,4,0,0,66,5,128,219,116,86,3,0,0,130,245,95,246,206,
64,67,118,24,10,195,3,76,129,67,145,7,89,237,228,102,207,118,79,83,
183,83,230,253,31,232,54,167,167,38,115,37,172,185,104,47,255,7,254,95,
228,4,244,235,110,202,46,4,48,5,99,34,34,166,119,73,99,52,220,215,
16,169,78,118,138,191,28,11,4,0,32,128,224,140,64,68,11,189,137,142,
209,192,107,144,255,71,0,16,0,128,0,236,143,127,50,101,176,75,200,187,
2,48,163,24,214,108,209,78,131,0,32,128,211,2,1,44,255,38,128,91,
81,0,211,139,0,190,154,196,199,5,2,0,224,12,2,176,135,215,158,215,
189,137,51,82,179,196,246,204,27,82,249,21,128,51,1,136,123,146,235,166,
185,64,0,0,28,41,0,17,89,220,45,220,139,2,208,165,141,40,162,121,
118,189,12,5,1,12,18,183,93,81,86,34,209,111,234,36,145,6,70,221,
232,220,24,130,202,160,151,196,64,191,26,8,0,128,51,92,2,22,5,160,
197,176,172,43,5,1,136,11,219,90,112,251,46,206,198,87,126,168,32,8,
0,128,35,5,16,18,92,17,64,24,221,40,137,65,23,230,53,245,101,1,
200,226,198,109,109,10,219,136,78,62,245,141,175,109,232,108,228,67,5,48,
235,191,28,93,132,8,2,0,224,72,1,144,81,191,3,200,111,0,246,214,
188,142,201,144,215,17,214,90,111,221,239,87,142,118,56,4,0,142,5,2,
104,87,30,21,1,116,156,8,174,231,46,189,184,121,163,43,8,96,230,254,
39,2,104,33,0,8,224,84,64,0,41,251,178,0,20,107,186,96,20,4,
16,72,126,34,0,130,0,32,128,19,2,1,8,207,174,103,158,244,171,29,
143,206,173,141,120,99,92,243,176,176,187,105,19,106,253,245,239,49,124,167,
142,83,16,253,158,112,227,123,92,235,39,51,155,0,246,3,24,2,128,0,
206,7,4,64,218,148,192,22,232,229,194,126,111,76,190,48,38,97,95,1,
148,160,117,207,237,243,0,8,0,2,56,7,16,64,20,177,139,248,198,63,
180,41,177,179,64,178,51,208,23,237,173,35,95,26,227,91,74,251,6,27,
19,73,171,229,246,121,192,160,35,200,118,65,0,224,40,32,128,141,188,213,
105,178,236,139,99,60,213,105,107,7,64,0,224,24,32,128,239,102,35,111,
117,62,178,124,45,142,185,54,117,190,107,7,252,105,231,142,105,24,128,66,
48,12,18,70,28,188,129,17,255,22,107,162,164,52,185,19,241,241,79,8,
0,191,231,37,24,2,128,0,32,0,8,0,2,128,0,32,0,8,0,2,
128,0,16,2,128,0,32,0,8,0,2,128,0,32,0,8,0,2,128,0,
32,0,8,0,2,128,0,32,0,8,0,2,128,0,32,0,8,0,2,128,
0,32,0,8,0,9,2,32,0,32,0,2,0,2,32,0,32,0,2,0,
2,32,0,32,0,2,0,2,32,0,32,0,2,0,2,32,0,32,0,2,
0,2,32,0,32,0,2,0,2,32,0,16,220,86,185,6,42,184,109,114,
13,76,112,91,231,26,232,192,4,192,0,224,172,151,43,224,5,54,0,238,
63,167,245,84,126,21,212,116,252,5,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,224,3,138,117,188,89,197,59,140,61,0,0,0,0,73,
69,78,68,174,66,96,130
};

const char* PatchEditor::patchEditorBackdrop_png = (const char*) resource_PatchEditor_patchEditorBackdrop_png;
const int PatchEditor::patchEditorBackdrop_pngSize = 8427;

// JUCER_RESOURCE: liveModeButtonNormal_png, 990, "../../UI/LiveModeButtonNormal.png"
static const unsigned char resource_PatchEditor_liveModeButtonNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,95,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,25,15,145,23,16,145,23,
17,142,24,16,144,25,17,142,24,16,144,23,16,144,24,16,144,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,66,112,193,77,136,
204,66,111,192,28,23,148,59,95,184,45,64,168,73,127,200,80,143,208,42,
56,163,74,132,202,76,134,203,38,48,160,54,84,178,25,20,145,73,128,201,
30,31,151,25,19,146,77,135,204,55,89,180,52,80,176,63,104,188,56,88,
180,70,120,196,59,96,185,52,79,176,49,72,172,75,133,202,35,40,155,56,
90,181,32,34,153,77,138,205,41,53,163,72,126,199,28,26,148,78,141,207,
79,142,207,44,63,168,67,114,193,74,130,200,74,129,201,78,140,206,60,99,
186,77,138,204,43,60,166,79,143,207,78,139,205,44,60,167,76,135,203,73,
128,200,35,41,157,48,71,171,63,105,188,34,41,156,37,47,160,65,111,191,
61,100,186,74,131,202,25,20,146,57,91,182,37,44,158,33,36,154,32,36,
154,36,44,158,70,122,197,53,82,177,51,76,174,41,54,164,74,130,201,78,
139,206,63,106,188,27,22,148,75,132,202,28,25,149,51,78,175,37,45,159,
71,123,197,33,37,154,27,22,147,69,118,195,26,20,146,42,58,166,33,37,
155,48,70,171,26,21,147,63,107,189,67,115,193,53,83,177,29,29,151,58,
94,183,71,123,198,40,51,161,39,49,161,68,117,195,75,131,201,36,43,158,
41,55,164,51,79,175,49,71,172,52,81,176,163,10,156,117,0,0,0,16,
116,82,78,83,0,242,189,191,134,79,77,243,61,190,78,244,253,136,241,122,
47,4,21,119,0,0,2,30,73,68,65,84,120,94,205,150,101,111,228,48,
16,134,189,187,189,246,10,119,247,78,120,153,25,203,204,61,102,102,102,198,
255,175,243,198,142,78,219,52,39,53,221,74,126,190,120,198,35,59,79,172,
140,21,198,216,137,216,36,20,99,114,124,130,113,78,65,73,70,248,153,33,
219,209,73,49,244,82,22,163,44,134,14,41,72,9,227,108,12,58,41,200,
54,34,12,32,37,1,2,213,226,241,56,133,66,46,149,209,49,168,233,0,
18,20,138,10,128,170,27,153,64,251,184,213,54,28,199,105,29,70,237,151,
115,143,46,57,15,2,212,90,124,187,141,161,168,201,236,48,106,64,133,218,
64,128,90,2,128,62,36,181,205,116,58,253,152,104,198,48,140,30,209,60,
31,110,138,140,179,120,176,218,45,163,43,213,238,26,130,249,125,106,61,57,
159,26,198,183,214,4,80,147,53,145,113,76,191,154,68,170,85,33,208,247,
169,213,32,168,28,69,109,213,226,92,24,84,251,108,125,193,87,219,182,11,
47,173,179,126,181,31,118,30,63,237,2,208,94,182,182,120,102,219,143,112,
101,149,104,217,234,115,14,64,203,250,131,60,159,127,134,61,107,59,188,154,
9,55,27,80,171,138,247,149,93,232,239,208,4,106,110,205,235,215,54,96,
138,154,96,71,108,41,246,12,175,150,185,125,176,218,122,163,209,184,28,160,
118,177,252,208,167,150,108,172,227,106,185,92,190,38,213,174,243,245,55,194,
171,121,153,95,77,18,160,198,241,169,213,0,52,101,27,236,64,50,28,181,
111,245,93,220,89,88,216,66,190,110,244,213,126,215,93,238,135,85,219,173,
11,138,195,184,215,18,3,125,231,245,86,88,181,68,232,123,109,246,188,96,
102,250,137,155,117,136,158,106,93,224,185,246,130,232,187,246,10,175,251,213,
233,255,171,165,180,55,232,242,77,222,226,221,251,77,237,3,62,242,120,22,
64,74,251,36,31,176,24,66,205,163,102,138,177,73,94,167,185,248,238,53,
191,154,239,94,171,192,35,252,189,22,207,253,99,110,73,140,69,226,36,115,
185,37,114,41,138,42,207,6,89,225,147,107,110,196,215,37,137,214,114,130,
184,172,121,217,156,140,86,130,212,34,170,254,74,158,102,49,148,72,65,50,
136,178,9,100,75,69,229,206,44,83,152,58,201,216,8,84,100,234,12,227,
140,70,199,160,24,145,40,63,179,191,81,18,51,164,139,166,64,46,0,0,
0,0,73,69,78,68,174,66,96,130
};

const char* PatchEditor::liveModeButtonNormal_png = (const char*) resource_PatchEditor_liveModeButtonNormal_png;
const int PatchEditor::liveModeButtonNormal_pngSize = 990;

// JUCER_RESOURCE: liveModeButtonOver_png, 1003, "../../UI/LiveModeButtonOver.png"
static const unsigned char resource_PatchEditor_liveModeButtonOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,107,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,144,23,
16,145,24,16,144,24,16,144,24,16,144,25,15,145,23,17,142,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,187,179,102,227,218,
91,185,177,103,158,150,110,105,97,123,239,231,89,160,152,109,212,204,96,91,
83,126,29,22,142,214,206,95,49,41,137,221,213,92,146,139,112,132,124,116,
173,164,105,64,56,133,146,137,112,37,29,141,226,218,92,200,191,98,131,123,
116,78,70,130,118,110,119,148,141,112,139,131,114,40,32,140,231,223,90,163,
156,108,229,221,91,103,96,123,209,201,96,230,222,91,213,205,95,233,225,90,
88,79,128,29,21,143,215,207,95,235,227,89,218,211,93,100,91,125,66,58,
133,216,208,94,224,216,92,54,46,136,98,90,125,236,228,89,238,230,88,190,
181,101,225,217,92,118,109,120,65,58,133,135,127,115,223,215,92,150,143,111,
117,108,120,130,122,116,60,51,134,126,117,117,72,63,131,58,49,135,30,22,
142,166,158,107,195,187,100,129,121,117,219,212,94,89,81,128,174,166,105,57,
49,135,71,63,132,232,224,91,220,212,93,35,27,141,39,31,140,74,66,131,
204,196,97,175,167,104,55,47,136,34,26,141,76,68,130,203,195,98,95,87,
126,60,52,135,133,125,116,116,107,120,33,25,142,176,169,104,190,182,101,136,
128,115,46,39,138,156,148,110,204,197,98,83,75,129,80,72,130,197,189,99,
218,209,94,31,23,142,70,62,133,217,209,94,28,21,143,90,82,127,218,210,
94,184,176,102,234,119,53,48,0,0,0,16,116,82,78,83,0,191,242,189,
244,78,79,190,253,243,134,77,61,136,241,122,133,12,85,184,0,0,2,31,
73,68,65,84,120,94,205,150,101,143,227,64,12,134,167,221,221,91,58,120,
29,42,50,195,50,51,30,51,51,51,51,253,252,243,78,38,138,218,108,78,
218,92,78,202,243,165,246,88,227,62,26,213,86,133,16,135,98,253,136,24,
253,131,3,130,57,130,72,50,194,111,134,76,91,167,136,161,23,50,24,21,
49,180,41,130,20,48,40,134,161,83,4,217,69,92,0,20,73,0,95,181,
68,34,65,1,113,175,114,16,190,154,14,32,77,129,40,1,168,200,168,10,
148,255,183,218,118,42,149,202,31,68,237,108,234,54,253,74,221,245,81,203,
115,187,237,80,212,84,118,16,53,160,68,101,192,71,45,13,64,15,73,109,
188,217,108,94,37,154,54,12,99,134,104,139,63,158,218,25,179,179,191,218,
73,99,67,169,125,55,108,182,122,212,102,212,249,169,48,126,107,45,0,117,
167,198,153,164,234,85,83,40,181,138,10,245,30,181,58,108,74,255,162,54,
97,50,191,187,213,62,152,31,241,201,178,172,133,175,230,13,175,218,55,43,
135,159,214,2,171,45,154,43,156,89,214,61,156,158,32,90,52,247,56,1,
32,111,190,64,142,207,207,225,140,185,27,92,173,10,153,117,169,85,0,148,
220,41,244,76,104,26,117,89,115,230,181,12,84,101,77,49,43,91,170,158,
193,213,58,231,247,87,219,108,52,26,151,124,212,46,23,239,120,212,174,53,
54,113,161,88,44,94,84,106,55,249,254,173,160,106,110,230,85,83,248,168,
49,30,181,58,128,150,26,131,89,40,194,81,187,146,92,197,245,169,169,21,
228,146,6,171,225,120,82,242,48,168,218,106,210,166,22,198,94,75,119,205,
157,51,91,65,213,210,129,247,218,216,19,155,233,249,251,50,107,19,61,208,
30,1,143,181,207,68,95,180,103,120,190,87,157,255,187,218,186,246,18,27,
220,228,21,94,191,25,215,222,226,29,199,99,0,214,181,247,234,11,118,2,
168,57,212,171,144,180,200,153,52,137,187,215,124,213,60,123,205,157,208,224,
123,45,145,117,89,90,179,131,26,49,203,217,236,26,73,106,178,200,89,15,
115,124,56,41,35,190,183,76,52,169,218,36,84,205,201,150,84,52,231,167,
22,143,234,95,201,163,34,134,2,69,144,14,250,196,0,50,133,90,228,222,
172,243,99,232,176,16,35,136,34,67,199,4,51,218,55,140,136,17,239,227,
55,251,3,147,173,52,56,99,92,57,6,0,0,0,0,73,69,78,68,174,
66,96,130
};

const char* PatchEditor::liveModeButtonOver_png = (const char*) resource_PatchEditor_liveModeButtonOver_png;
const int PatchEditor::liveModeButtonOver_pngSize = 1003;

// JUCER_RESOURCE: liveModeButtonDown_png, 964, "../../UI/LiveModeButtonDown.png"
static const unsigned char resource_PatchEditor_liveModeButtonDown_png[] = {
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

const char* PatchEditor::liveModeButtonDown_png = (const char*) resource_PatchEditor_liveModeButtonDown_png;
const int PatchEditor::liveModeButtonDown_pngSize = 964;

// JUCER_RESOURCE: patchEditorButtonDown_png, 898, "../../UI/PatchEditorButtonDown.png"
static const unsigned char resource_PatchEditor_patchEditorButtonDown_png[] = {
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

const char* PatchEditor::patchEditorButtonDown_png = (const char*) resource_PatchEditor_patchEditorButtonDown_png;
const int PatchEditor::patchEditorButtonDown_pngSize = 898;

// JUCER_RESOURCE: downArrowNormal_png, 241, "../../UI/DownArrowNormal.png"
static const unsigned char resource_PatchEditor_downArrowNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,14,
0,0,0,12,8,6,0,0,0,82,128,140,218,0,0,0,184,73,68,65,
84,120,218,99,8,152,112,113,107,192,132,11,255,73,193,254,19,47,108,97,
250,247,239,79,62,3,3,195,79,6,226,193,175,255,255,25,139,193,44,255,
9,23,187,136,182,177,255,66,39,220,8,191,206,27,188,64,193,103,68,104,
124,17,218,113,134,31,197,254,128,254,243,9,132,52,6,78,60,31,143,233,
114,160,195,129,146,39,240,104,60,211,208,240,159,9,171,175,3,38,94,50,
6,42,248,139,69,211,63,96,56,152,227,13,50,160,162,249,24,78,156,112,
97,30,193,176,246,155,112,89,60,96,226,133,15,72,26,63,5,245,159,145,
36,42,162,2,39,156,47,69,68,246,197,18,162,99,56,180,225,42,27,80,
211,13,32,190,237,57,233,54,59,3,41,192,127,226,121,47,16,198,37,15,
0,108,202,228,90,43,220,240,66,0,0,0,0,73,69,78,68,174,66,96,
130
};

const char* PatchEditor::downArrowNormal_png = (const char*) resource_PatchEditor_downArrowNormal_png;
const int PatchEditor::downArrowNormal_pngSize = 241;

// JUCER_RESOURCE: newRowNormal_png, 834, "../../UI/NewRowNormal.png"
static const unsigned char resource_PatchEditor_newRowNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,14,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,144,24,
16,144,25,17,142,23,17,142,24,16,144,23,16,145,25,15,145,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,59,95,184,80,144,208,52,80,
176,38,48,159,66,111,192,31,32,151,59,96,185,45,64,168,73,128,200,66,
112,193,77,136,204,55,89,180,73,128,201,54,84,178,67,114,193,32,36,154,
52,79,176,45,64,167,75,132,202,66,112,192,51,76,174,80,143,208,25,20,
145,31,32,152,49,72,172,78,139,205,37,47,160,76,137,204,73,127,200,68,
116,194,67,116,194,34,40,156,59,96,184,70,120,196,62,102,186,79,140,206,
25,20,146,37,46,159,67,115,193,74,132,202,56,90,181,42,58,166,27,22,
147,28,23,148,74,130,201,42,56,163,28,26,149,33,36,154,50,76,174,48,
72,172,30,28,150,46,66,170,62,102,187,72,124,198,55,86,179,29,29,151,
36,44,158,29,28,150,61,100,186,56,88,180,55,88,180,35,40,155,78,139,
206,71,124,198,76,134,203,79,142,208,76,135,203,69,120,197,77,135,204,25,
19,146,44,63,168,49,74,173,72,126,199,101,40,40,52,0,0,0,16,116,
82,78,83,0,242,191,189,243,78,244,61,77,190,79,134,253,136,241,122,53,
169,196,6,0,0,1,211,73,68,65,84,120,94,205,150,229,142,220,48,20,
133,61,176,188,109,143,29,132,97,198,101,166,34,51,195,251,191,72,175,114,
227,118,171,105,182,179,146,71,242,247,231,228,40,114,242,233,202,1,33,196,
122,113,25,150,177,188,182,36,136,59,176,146,13,154,25,250,167,137,178,140,
164,210,199,170,40,226,84,89,72,5,107,162,140,68,89,200,103,20,4,160,
172,4,152,67,173,215,235,233,152,155,94,198,98,213,92,164,246,29,10,71,
205,137,131,12,127,225,106,211,203,219,171,61,30,12,6,120,49,61,89,176,
26,252,219,171,117,40,41,220,69,171,189,242,222,176,218,158,151,178,167,84,
68,145,40,226,61,245,15,55,169,69,30,163,84,66,17,165,2,219,158,183,
109,70,141,113,116,131,171,111,79,68,0,90,55,169,57,96,174,111,88,31,
240,141,170,213,101,3,103,97,120,134,134,172,179,218,190,204,83,123,40,165,
196,121,88,251,41,175,112,20,134,225,57,228,62,171,213,229,137,121,181,22,
69,148,205,137,213,124,112,203,127,66,119,41,118,179,57,177,90,11,29,115,
106,206,163,63,106,195,102,115,168,213,90,205,11,80,203,85,115,222,206,170,
185,205,119,233,58,67,106,42,210,106,12,171,105,242,213,168,204,168,105,76,
169,141,130,174,86,123,30,164,28,127,9,142,144,241,32,56,158,85,235,6,
247,241,253,199,223,106,237,224,9,52,193,83,163,95,3,222,107,26,106,140,
251,239,247,154,63,179,215,184,49,134,63,84,207,226,29,188,28,19,67,173,
246,58,206,87,219,138,113,56,30,182,227,16,13,90,114,136,120,139,213,186,
241,142,121,53,110,90,134,103,200,109,190,247,154,158,161,107,70,173,93,173,
86,41,14,40,38,220,136,182,34,62,210,193,39,197,237,111,38,116,230,64,
41,62,71,141,81,196,136,114,196,215,252,175,90,193,214,95,201,187,162,136,
138,178,144,26,74,98,9,253,202,87,235,102,86,251,182,185,34,196,6,108,
100,243,158,32,86,75,101,88,70,161,68,51,251,5,149,177,39,113,192,140,
185,51,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* PatchEditor::newRowNormal_png = (const char*) resource_PatchEditor_newRowNormal_png;
const int PatchEditor::newRowNormal_pngSize = 834;

// JUCER_RESOURCE: newRowOver_png, 837, "../../UI/NewRowOver.png"
static const unsigned char resource_PatchEditor_newRowOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,14,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,144,24,
16,144,25,17,142,23,17,142,24,16,144,23,16,145,25,15,145,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,158,150,110,132,124,
116,77,69,130,185,177,103,50,42,137,160,152,109,105,97,123,213,205,95,187,
179,102,227,218,91,231,223,90,214,206,95,139,131,114,190,181,101,57,49,135,
104,96,123,118,110,119,146,139,112,186,178,102,220,212,93,239,231,89,126,117,
117,29,22,142,51,43,137,131,123,116,212,204,96,148,141,112,95,87,126,34,
26,141,219,212,94,64,57,134,159,151,109,227,219,91,192,185,101,234,226,90,
30,22,142,74,67,131,190,182,101,193,185,100,169,161,106,200,191,98,76,68,
130,45,36,138,209,201,96,58,49,135,41,33,140,217,209,94,91,83,126,125,
117,118,118,111,120,109,101,123,170,161,106,207,199,97,143,134,113,46,39,138,
71,63,132,44,36,139,166,158,107,146,137,112,146,138,113,64,56,133,233,225,
90,206,199,97,224,216,92,237,229,89,225,217,92,200,192,99,226,218,92,28,
21,143,103,96,123,121,114,119,37,29,141,250,164,10,56,0,0,0,16,116,
82,78,83,0,242,191,189,243,78,244,61,77,190,79,134,253,136,241,122,53,
169,196,6,0,0,1,214,73,68,65,84,120,94,205,214,101,111,27,65,16,
199,225,181,157,164,73,147,182,255,217,67,48,51,132,25,202,204,140,223,255,
139,116,116,227,85,27,185,151,58,210,90,218,223,155,241,200,58,251,209,234,
12,74,169,155,229,21,56,214,202,218,178,226,110,193,201,214,249,204,48,220,
204,200,177,178,206,16,171,170,140,77,114,176,14,214,212,18,50,114,176,47,
40,41,128,156,12,152,131,214,239,247,205,152,187,254,180,197,210,124,228,250,
46,0,143,230,204,131,132,112,225,180,201,195,235,211,238,142,70,35,188,156,
236,44,152,134,240,250,180,46,79,0,254,162,105,175,131,183,66,59,15,242,
206,137,18,30,25,113,31,120,255,120,21,45,9,36,162,140,71,146,3,14,
130,224,192,14,77,242,204,6,223,188,61,151,0,104,93,69,243,32,253,125,
195,134,64,104,149,214,208,77,108,197,241,22,154,186,33,180,51,93,68,123,
172,181,198,118,92,191,167,31,225,56,142,227,109,232,51,161,53,244,142,125,
90,11,64,66,130,17,90,8,217,138,63,161,123,0,246,166,231,36,180,22,
186,246,104,222,147,63,180,246,120,220,54,180,214,248,23,120,43,164,121,239,
102,105,254,248,125,126,157,37,26,37,134,38,9,205,84,76,35,154,161,153,
172,209,170,209,192,208,94,68,121,39,95,163,99,72,184,31,157,204,210,6,
209,3,252,248,121,153,214,139,158,194,20,61,179,250,107,32,247,154,137,55,
201,255,247,247,90,56,115,175,201,38,17,89,165,61,79,119,241,234,130,107,
27,218,155,180,152,118,154,226,232,162,221,75,99,52,249,146,35,164,167,66,
27,164,187,246,105,178,25,140,156,161,108,243,125,175,153,51,244,237,208,122,
181,90,141,199,33,143,125,217,184,30,113,159,248,193,103,146,237,114,251,252,
204,33,145,60,199,155,68,92,149,103,85,94,243,191,180,146,171,127,37,111,
171,50,58,228,96,117,84,212,50,134,157,111,206,157,89,253,251,198,13,165,
214,225,98,27,119,20,183,90,89,130,99,149,42,124,102,191,1,254,128,30,
43,23,122,56,164,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* PatchEditor::newRowOver_png = (const char*) resource_PatchEditor_newRowOver_png;
const int PatchEditor::newRowOver_pngSize = 837;

// JUCER_RESOURCE: newRowDown_png, 790, "../../UI/NewRowDown.png"
static const unsigned char resource_PatchEditor_newRowDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,252,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,25,15,145,24,16,144,24,
16,144,23,17,142,23,16,145,25,17,142,24,16,144,23,16,144,24,16,144,
24,17,144,24,16,144,23,17,144,80,144,208,24,16,144,45,65,168,52,80,
176,66,112,193,38,49,160,73,128,201,59,96,184,45,64,167,31,32,152,38,
48,159,24,17,144,29,28,150,55,88,180,26,21,147,53,84,178,38,48,160,
36,44,158,31,32,151,52,81,176,72,124,198,37,46,159,73,128,200,59,96,
185,37,45,159,28,23,148,67,114,193,45,64,168,67,113,192,30,28,150,70,
120,196,77,138,205,34,40,156,62,102,186,27,24,148,25,20,146,37,44,158,
42,58,166,75,131,201,74,132,202,79,140,206,31,33,152,76,137,204,49,74,
173,32,34,153,33,36,154,58,94,182,56,88,180,32,36,154,28,26,148,25,
18,144,43,60,166,26,20,146,49,72,172,30,30,151,71,124,198,76,134,203,
54,84,178,35,40,155,69,120,197,42,58,165,48,72,172,68,116,194,60,97,
184,55,86,179,50,76,174,62,104,189,75,132,202,122,71,215,52,0,0,0,
16,116,82,78,83,0,191,189,242,134,243,244,77,79,61,190,78,253,136,241,
122,92,234,213,69,0,0,1,185,73,68,65,84,120,94,205,150,101,143,219,
64,16,134,247,146,131,246,160,157,89,51,132,25,143,153,175,204,244,255,255,
75,71,153,140,218,40,231,40,145,214,210,62,95,94,191,178,214,126,52,90,
131,82,234,197,218,38,90,198,230,246,142,34,246,208,74,214,105,102,104,41,
91,106,13,45,101,91,109,160,165,20,21,90,203,18,106,73,146,72,44,77,
50,37,95,53,23,0,40,170,20,14,46,137,3,83,252,220,213,46,223,175,
174,118,222,110,183,225,236,114,148,179,26,248,171,171,85,41,41,220,188,213,
254,120,223,88,237,192,155,112,128,24,81,28,33,241,150,250,237,34,181,200,
99,16,143,40,34,36,240,196,243,78,76,168,9,142,52,112,229,246,68,68,
189,179,64,141,26,243,255,134,245,1,124,163,106,45,221,132,195,32,56,132,
166,110,177,218,169,206,82,251,164,181,134,253,224,215,141,254,13,253,32,8,
246,65,159,178,90,75,143,204,171,117,40,34,100,25,86,243,129,91,246,19,
58,160,24,76,231,196,106,29,168,154,83,115,238,255,169,149,26,141,146,168,
117,26,87,64,45,83,205,121,55,175,230,54,190,76,214,25,82,195,72,212,
24,86,19,178,213,16,231,212,4,99,106,229,176,34,106,215,225,132,238,231,
176,47,98,31,194,238,188,90,37,252,8,63,126,206,170,165,225,29,8,225,
87,131,95,3,217,107,2,53,198,125,254,189,230,207,236,53,105,130,225,15,
213,67,60,134,239,67,162,36,106,111,226,108,181,90,12,23,195,82,26,7,
208,164,37,23,16,215,88,173,18,143,205,171,113,19,25,158,33,183,229,222,
107,50,67,215,140,90,90,175,215,41,142,41,122,220,136,20,137,71,58,120,
66,110,179,244,232,204,49,34,159,163,198,32,81,166,44,203,53,23,163,138,
104,41,175,236,253,1,47,168,29,180,147,221,151,74,173,219,105,246,90,17,
91,133,13,180,140,98,129,102,246,23,0,114,28,174,110,236,115,197,0,0,
0,0,73,69,78,68,174,66,96,130
};

const char* PatchEditor::newRowDown_png = (const char*) resource_PatchEditor_newRowDown_png;
const int PatchEditor::newRowDown_pngSize = 790;

// JUCER_RESOURCE: newCommandNormal_png, 1064, "../../UI/NewCommandNormal.png"
static const unsigned char resource_PatchEditor_newCommandNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,92,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,145,24,
16,144,23,17,142,24,16,144,25,15,145,23,16,144,25,17,142,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,66,112,193,73,128,
201,59,95,184,59,96,185,45,64,168,77,136,204,74,132,202,73,127,200,35,
40,155,44,63,168,52,79,176,25,20,145,38,48,160,42,56,163,80,143,208,
63,104,188,52,80,176,28,23,148,74,130,200,49,72,172,72,126,199,37,47,
160,55,89,180,33,36,154,26,20,146,63,105,188,66,111,192,25,19,146,37,
45,159,75,133,202,56,90,181,69,118,195,77,135,204,67,114,193,54,84,178,
57,92,181,40,51,161,31,32,152,79,142,207,78,140,206,60,99,186,35,42,
157,50,76,174,74,129,201,70,120,196,25,20,146,44,61,166,76,135,203,26,
21,146,27,22,147,56,88,180,77,138,204,30,31,151,32,34,153,74,130,201,
76,134,203,37,46,159,71,123,197,34,41,156,75,133,203,25,18,144,71,124,
198,49,71,172,79,142,208,70,122,197,43,60,166,56,91,181,36,43,158,44,
60,166,30,29,150,39,52,161,65,108,191,60,100,185,29,28,150,79,143,207,
65,111,191,48,69,171,71,123,198,30,28,150,75,131,201,42,58,166,28,25,
149,78,139,205,53,83,177,29,29,151,28,26,148,64,108,190,58,94,183,37,
44,158,57,91,182,78,141,207,39,49,161,30,30,152,79,141,206,68,117,194,
33,37,155,41,55,164,48,71,171,51,75,85,108,0,0,0,16,116,82,78,
83,0,191,242,189,243,79,190,77,244,134,78,61,253,136,241,122,179,212,13,
184,0,0,2,107,73,68,65,84,120,94,205,150,101,147,26,65,16,134,7,
184,156,229,46,233,94,71,221,229,220,221,93,226,238,238,250,255,171,210,51,
59,44,149,101,33,92,138,171,218,231,75,215,11,51,189,15,93,204,0,99,
236,74,96,16,124,198,96,255,48,35,70,193,151,12,209,204,32,62,97,162,
207,48,75,113,24,96,1,152,64,31,82,130,126,214,7,38,250,144,77,8,
50,0,244,37,0,77,181,84,74,22,170,221,147,18,92,174,90,22,32,66,
101,7,0,210,216,53,17,16,36,47,91,173,28,30,191,152,218,120,184,12,
123,243,243,247,97,46,188,137,189,129,122,134,195,79,220,106,68,242,98,106,
73,0,48,17,215,168,228,177,39,200,158,30,106,99,181,103,182,218,116,77,
80,64,188,69,101,1,137,67,202,7,158,106,133,68,34,113,135,175,20,76,
34,30,80,57,68,234,210,154,136,66,77,48,45,90,74,22,58,171,57,164,
157,148,111,46,197,52,229,29,79,53,39,9,34,232,140,62,219,154,136,60,
8,178,162,165,196,236,86,173,170,85,234,134,97,124,133,57,237,185,80,251,
174,85,255,165,246,67,59,129,95,134,177,1,223,180,167,92,230,183,166,105,
21,104,77,136,143,12,78,189,162,85,185,218,93,10,175,225,243,18,226,170,
198,57,233,172,22,17,159,201,150,17,106,38,68,58,170,201,89,172,33,154,
84,146,36,35,105,77,200,145,51,108,180,140,184,102,216,170,246,34,115,207,
81,91,143,197,98,183,27,106,43,43,240,152,82,143,212,62,196,56,235,46,
53,139,30,240,41,147,201,148,61,213,104,50,142,154,64,170,73,122,165,150,
183,131,75,173,113,204,147,109,212,114,250,134,84,219,210,109,206,107,250,30,
72,30,232,231,158,106,171,209,104,116,201,173,118,131,246,205,206,182,166,135,
209,50,37,93,223,186,160,154,60,78,124,169,251,198,39,242,157,238,53,183,
90,154,246,153,109,19,98,246,255,212,38,149,237,179,34,103,66,170,109,43,
31,189,212,142,149,125,24,43,22,151,225,72,41,20,148,35,88,46,22,199,
96,95,57,182,101,38,149,155,142,76,51,189,84,94,193,79,106,125,230,82,
123,163,188,133,119,244,250,251,246,106,174,123,77,110,180,39,211,254,55,212,
251,94,147,51,116,146,235,187,214,237,9,205,169,170,69,101,87,85,213,69,
158,4,83,72,88,170,154,195,47,50,185,176,84,193,41,15,167,170,192,106,
52,33,82,252,189,191,19,226,148,42,177,22,169,236,54,158,128,148,36,41,
91,45,232,215,191,146,215,88,0,74,232,67,102,32,196,134,33,94,154,242,
221,204,102,234,35,87,25,27,2,63,50,114,157,17,3,161,62,240,25,193,
16,205,236,15,129,142,66,26,193,101,98,209,0,0,0,0,73,69,78,68,
174,66,96,130
};

const char* PatchEditor::newCommandNormal_png = (const char*) resource_PatchEditor_newCommandNormal_png;
const int PatchEditor::newCommandNormal_pngSize = 1064;

// JUCER_RESOURCE: newCommandOver_png, 1076, "../../UI/NewCommandOver.png"
static const unsigned char resource_PatchEditor_newCommandOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,104,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,23,16,145,24,16,144,25,
15,145,23,17,142,23,16,144,24,16,144,24,16,144,25,17,142,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,187,179,102,214,206,
95,227,218,91,158,150,110,105,97,123,160,152,109,212,204,96,239,231,89,64,
56,133,31,23,142,218,211,93,148,141,112,131,123,116,185,177,103,91,83,126,
216,208,94,146,137,112,173,164,105,132,124,116,37,29,141,226,218,92,118,110,
119,76,68,130,103,96,123,146,139,112,174,166,105,78,70,130,59,50,135,221,
213,92,29,22,142,74,66,131,190,181,101,210,202,96,209,201,96,49,41,137,
215,207,95,205,198,97,235,227,89,229,221,91,151,143,111,83,75,129,51,43,
137,223,215,92,67,59,133,74,67,131,236,228,89,30,22,142,197,189,99,101,
92,124,125,117,118,32,24,141,65,58,133,27,19,143,217,209,94,163,156,108,
204,196,97,55,47,136,29,21,143,139,131,114,200,191,98,225,217,92,222,214,
93,233,225,90,34,26,141,237,229,89,196,188,99,203,195,98,118,109,120,117,
108,120,204,197,98,179,171,104,39,31,140,44,36,139,238,230,88,149,142,111,
70,62,133,156,148,110,99,90,124,46,38,138,184,176,102,45,36,138,164,157,
107,218,209,94,95,87,126,60,52,135,231,223,90,136,128,115,46,39,138,40,
32,140,219,212,94,72,63,131,58,49,135,150,143,111,115,106,121,80,72,130,
48,40,138,83,76,128,194,186,99,28,21,143,98,90,125,181,172,104,90,82,
127,198,204,70,100,0,0,0,16,116,82,78,83,0,191,242,189,79,243,134,
77,78,190,244,61,253,136,241,122,139,110,38,28,0,0,2,107,73,68,65,
84,120,94,205,150,101,147,26,65,16,134,7,200,105,46,73,247,42,238,206,
169,187,187,75,220,221,221,255,126,122,134,157,165,178,11,4,82,92,213,62,
95,186,94,216,233,121,170,107,118,128,49,118,201,215,15,30,163,191,175,151,
17,87,192,147,116,211,204,96,36,166,161,199,208,202,35,208,195,124,16,67,
15,82,134,62,214,5,26,122,144,99,240,51,0,244,36,0,53,181,80,200,
42,84,91,39,36,184,88,181,28,64,152,74,26,0,50,216,50,97,16,36,
47,90,109,40,56,220,158,218,112,112,8,38,23,22,158,192,124,240,24,59,
3,245,12,6,239,59,213,136,100,123,106,73,0,208,16,143,168,20,176,35,
200,158,110,181,209,196,231,170,218,88,66,48,129,120,131,202,10,18,139,148,
119,234,170,141,15,14,14,62,224,79,10,174,35,238,80,89,68,234,226,78,
196,68,66,48,198,91,74,86,154,171,217,100,236,84,168,61,138,25,202,233,
186,106,118,18,132,107,7,54,231,78,68,1,4,57,222,82,162,181,170,86,
209,35,7,134,97,124,129,121,253,182,80,155,209,43,255,82,251,174,111,193,
111,195,88,135,175,250,83,46,115,75,215,245,8,184,19,226,115,131,115,16,
209,43,92,237,33,133,187,240,105,23,113,74,231,108,53,87,11,3,228,228,
156,132,154,6,225,102,106,114,22,71,136,26,149,100,26,36,238,132,28,107,
134,178,101,216,49,67,183,218,179,236,99,91,109,53,30,143,255,148,106,27,
27,112,143,82,135,212,238,196,57,171,14,181,247,180,193,135,108,54,251,177,
174,26,77,70,170,73,184,154,164,67,106,242,172,57,212,228,107,158,108,160,
150,50,215,45,181,77,179,202,116,194,156,4,139,111,230,116,93,181,169,82,
169,180,235,84,187,73,235,230,230,220,233,87,105,136,146,105,110,182,169,134,
152,182,207,154,141,61,195,66,179,123,205,169,150,161,117,90,195,68,251,253,
159,218,154,114,182,93,228,196,44,181,51,229,81,61,181,61,101,31,70,139,
197,37,88,86,198,199,149,101,88,42,22,71,97,95,217,171,202,172,41,231,
182,76,45,189,80,94,194,43,106,189,237,80,123,173,188,129,183,244,249,187,
198,106,142,123,205,90,88,157,76,243,223,80,247,189,38,103,40,147,227,172,
181,250,134,166,84,53,74,101,86,85,213,83,158,4,121,36,162,170,154,194,
25,145,92,68,85,193,9,15,39,170,32,42,155,16,33,254,221,223,9,49,
175,90,68,79,169,204,202,29,144,146,69,168,170,230,247,234,95,201,171,204,
7,101,244,32,135,16,96,189,48,82,206,123,110,102,135,63,6,46,51,214,
13,94,100,224,26,35,122,2,93,224,49,252,1,154,217,31,140,246,61,235,
200,227,195,31,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* PatchEditor::newCommandOver_png = (const char*) resource_PatchEditor_newCommandOver_png;
const int PatchEditor::newCommandOver_pngSize = 1076;

// JUCER_RESOURCE: newCommandDown_png, 1028, "../../UI/NewCommandDown.png"
static const unsigned char resource_PatchEditor_newCommandDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,83,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,23,16,145,25,15,145,24,
16,144,25,17,142,24,16,144,23,16,144,23,17,142,24,16,144,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,30,28,150,31,33,
152,38,48,159,31,32,151,69,120,197,45,65,168,45,64,167,59,96,184,78,
140,206,71,124,198,41,55,164,52,81,176,29,27,150,35,42,157,67,115,193,
38,49,160,66,112,192,62,104,189,48,72,172,41,56,164,27,24,148,30,30,
152,76,137,204,32,34,153,55,88,180,67,113,192,60,97,184,24,17,144,52,
80,176,37,46,159,25,18,145,73,128,200,28,26,149,33,36,154,79,142,208,
70,119,196,79,141,206,34,40,156,30,30,151,30,31,151,69,118,195,47,68,
171,79,140,206,60,99,186,44,61,166,72,126,199,77,138,205,67,114,193,27,
25,148,64,109,191,27,22,148,33,37,155,78,139,206,54,84,178,26,20,146,
29,27,149,74,129,201,74,130,200,34,38,155,56,89,181,39,49,161,40,52,
162,74,131,202,25,19,146,56,91,181,48,69,171,76,135,203,75,132,202,44,
60,167,68,117,194,48,70,171,47,69,170,25,17,145,55,89,180,74,132,202,
65,108,191,60,100,186,29,29,151,62,102,186,71,123,197,26,21,147,51,77,
175,75,131,201,76,134,203,67,116,194,46,66,169,65,111,191,33,37,154,26,
19,145,36,43,158,25,18,144,63,105,188,28,25,149,39,52,161,61,100,186,
22,97,19,169,0,0,0,16,116,82,78,83,0,242,191,189,79,134,243,61,
190,78,77,244,253,136,241,122,102,187,61,251,0,0,2,80,73,68,65,84,
120,94,205,150,101,115,27,49,16,134,229,184,73,67,109,87,199,103,100,134,
48,51,67,153,153,153,251,255,177,171,147,149,184,186,187,196,238,56,51,122,
190,172,95,123,181,247,88,115,39,155,16,114,105,96,12,20,99,108,120,132,
32,87,64,73,6,113,207,64,81,70,201,0,40,202,48,25,2,69,137,16,
80,150,83,181,102,147,23,172,61,208,244,184,88,181,10,165,22,150,2,165,
180,8,93,99,81,143,252,69,171,197,245,84,111,106,41,61,78,143,167,166,
238,208,29,253,23,244,137,148,174,235,207,100,53,36,223,155,90,30,155,75,
0,11,88,106,208,23,196,76,191,90,38,123,143,171,77,100,61,170,0,55,
176,76,2,50,141,121,49,80,173,154,203,229,238,243,78,36,13,176,136,101,
26,112,138,63,33,85,222,55,193,70,10,38,207,81,19,20,79,82,173,163,
181,136,185,16,164,214,153,16,235,244,134,173,248,19,82,227,125,21,54,82,
80,234,86,45,97,199,230,93,215,253,66,119,236,175,94,235,93,59,113,158,
218,119,123,142,254,116,221,53,122,221,190,197,100,110,218,182,29,163,254,4,
240,200,101,204,199,236,4,83,123,140,225,1,125,186,14,176,100,51,230,206,
86,179,188,239,196,101,60,181,18,181,206,82,19,123,177,0,80,194,146,47,
80,129,63,117,158,8,98,164,37,237,161,95,237,69,235,213,137,218,106,50,
153,252,35,212,14,14,232,67,76,125,82,187,157,100,172,74,106,26,94,224,
83,171,213,138,7,170,225,206,8,53,14,87,19,244,75,173,198,131,164,38,
30,243,124,136,90,217,89,107,171,237,59,156,153,172,115,44,196,94,58,51,
129,106,75,141,70,99,93,86,123,142,235,86,86,252,233,119,35,142,201,113,
246,123,84,3,40,136,123,77,62,241,249,202,240,115,77,86,43,226,186,82,
104,2,168,252,159,90,218,216,156,173,51,158,180,213,54,141,207,65,106,123,
198,6,205,212,235,203,116,203,168,86,141,45,186,92,175,103,232,134,177,199,
101,210,198,15,33,211,145,94,27,111,232,91,28,61,43,169,189,51,222,211,
15,248,254,199,112,53,249,92,227,11,249,206,132,255,134,6,159,107,98,15,
69,146,238,181,110,159,208,178,105,106,88,118,77,211,60,100,201,99,27,16,
205,52,203,240,141,39,25,141,247,29,177,112,196,95,107,98,8,210,100,159,
253,155,0,182,205,54,218,33,150,93,113,5,96,137,211,228,106,17,80,148,
171,234,254,1,143,146,17,80,147,241,203,132,12,170,105,118,141,32,163,209,
33,80,140,72,20,247,236,47,93,122,54,178,11,182,199,30,0,0,0,0,
73,69,78,68,174,66,96,130
};

const char* PatchEditor::newCommandDown_png = (const char*) resource_PatchEditor_newCommandDown_png;
const int PatchEditor::newCommandDown_pngSize = 1028;

// JUCER_RESOURCE: deleteNormal_png, 754, "../../UI/DeleteNormal.png"
static const unsigned char resource_PatchEditor_deleteNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,246,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,25,15,145,24,16,144,25,
17,142,24,16,144,23,16,144,23,17,142,23,16,145,24,16,144,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,59,95,184,45,64,
168,66,112,193,77,136,204,45,64,167,35,40,155,75,132,202,73,128,200,55,
89,180,38,48,159,79,140,206,72,126,199,28,23,148,76,137,204,49,72,172,
25,20,145,37,47,160,52,80,176,66,112,192,37,46,159,50,76,174,42,56,
163,52,79,176,77,138,205,38,48,160,32,34,153,27,22,147,31,32,152,62,
102,186,59,96,184,46,66,170,32,36,154,66,111,192,31,32,151,40,52,162,
25,20,146,28,26,149,54,84,178,59,96,185,73,128,201,80,143,208,73,127,
200,26,20,146,67,114,193,56,90,181,62,102,187,74,130,201,55,88,180,29,
28,150,70,120,196,74,132,202,44,63,168,77,135,204,78,139,206,72,124,198,
76,134,203,56,88,180,65,108,190,34,40,156,68,116,194,25,19,146,78,139,
205,76,135,203,48,72,172,118,130,79,208,0,0,0,16,116,82,78,83,0,
191,242,189,134,253,61,243,78,77,79,244,190,136,241,122,170,154,58,209,0,
0,1,155,73,68,65,84,120,94,205,150,199,114,219,64,16,68,151,201,148,
76,201,238,65,102,206,57,7,229,156,157,195,255,255,140,199,220,57,16,196,
73,7,160,246,29,192,234,46,30,94,77,77,13,160,148,250,152,42,192,48,
10,71,7,138,57,134,145,100,121,102,104,222,186,100,24,110,169,137,67,149,
194,45,25,72,9,71,42,15,151,12,228,15,210,10,32,35,1,222,165,118,
169,49,81,13,154,182,153,106,215,211,83,52,174,134,225,254,249,138,185,167,
8,46,215,111,137,169,149,105,14,96,30,238,203,96,214,20,161,13,160,147,
160,218,247,209,20,189,149,75,180,210,20,137,254,142,174,69,173,40,37,145,
203,79,15,192,55,73,26,55,86,53,25,70,120,243,214,162,214,150,146,168,
3,38,146,58,73,168,205,44,76,108,219,238,162,111,85,69,141,170,86,31,
93,46,39,176,102,95,248,247,7,128,13,231,161,213,195,152,243,24,61,107,
24,191,154,150,209,155,39,106,18,36,237,236,90,17,128,199,217,3,80,76,
68,173,54,24,12,250,251,106,125,46,107,81,53,248,220,251,73,169,9,33,
53,33,162,38,196,172,118,243,226,99,113,30,176,204,233,185,166,186,171,182,
208,221,221,190,90,87,254,252,59,238,187,38,50,66,120,215,132,200,174,197,
125,215,106,173,37,108,39,32,250,233,224,164,245,31,118,105,180,78,192,169,
17,56,54,150,219,82,11,92,56,27,248,156,42,206,3,30,183,253,83,252,
239,208,112,42,235,190,188,115,215,4,47,169,187,118,161,169,239,167,64,247,
1,81,93,74,18,190,74,170,72,95,121,143,90,218,212,79,201,79,42,133,
18,25,200,25,50,234,0,205,210,171,113,51,59,251,149,251,160,84,22,38,
146,251,172,152,195,76,30,134,145,206,240,204,254,1,207,202,41,199,238,147,
200,184,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* PatchEditor::deleteNormal_png = (const char*) resource_PatchEditor_deleteNormal_png;
const int PatchEditor::deleteNormal_pngSize = 754;

// JUCER_RESOURCE: deleteOver_png, 755, "../../UI/DeleteOver.png"
static const unsigned char resource_PatchEditor_deleteOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,249,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,23,16,144,25,15,145,23,
17,142,25,17,142,24,16,144,24,16,144,23,16,145,24,16,144,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,220,212,93,158,150,
110,105,97,123,187,179,102,77,69,130,227,218,91,213,205,95,104,96,123,91,
83,126,64,56,133,118,110,119,74,67,131,214,206,95,29,22,142,227,219,91,
37,29,141,51,43,137,50,42,137,169,161,106,148,141,112,76,68,130,132,124,
116,186,178,102,41,33,140,125,117,118,234,226,90,230,222,91,131,123,116,146,
139,112,212,204,96,160,152,109,159,151,109,78,70,130,85,77,128,109,101,123,
31,22,142,55,47,136,30,22,142,185,177,103,209,201,96,34,26,141,139,131,
114,57,49,135,217,209,94,233,225,90,146,138,113,44,36,139,200,191,98,180,
171,103,224,216,92,239,231,89,103,96,123,207,199,97,219,212,94,226,218,92,
28,21,143,225,217,92,190,181,101,231,223,90,170,161,106,193,185,100,118,111,
120,210,202,96,146,137,112,64,57,134,115,114,134,13,0,0,0,16,116,82,
78,83,0,242,189,191,78,134,77,61,190,244,79,243,253,136,241,122,151,254,
214,13,0,0,1,153,73,68,65,84,120,94,205,150,199,142,219,64,16,68,
71,210,102,201,118,53,51,21,115,206,97,115,78,206,249,255,63,198,237,237,
89,64,20,79,123,32,49,239,210,168,58,61,52,26,67,42,165,142,114,135,
48,140,195,131,29,197,188,131,145,236,242,206,80,235,248,100,24,254,180,134,
61,149,67,135,12,100,138,3,149,135,79,6,242,21,25,5,144,145,0,111,
82,123,18,76,84,131,208,51,83,237,184,57,64,121,54,142,246,159,102,204,
53,197,240,185,190,73,77,205,163,5,128,69,180,247,192,180,40,70,15,64,
63,69,181,135,101,19,195,51,159,232,76,8,136,126,45,143,181,90,160,75,
34,159,71,8,224,143,78,130,159,168,154,94,70,244,242,90,90,173,7,129,
168,15,38,150,250,105,168,181,109,92,56,142,83,65,209,62,127,85,59,183,
139,168,112,121,1,187,253,145,231,95,0,43,158,99,123,136,19,158,39,24,
218,227,228,213,68,230,245,242,36,73,144,180,121,107,1,128,144,103,8,32,
72,69,173,49,153,76,138,219,106,69,46,27,113,53,148,184,47,165,166,38,
68,213,132,184,154,144,176,218,183,231,18,214,115,139,101,6,115,225,247,166,
218,90,186,31,219,106,149,185,240,61,249,119,77,100,132,232,173,9,177,91,
75,252,93,107,116,175,224,184,22,209,79,23,167,221,255,176,75,185,123,10,
78,101,203,117,112,245,82,138,64,213,93,161,196,105,228,222,226,238,165,191,
79,254,27,26,77,158,244,222,230,187,38,132,105,189,107,85,161,190,157,44,
233,45,162,186,46,73,243,168,211,72,247,163,183,168,101,76,253,149,124,175,
114,152,146,129,92,34,171,118,80,155,126,54,110,103,151,95,10,251,74,237,
194,68,10,31,20,179,151,205,195,48,50,89,222,217,63,212,134,37,86,218,
115,134,8,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* PatchEditor::deleteOver_png = (const char*) resource_PatchEditor_deleteOver_png;
const int PatchEditor::deleteOver_pngSize = 755;

// JUCER_RESOURCE: deleteDown_png, 705, "../../UI/DeleteDown.png"
static const unsigned char resource_PatchEditor_deleteDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,225,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,25,17,142,23,16,144,23,
16,145,25,15,145,23,17,142,24,16,144,24,16,144,24,16,144,24,16,144,
24,17,144,24,16,144,23,17,144,80,144,208,24,16,144,29,28,150,62,104,
189,69,120,197,45,65,168,59,96,184,38,48,159,66,112,193,31,32,152,59,
96,185,27,24,148,55,88,180,76,137,204,54,84,178,25,20,146,79,140,206,
67,114,193,28,23,148,67,113,192,73,128,200,72,126,199,72,124,198,78,139,
206,45,64,167,77,138,205,52,80,176,32,34,153,38,48,160,42,58,166,66,
112,192,45,64,168,27,22,147,31,32,151,64,108,190,58,94,182,76,134,203,
38,49,160,52,81,176,31,33,152,73,128,201,26,21,147,30,28,150,39,52,
162,42,58,165,36,44,158,32,36,154,37,46,159,26,20,146,49,72,172,75,
132,202,34,40,156,30,30,151,28,26,148,24,17,144,56,88,180,70,120,196,
48,72,172,60,97,184,244,146,11,229,0,0,0,16,116,82,78,83,0,189,
191,242,61,78,79,134,77,190,244,243,253,136,241,122,117,170,145,241,0,0,
1,127,73,68,65,84,120,94,205,150,197,142,43,65,12,69,43,201,203,4,
6,158,221,12,97,102,134,65,134,7,255,255,65,227,137,43,82,195,108,178,
232,86,157,141,117,239,234,168,100,185,91,8,113,150,45,163,98,148,75,121,
65,92,162,146,20,232,205,80,81,138,34,139,138,82,18,231,168,40,57,129,
202,114,146,218,39,163,162,26,48,35,53,213,250,157,13,84,246,139,112,127,
187,39,222,49,134,79,245,115,106,106,14,206,1,96,30,238,29,32,174,49,
198,136,234,73,138,106,119,179,14,212,182,62,226,150,113,17,255,204,250,82,
205,149,37,162,79,195,3,128,127,50,49,126,162,106,242,49,194,155,119,45,
213,70,192,32,78,128,136,165,73,26,106,83,19,134,150,101,53,65,55,199,
71,181,177,169,67,147,202,33,152,211,71,154,127,1,96,69,115,97,214,160,
75,179,11,53,115,145,188,26,203,28,55,143,19,7,78,193,93,115,105,122,
52,61,154,110,42,106,213,221,110,167,71,213,116,42,171,63,168,25,212,27,
105,169,49,17,53,38,174,198,36,172,246,244,223,128,245,64,35,153,205,128,
25,7,213,214,220,221,71,213,154,3,230,38,249,187,198,50,76,120,215,152,
216,174,37,126,215,170,237,30,88,182,134,248,96,67,163,253,13,185,84,218,
13,160,84,209,108,11,122,135,146,5,150,246,10,12,74,117,251,5,94,15,
253,91,210,223,208,104,114,184,119,130,119,141,241,210,186,107,75,166,21,77,
26,247,26,98,75,150,40,249,144,169,46,251,250,41,106,57,84,148,43,117,
127,192,51,34,143,106,114,241,75,136,130,154,102,191,5,81,204,156,163,98,
228,50,244,102,95,146,154,41,56,117,3,236,219,0,0,0,0,73,69,78,
68,174,66,96,130
};

const char* PatchEditor::deleteDown_png = (const char*) resource_PatchEditor_deleteDown_png;
const int PatchEditor::deleteDown_pngSize = 705;


//[EndFile] You can add extra defines here...
//[/EndFile]

