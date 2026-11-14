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
// ReSharper disable CppClangTidyModernizeMakeUnique
#include "../Programs/Bank.h"
#include "../SIDProgram.h"
//[/Headers]

#include "WavetableRow.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
WavetableRow::WavetableRow (
        const std::shared_ptr < EventDispatcher >& dispatcher
        )
    :
    AbstractWavetableRow (
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
    triangleCheckbox . reset (
                              new ToggleButton (
                                                "new toggle button" ) );
    addAndMakeVisible (
                       triangleCheckbox . get () );
    triangleCheckbox -> setButtonText (
                                       String () );
    triangleCheckbox -> addListener (
                                     this );
    triangleCheckbox -> setBounds (
                                   53
                                 , 6
                                 , 14
                                 , 14 );
    sawtoothCheckbox . reset (
                              new ToggleButton (
                                                "new toggle button" ) );
    addAndMakeVisible (
                       sawtoothCheckbox . get () );
    sawtoothCheckbox -> setButtonText (
                                       String () );
    sawtoothCheckbox -> addListener (
                                     this );
    sawtoothCheckbox -> setBounds (
                                   109
                                 , 6
                                 , 14
                                 , 14 );
    pulseCheckbox . reset (
                           new ToggleButton (
                                             "new toggle button" ) );
    addAndMakeVisible (
                       pulseCheckbox . get () );
    pulseCheckbox -> setButtonText (
                                    String () );
    pulseCheckbox -> addListener (
                                  this );
    pulseCheckbox -> setBounds (
                                165
                              , 6
                              , 14
                              , 14 );
    noiseCheckbox . reset (
                           new ToggleButton (
                                             "new toggle button" ) );
    addAndMakeVisible (
                       noiseCheckbox . get () );
    noiseCheckbox -> setButtonText (
                                    String () );
    noiseCheckbox -> addListener (
                                  this );
    noiseCheckbox -> setBounds (
                                221
                              , 6
                              , 14
                              , 14 );
    testCheckbox . reset (
                          new ToggleButton (
                                            "new toggle button" ) );
    addAndMakeVisible (
                       testCheckbox . get () );
    testCheckbox -> setButtonText (
                                   String () );
    testCheckbox -> addListener (
                                 this );
    testCheckbox -> setBounds (
                               277
                             , 6
                             , 14
                             , 14 );
    ringCheckbox . reset (
                          new ToggleButton (
                                            "new toggle button" ) );
    addAndMakeVisible (
                       ringCheckbox . get () );
    ringCheckbox -> setButtonText (
                                   String () );
    ringCheckbox -> addListener (
                                 this );
    ringCheckbox -> setBounds (
                               349
                             , 6
                             , 14
                             , 14 );
    synCheckbox . reset (
                         new ToggleButton (
                                           "new toggle button" ) );
    addAndMakeVisible (
                       synCheckbox . get () );
    synCheckbox -> setButtonText (
                                  String () );
    synCheckbox -> addListener (
                                this );
    synCheckbox -> setBounds (
                              421
                            , 6
                            , 14
                            , 14 );
    gateCheckbox . reset (
                          new ToggleButton (
                                            "new toggle button" ) );
    addAndMakeVisible (
                       gateCheckbox . get () );
    gateCheckbox -> setButtonText (
                                   String () );
    gateCheckbox -> addListener (
                                 this );
    gateCheckbox -> setBounds (
                               493
                             , 6
                             , 14
                             , 14 );
    cachedImage_wavetableRowBackdrop_png_1 = ImageCache::getFromMemory (
                                                                        wavetableRowBackdrop_png
                                                                      , wavetableRowBackdrop_pngSize );

    //[UserPreSize]
    testCheckbox -> setEnabled (
                                false );
    //[/UserPreSize]

    setSize (
             590
           , 24 );


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

WavetableRow::~WavetableRow ()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    rowLabel         = nullptr;
    triangleCheckbox = nullptr;
    sawtoothCheckbox = nullptr;
    pulseCheckbox    = nullptr;
    noiseCheckbox    = nullptr;
    testCheckbox     = nullptr;
    ringCheckbox     = nullptr;
    synCheckbox      = nullptr;
    gateCheckbox     = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //bank = nullptr;
    //[/Destructor]
}

