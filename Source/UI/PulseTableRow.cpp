/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PulseTableRow.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PulseTableRow::PulseTableRow (
        const std::shared_ptr < EventDispatcher >& dispatcher
        )
    :
    AbstractPulseTableRow (
                           dispatcher )
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    rowLabel . reset (
                      new Label (
                                 "new label"
                               , TRANS (
                                        "01" ) ) );
    addAndMakeVisible (
                       rowLabel . get () );
    rowLabel -> setFont (
                         Font (
                               "C64 Pro Mono"
                             , 12.00F
                             , Font::plain ) . withTypefaceStyle (
                                                                  "Regular" ) );
    rowLabel -> setJustificationType (
                                      Justification::centredRight );
    rowLabel -> setEditable (
                             false
                           , false
                           , false );
    rowLabel -> setColour (
                           Label::textColourId
                         , Colour (
                                   0xff5090d0 ) );
    rowLabel -> setColour (
                           TextEditor::textColourId
                         , Colours::black );
    rowLabel -> setColour (
                           TextEditor::backgroundColourId
                         , Colour (
                                   0x00000000 ) );
    rowLabel -> setBounds (
                           0
                         , 4
                         , 44
                         , 18 );
    pulseCycle . reset (
                        new Label (
                                   "new label"
                                 , String () ) );
    addAndMakeVisible (
                       pulseCycle . get () );
    pulseCycle -> setFont (
                           Font (
                                 "C64 Pro"
                               , 15.00F
                               , Font::plain ) . withTypefaceStyle (
                                                                    "Regular" ) );
    pulseCycle -> setJustificationType (
                                        Justification::centredLeft );
    pulseCycle -> setEditable (
                               true
                             , true
                             , false );
    pulseCycle -> setColour (
                             Label::textColourId
                           , Colour (
                                     0xff5090d0 ) );
    pulseCycle -> setColour (
                             TextEditor::textColourId
                           , Colours::black );
    pulseCycle -> setColour (
                             TextEditor::backgroundColourId
                           , Colour (
                                     0x00000000 ) );
    pulseCycle -> addListener (
                               this );
    pulseCycle -> setBounds (
                             216
                           , 3
                           , 136
                           , 20 );
    cachedImage_pulseTableRow_png_1 = ImageCache::getFromMemory (
                                                                 pulseTableRow_png
                                                               , pulseTableRow_pngSize );

    //[UserPreSize]
    //[/UserPreSize]

    setSize (
             590
           , 24 );


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PulseTableRow::~PulseTableRow ()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    rowLabel   = nullptr;
    pulseCycle = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}


//==============================================================================
void
    PulseTableRow::paint (
            Graphics& g
            )
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g . fillAll (
                 Colour (
                         0xff323e44 ) );
    {
        const auto x      = 0;
        const auto y      = 0;
        const auto width  = 592;
        const auto height = 24;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g . setColour (
                       Colours::black );
        g . drawImageWithin (
                             cachedImage_pulseTableRow_png_1
                           , x
                           , y
                           , width
                           , height
                           , RectanglePlacement::centred | RectanglePlacement::onlyReduceInSize
                           , false );
    }

    //[UserPaint] Add your own custom painting code here..
    if ( selected )
    {
        const Colour lt_blue (
                              0xff5090d0 );
        g . setColour (
                       lt_blue );
        Path p;
        p . addTriangle (
                         0.0F
                       , 0.0F
                       , 12.0F
                       , 12.0F
                       , 0.0F
                       , 24.0F );
        g . fillPath (
                      p );
    }
    //[/UserPaint]
}

void
    PulseTableRow::resized ()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void
    PulseTableRow::labelTextChanged (
            Label* label_that_has_changed
            )
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if ( label_that_has_changed == pulseCycle . get () )
    {
        //[UserLabelCode_pulseCycle] -- add your label text handling code here..
        //[/UserLabelCode_pulseCycle]
    }

    //[UserlabelTextChanged_Post]
    dispatcher -> pulseTableSelectionChangedListeners -> call (
                                                               &PulseTableSelectionChanged::onPulseTableSelectionChanged
                                                             , static_cast < unsigned int > ( row ) );
    dispatcher -> pulseTableRowChangedListeners -> call (
                                                         &PulseTableRowChanged::onPulseTableRowChanged
                                                       , static_cast < unsigned int > ( pulseCycle -> getText () . getIntValue () ) );
    dispatcher -> bankRepaintWaveformListeners -> call (
                                                        &BankRepaintWaveform::onBankRepaintWaveform );
    //[/UserlabelTextChanged_Post]
}


//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...


auto
    PulseTableRow::Get () const -> unsigned { return static_cast < unsigned > ( pulseCycle -> getText () . getIntValue () ); }

void
    PulseTableRow::Set (
            const unsigned row_num
          , const unsigned value
            )
{
    row = static_cast < int > ( row_num );
    rowLabel -> setText (
                         String (
                                 row_num + 1 ) . paddedLeft (
                                                             '0'
                                                           , 2 )
                       , dontSendNotification );
    pulseCycle -> setText (
                           String (
                                   value )
                         , dontSendNotification );
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PulseTableRow" componentName=""
                 parentClasses="public AbstractPulseTableRow" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="590" initialHeight="24">
  <BACKGROUND backgroundColour="ff323e44">
    <IMAGE pos="0 0 592 24" resource="pulseTableRow_png" opacity="1.0" mode="2"/>
  </BACKGROUND>
  <LABEL name="new label" id="1b4eae892bfe6bdb" memberName="rowLabel"
         virtualName="" explicitFocusOrder="0" pos="0 4 44 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="01" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro Mono"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="718fa581b1eabe4b" memberName="pulseCycle"
         virtualName="" explicitFocusOrder="0" pos="216 3 136 20" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: pulseTableRow_png, 286, "../../UI/PulseTableRow.png"
static const unsigned char resource_PulseTableRow_pulseTableRow_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,80,
0,0,0,24,4,3,0,0,0,199,88,222,94,0,0,0,42,80,76,84,
69,24,16,144,28,26,149,32,33,153,26,19,145,27,25,148,79,141,206,80,
144,208,58,94,182,29,29,151,46,65,169,35,42,157,65,110,191,61,101,187,
37,45,159,218,193,100,102,0,0,0,175,73,68,65,84,120,1,98,24,124,
96,20,48,42,81,14,12,70,66,64,185,166,81,14,10,70,66,64,181,205,
90,69,41,88,125,96,68,4,212,5,138,141,224,25,202,1,53,26,80,108,
105,128,246,236,0,3,96,24,8,162,232,85,23,244,254,71,104,83,49,95,
88,172,22,224,47,219,10,3,125,12,164,207,212,40,57,10,10,37,84,173,
5,163,70,193,46,46,20,65,161,246,107,109,234,120,118,109,35,17,188,18,
39,39,148,80,65,57,23,146,30,138,83,86,40,161,186,70,209,165,151,112,
4,69,78,40,161,250,14,97,113,4,227,82,109,61,133,74,66,168,124,255,
126,208,192,76,142,212,147,142,150,80,66,125,27,84,188,184,251,3,229,85,
48,227,207,5,231,6,158,88,95,150,102,91,156,153,0,0,0,0,73,69,
78,68,174,66,96,130
};
const char* PulseTableRow::pulseTableRow_png     = ( const char* ) resource_PulseTableRow_pulseTableRow_png;
const int   PulseTableRow::pulseTableRow_pngSize = 286;


//[EndFile] You can add extra defines here...
//[/EndFile]