//==============================================================================
void
    WavetableRow::paint (
            Graphics& g
            )
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g . fillAll (
                 Colours::white );
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
                             cachedImage_wavetableRowBackdrop_png_1
                           , x
                           , y
                           , width
                           , height
                           , RectanglePlacement::centred
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
    WavetableRow::resized ()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void
    WavetableRow::buttonClicked (
            Button* button_that_was_clicked
            )
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if ( button_that_was_clicked == triangleCheckbox . get () )
    {
        //[UserButtonCode_triangleCheckbox] -- add your button handler code here..
        //[/UserButtonCode_triangleCheckbox]
    }
    else if ( button_that_was_clicked == sawtoothCheckbox . get () )
    {
        //[UserButtonCode_sawtoothCheckbox] -- add your button handler code here..
        //[/UserButtonCode_sawtoothCheckbox]
    }
    else if ( button_that_was_clicked == pulseCheckbox . get () )
    {
        //[UserButtonCode_pulseCheckbox] -- add your button handler code here..
        //[/UserButtonCode_pulseCheckbox]
    }
    else if ( button_that_was_clicked == noiseCheckbox . get () )
    {
        //[UserButtonCode_noiseCheckbox] -- add your button handler code here..
        //[/UserButtonCode_noiseCheckbox]
    }
    else if ( button_that_was_clicked == testCheckbox . get () )
    {
        //[UserButtonCode_testCheckbox] -- add your button handler code here..
        //[/UserButtonCode_testCheckbox]
    }
    else if ( button_that_was_clicked == ringCheckbox . get () )
    {
        //[UserButtonCode_ringCheckbox] -- add your button handler code here..
        //[/UserButtonCode_ringCheckbox]
    }
    else if ( button_that_was_clicked == synCheckbox . get () )
    {
        //[UserButtonCode_synCheckbox] -- add your button handler code here..
        //[/UserButtonCode_synCheckbox]
    }
    else if ( button_that_was_clicked == gateCheckbox . get () )
    {
        //[UserButtonCode_gateCheckbox] -- add your button handler code here..
        //[/UserButtonCode_gateCheckbox]
    }

    //[UserbuttonClicked_Post]
    dispatcher -> wavetableSelectionChangedListeners -> call (
                                                              &WavetableSelectionChanged::onWavetableSelectionChanged
                                                            , static_cast < unsigned int > ( row ) );
    dispatcher -> wavetableRowChangedListeners -> call (
                                                        &WavetableRowChanged::onWavetableRowChanged
                                                      , get () );
    dispatcher -> bankRepaintWaveformListeners -> call (
                                                        &BankRepaintWaveform::onBankRepaintWaveform );
    //[/UserbuttonClicked_Post]
}


//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
unsigned int
    WavetableRow::get () const
{
    unsigned int ret = 0;
    if ( gateCheckbox -> getToggleState () )
        ret |= 0x01;
    if ( synCheckbox -> getToggleState () )
        ret |= 0x02;
    if ( ringCheckbox -> getToggleState () )
        ret |= 0x04;
    if ( testCheckbox -> getToggleState () )
        ret |= 0x08;
    if ( triangleCheckbox -> getToggleState () )
        ret |= 0x10;
    if ( sawtoothCheckbox -> getToggleState () )
        ret |= 0x20;
    if ( pulseCheckbox -> getToggleState () )
        ret |= 0x40;
    if ( noiseCheckbox -> getToggleState () )
        ret |= 0x80;
    return ret;
}

void
    WavetableRow::set (
            const unsigned int row_num
          , const unsigned int value
            )
{
    gateCheckbox -> setToggleState (
                                    ( value & 0x01 ) == 0x01
                                  , dontSendNotification );
    synCheckbox -> setToggleState (
                                   ( value & 0x02 ) == 0x02
                                 , dontSendNotification );
    ringCheckbox -> setToggleState (
                                    ( value & 0x04 ) == 0x04
                                  , dontSendNotification );
    testCheckbox -> setToggleState (
                                    ( value & 0x08 ) == 0x08
                                  , dontSendNotification );
    triangleCheckbox -> setToggleState (
                                        ( value & 0x10 ) == 0x10
                                      , dontSendNotification );
    sawtoothCheckbox -> setToggleState (
                                        ( value & 0x20 ) == 0x20
                                      , dontSendNotification );
    pulseCheckbox -> setToggleState (
                                     ( value & 0x40 ) == 0x40
                                   , dontSendNotification );
    noiseCheckbox -> setToggleState (
                                     ( value & 0x80 ) == 0x80
                                   , dontSendNotification );
    row                   = row_num;
    const auto row_string = String (
                                    row_num + 1 );
    rowLabel -> setText (
                         row_string . paddedLeft (
                                                  '0'
                                                , 2 )
                       , dontSendNotification );
}

//void WavetableRow::setBank(ReferenceCountedObjectPtr<Bank> value) {
//	bank = value;
//}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="WavetableRow" componentName=""
                 parentClasses="public AbstractWavetableRow" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="590" initialHeight="24">
  <BACKGROUND backgroundColour="ffffffff">
    <IMAGE pos="0 0 592 24" resource="wavetableRowBackdrop_png" opacity="1.0"
           mode="1"/>
  </BACKGROUND>
  <LABEL name="new label" id="1b4eae892bfe6bdb" memberName="rowLabel"
         virtualName="" explicitFocusOrder="0" pos="0 4 44 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="01" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro Mono"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="34"/>
  <TOGGLEBUTTON name="new toggle button" id="81225a8c35f7ea8f" memberName="triangleCheckbox"
                virtualName="" explicitFocusOrder="0" pos="53 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="a4da22dbb32f5d2a" memberName="sawtoothCheckbox"
                virtualName="" explicitFocusOrder="0" pos="109 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="bb73c739ae761157" memberName="pulseCheckbox"
                virtualName="" explicitFocusOrder="0" pos="165 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="3309ed3c2cb9c419" memberName="noiseCheckbox"
                virtualName="" explicitFocusOrder="0" pos="221 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="679bcd3623419e59" memberName="testCheckbox"
                virtualName="" explicitFocusOrder="0" pos="277 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="5c6a0a067ba10ea6" memberName="ringCheckbox"
                virtualName="" explicitFocusOrder="0" pos="349 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="2f9ec4adb84f1737" memberName="synCheckbox"
                virtualName="" explicitFocusOrder="0" pos="421 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="new toggle button" id="512ad5214d55f830" memberName="gateCheckbox"
                virtualName="" explicitFocusOrder="0" pos="493 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: wavetableRowBackdrop_png, 2531, "../../UI/Wavetable Row Backdrop.png"
static const unsigned char resource_WavetableRow_wavetableRowBackdrop_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,80,
0,0,0,24,8,3,0,0,0,2,168,51,95,0,0,2,127,80,76,84,
69,24,16,144,80,144,208,25,18,144,30,28,150,25,18,145,45,64,168,79,
142,208,80,143,208,24,17,144,46,66,169,35,42,157,76,134,203,37,44,158,
65,110,191,72,126,199,58,95,183,26,20,146,28,26,149,71,123,197,67,116,
194,73,127,200,79,143,207,67,114,193,31,32,152,56,91,181,51,78,175,73,
128,201,33,36,154,32,34,153,79,142,207,69,118,195,44,63,167,72,127,199,
71,124,198,66,112,192,72,124,198,53,83,177,65,111,191,53,82,177,48,70,
171,60,99,185,68,116,194,58,92,182,39,50,161,47,68,170,40,51,161,26,
19,145,25,17,145,34,38,155,79,140,206,33,35,153,75,132,202,27,23,147,
67,115,193,63,107,189,62,102,187,34,41,156,44,62,167,74,131,202,32,33,
153,35,40,155,37,45,159,77,137,205,40,52,162,37,46,159,29,28,150,28,
23,148,69,119,195,31,32,151,39,52,161,46,65,169,70,121,196,30,29,150,
52,80,176,44,61,167,30,30,152,30,30,151,61,100,186,60,99,186,72,125,
198,46,67,169,46,66,170,31,33,152,60,100,185,68,117,194,58,94,182,60,
98,185,77,135,204,30,31,151,78,141,207,75,131,201,51,76,174,71,125,199,
29,27,150,28,26,148,67,113,192,77,138,205,26,21,146,75,133,202,62,103,
187,73,128,200,25,20,146,27,22,147,37,46,160,55,87,179,35,41,157,78,
139,206,77,136,204,74,130,201,38,48,160,67,115,194,76,137,204,59,96,185,
25,19,146,29,27,149,41,54,164,37,47,160,67,114,192,56,87,180,61,100,
187,74,132,202,66,111,192,63,106,188,42,58,166,46,68,169,60,97,185,49,
74,173,76,135,203,28,25,149,41,56,164,66,112,193,55,89,180,49,75,173,
53,81,177,74,130,200,77,138,204,70,122,196,38,49,160,51,77,175,32,36,
154,27,24,148,49,72,172,29,29,151,70,120,196,52,79,176,65,108,190,51,
79,175,42,58,165,63,105,188,63,106,189,78,139,205,58,93,183,34,38,156,
26,21,147,44,60,166,47,69,170,68,117,195,62,104,189,34,39,156,39,49,
161,55,88,180,27,25,148,63,103,188,74,129,201,48,71,171,38,48,159,61,
101,187,32,35,154,37,45,158,58,94,183,40,53,162,57,91,182,54,84,178,
33,37,154,34,40,156,62,102,186,79,141,206,56,88,180,43,60,166,52,81,
176,36,43,157,50,76,174,43,59,165,48,73,172,36,44,158,70,119,196,50,
75,173,64,108,190,78,140,206,44,63,168,64,109,191,59,95,184,70,122,197,
55,86,179,43,60,165,41,54,163,45,65,168,74,131,201,27,22,148,75,135,
203,47,68,171,56,90,181,65,108,191,49,73,173,56,89,181,41,55,164,55,
85,179,60,97,184,53,84,177,41,53,163,51,76,175,48,72,172,33,37,155,
185,97,215,77,0,0,7,31,73,68,65,84,120,94,237,153,243,147,59,205,
26,71,159,79,104,172,109,219,198,215,182,109,219,182,205,215,182,125,109,219,
250,131,110,207,116,79,245,78,38,153,100,111,222,228,238,189,149,83,181,213,
115,210,53,63,236,212,169,103,59,59,244,223,38,77,154,52,105,210,164,73,
147,38,141,109,249,114,155,193,205,200,250,254,20,19,55,185,15,130,172,40,
206,214,40,236,40,162,200,136,251,38,16,105,236,128,221,224,102,0,21,83,
140,30,27,104,32,154,83,52,86,96,23,69,227,50,70,41,50,197,146,80,
2,1,184,118,106,88,104,130,96,225,184,104,2,98,89,4,4,108,6,55,
15,35,115,131,193,99,3,196,92,163,81,142,199,52,165,96,163,176,25,159,
236,32,73,63,110,199,44,24,7,18,8,96,54,52,102,80,130,220,168,82,
217,68,137,49,15,28,247,196,28,80,85,85,176,27,220,4,96,150,156,73,
210,147,24,212,6,224,57,58,140,221,76,126,255,196,70,203,49,119,245,91,
164,113,133,237,169,216,134,4,47,17,199,239,247,79,3,144,205,214,97,50,
97,164,169,105,36,70,80,135,50,51,51,87,97,113,251,17,178,181,183,183,
207,167,255,144,21,80,25,164,132,24,154,140,189,229,229,229,171,176,206,56,
121,135,138,139,103,83,138,200,42,17,100,233,7,212,192,128,28,73,210,37,
203,74,214,112,182,111,17,1,100,204,146,51,73,122,56,55,202,5,149,161,
113,5,117,161,92,80,79,130,99,192,214,135,95,226,166,139,142,116,160,189,
117,47,78,252,104,57,105,60,64,62,169,212,156,222,207,249,181,124,204,7,
0,204,161,24,20,2,133,17,159,147,12,106,25,91,95,0,240,129,176,120,
88,186,169,148,243,234,36,82,249,118,135,3,31,135,66,161,18,116,156,161,
248,217,230,40,225,172,63,66,42,57,64,46,91,158,2,104,34,137,220,75,
17,144,23,18,59,214,219,44,21,176,27,92,146,157,167,93,44,213,2,144,
5,25,92,82,241,198,106,78,224,222,184,130,202,89,154,199,129,139,56,213,
0,78,1,240,209,231,192,119,94,7,99,77,43,9,78,226,7,164,50,104,
37,113,49,59,82,80,75,56,123,20,249,6,19,110,199,217,226,5,188,76,
142,27,158,83,164,160,46,247,246,246,94,39,122,241,151,130,15,137,116,38,
249,213,107,195,156,57,31,145,202,93,0,45,108,221,223,213,117,54,100,181,
90,149,238,51,172,214,163,173,86,13,11,17,105,198,235,49,252,94,50,154,
129,154,154,154,126,162,55,154,84,134,136,250,217,194,246,110,75,99,120,82,
21,148,28,72,68,114,36,73,55,13,74,22,100,112,73,197,61,237,162,104,
92,65,57,73,224,212,130,242,99,51,128,26,156,36,59,48,199,14,5,30,
105,91,115,209,54,252,34,174,160,192,208,172,16,154,29,134,6,14,199,21,
20,135,137,32,203,104,130,153,65,173,172,160,46,40,149,185,0,22,179,53,
0,12,142,64,163,147,136,52,107,137,21,20,105,166,82,75,84,3,142,206,
114,83,21,148,28,72,68,114,36,73,55,13,74,22,164,243,36,5,213,54,
138,79,128,74,31,110,186,174,1,11,254,132,91,0,254,76,10,45,104,40,
197,247,226,8,234,98,53,246,21,20,20,108,195,137,234,126,119,245,33,20,
112,142,31,99,203,62,168,123,199,76,130,42,173,171,171,59,136,103,243,143,
254,174,142,49,131,39,84,159,159,255,83,100,215,205,240,168,91,249,249,57,
49,130,178,55,108,197,187,62,198,30,99,80,131,13,13,13,135,112,206,183,
195,119,30,222,6,133,111,153,7,85,236,86,96,91,43,130,140,171,120,206,
253,193,69,118,225,4,186,152,95,153,236,174,192,251,193,224,2,172,119,191,
151,162,160,228,64,226,35,201,224,38,65,201,130,244,158,156,160,218,145,61,
9,248,187,235,29,248,54,1,183,123,208,124,246,170,248,59,87,7,231,94,
88,99,5,37,207,73,118,0,246,171,0,76,206,80,144,23,198,111,121,107,
20,89,38,198,149,152,94,119,249,22,219,51,15,74,30,202,141,65,85,171,
131,24,200,3,176,144,56,166,65,149,1,242,12,165,154,123,236,244,10,2,
40,230,223,7,87,166,40,40,57,144,248,72,50,184,89,80,178,32,189,39,
37,168,37,88,118,127,243,35,23,237,198,87,135,224,236,216,140,141,212,140,
32,17,133,44,215,0,236,117,197,23,212,243,245,245,245,89,0,236,45,3,
94,212,43,156,31,87,80,95,92,159,78,244,221,27,137,4,181,120,129,130,
115,213,203,77,9,7,245,226,83,63,15,234,155,181,140,215,34,5,149,95,
91,123,45,117,65,201,129,36,71,146,222,77,131,146,5,233,61,25,65,125,
132,7,100,253,13,145,15,183,176,150,143,147,59,232,33,186,236,61,232,7,
176,136,226,11,74,195,174,25,14,143,43,168,243,220,18,8,74,80,2,28,
76,52,40,249,45,143,25,195,24,20,39,117,65,201,129,36,71,146,222,205,
131,146,5,233,61,9,65,253,76,156,146,92,239,0,189,63,4,222,38,178,
98,85,65,222,143,1,39,74,240,147,56,131,58,61,153,195,162,247,40,235,
187,216,218,51,51,206,160,114,207,45,196,180,190,225,200,65,21,157,243,227,
68,95,95,159,51,70,80,190,117,235,214,229,137,160,62,255,116,19,182,49,
247,38,24,212,207,87,58,47,149,149,149,53,70,10,234,98,153,202,8,37,
9,88,4,208,13,40,57,146,194,93,235,168,211,198,217,174,15,74,20,100,
240,175,59,168,238,156,142,29,164,178,27,168,101,63,5,76,70,129,83,125,
0,28,43,241,130,214,145,231,33,167,43,250,25,138,97,190,103,124,78,34,
33,62,134,34,6,53,174,111,121,34,40,110,140,56,130,154,103,225,156,142,
16,84,57,176,223,228,12,149,84,42,33,168,212,13,40,57,146,194,157,56,
65,8,42,66,250,160,68,65,225,174,201,179,131,133,156,223,190,53,174,160,
22,109,207,230,4,184,55,33,139,56,62,224,153,37,192,199,76,94,5,110,
109,118,158,66,224,245,158,59,196,121,179,92,240,7,139,49,26,235,124,56,
214,42,252,145,232,139,181,42,94,188,63,191,123,204,222,201,8,207,73,6,
101,245,188,141,245,165,171,179,102,1,184,84,250,138,62,168,233,30,133,18,
125,80,77,151,30,113,110,206,33,149,254,230,30,244,54,54,54,230,236,107,
190,162,88,115,115,5,128,87,202,198,6,53,181,249,47,8,52,42,20,145,
96,33,4,153,173,164,50,249,25,140,230,230,230,22,226,211,93,83,61,187,
114,190,100,215,139,212,160,228,158,187,115,87,41,74,115,25,249,148,50,108,
1,117,32,201,145,20,238,54,147,87,40,178,160,138,112,159,66,97,175,66,
166,210,184,130,218,50,36,216,194,253,46,222,36,142,107,187,115,245,135,128,
149,201,5,48,166,133,254,234,38,83,222,115,56,28,143,185,56,24,220,106,
28,130,32,9,132,25,48,254,31,106,13,84,254,166,15,138,97,60,67,81,
167,135,51,220,22,241,213,139,72,168,149,120,80,210,56,45,113,190,203,147,
103,40,190,151,178,255,67,73,244,3,74,142,164,112,183,155,5,37,11,146,
46,103,212,215,249,46,239,44,94,214,228,179,22,234,238,8,40,242,15,56,
248,236,73,62,109,25,25,25,59,153,236,100,107,219,198,12,149,45,170,136,
189,127,122,57,232,202,152,74,166,252,107,146,202,1,162,59,79,20,188,152,
57,201,69,247,217,71,157,68,228,97,171,98,156,141,20,21,203,60,206,75,
138,204,103,34,76,238,117,19,29,229,159,110,160,148,81,133,129,177,58,128,
112,175,50,11,67,22,100,240,105,177,130,18,24,61,34,91,177,116,172,126,
54,93,145,233,23,220,192,30,154,16,92,127,94,16,160,184,153,11,78,39,
253,255,224,175,180,232,178,175,12,119,127,148,251,244,159,103,28,52,184,249,
125,149,224,56,140,30,17,127,13,69,194,117,230,140,139,254,103,233,46,226,
180,82,116,210,164,73,147,38,205,191,1,117,21,203,10,35,173,245,123,0,
0,0,0,73,69,78,68,174,66,96,130
};
const char* WavetableRow::wavetableRowBackdrop_png     = ( const char* ) resource_WavetableRow_wavetableRowBackdrop_png;
const int   WavetableRow::wavetableRowBackdrop_pngSize = 2531;


//[EndFile] You can add extra defines here...
//[/EndFile]
