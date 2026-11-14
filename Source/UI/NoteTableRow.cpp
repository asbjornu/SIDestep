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
#include <string>
#include "../Programs/ArpRow.h"
//[/Headers]

#include "NoteTableRow.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
NoteTableRow::NoteTableRow (
        const std::shared_ptr < EventDispatcher >& dispatcher
        )
    :
    AbstractNoteTableRow (
                          dispatcher )
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    relativeAbsolute . reset (
                              new ToggleButton (
                                                "new toggle button" ) );
    addAndMakeVisible (
                       relativeAbsolute . get () );
    relativeAbsolute -> setButtonText (
                                       String () );
    relativeAbsolute -> addListener (
                                     this );
    relativeAbsolute -> setBounds (
                                   54
                                 , 6
                                 , 14
                                 , 14 );
    noteOffset . reset (
                        new Label (
                                   "new label"
                                 , String () ) );
    addAndMakeVisible (
                       noteOffset . get () );
    noteOffset -> setFont (
                           Font (
                                 "C64 Pro"
                               , 15.00f
                               , Font::plain ) . withTypefaceStyle (
                                                                    "Regular" ) );
    noteOffset -> setJustificationType (
                                        Justification::centred );
    noteOffset -> setEditable (
                               true
                             , true
                             , false );
    noteOffset -> setColour (
                             Label::textColourId
                           , Colour (
                                     0xff5090d0 ) );
    noteOffset -> setColour (
                             TextEditor::textColourId
                           , Colours::black );
    noteOffset -> setColour (
                             TextEditor::backgroundColourId
                           , Colour (
                                     0x00000000 ) );
    noteOffset -> addListener (
                               this );
    noteOffset -> setBounds (
                             296
                           , 3
                           , 56
                           , 20 );
    frequency . reset (
                       new Label (
                                  "new label"
                                , String () ) );
    addAndMakeVisible (
                       frequency . get () );
    frequency -> setFont (
                          Font (
                                "C64 Pro"
                              , 15.00f
                              , Font::plain ) . withTypefaceStyle (
                                                                   "Regular" ) );
    frequency -> setJustificationType (
                                       Justification::centredLeft );
    frequency -> setEditable (
                              true
                            , true
                            , false );
    frequency -> setColour (
                            Label::textColourId
                          , Colour (
                                    0xff5090d0 ) );
    frequency -> setColour (
                            TextEditor::textColourId
                          , Colours::black );
    frequency -> setColour (
                            TextEditor::backgroundColourId
                          , Colour (
                                    0x00000000 ) );
    frequency -> addListener (
                              this );
    frequency -> setBounds (
                            496
                          , 3
                          , 94
                          , 20 );
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
                             , 12.00f
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
    cachedImage_noteTableAbsoluteRow_png_1 = ImageCache::getFromMemory (
                                                                        noteTableAbsoluteRow_png
                                                                      , noteTableAbsoluteRow_pngSize );
    cachedImage_noteTableRelativeRow_png_2 = ImageCache::getFromMemory (
                                                                        noteTableRelativeRow_png
                                                                      , noteTableRelativeRow_pngSize );

    //[UserPreSize]
    //[/UserPreSize]

    setSize (
             590
           , 24 );


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

NoteTableRow::~NoteTableRow ()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    relativeAbsolute = nullptr;
    noteOffset       = nullptr;
    frequency        = nullptr;
    rowLabel         = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void
    NoteTableRow::paint (
            Graphics& g
            )
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    {
        const auto x      = 0;
        const auto y      = 0;
        const auto width  = 592;
        const auto height = 24;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g . setColour (
                       Colours::black );
        g . drawImage (
                       cachedImage_noteTableAbsoluteRow_png_1
                     , x
                     , y
                     , width
                     , height
                     , 0
                     , 0
                     , cachedImage_noteTableAbsoluteRow_png_1 . getWidth ()
                     , cachedImage_noteTableAbsoluteRow_png_1 . getHeight () );
    }
    {
        const auto x      = 0;
        const auto y      = 0;
        const auto width  = 592;
        const auto height = 24;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        if ( !relativeAbsolute -> getToggleState () )
        {
            //[/UserPaintCustomArguments]
            g . setColour (
                           Colours::black );
            g . drawImage (
                           cachedImage_noteTableRelativeRow_png_2
                         , x
                         , y
                         , width
                         , height
                         , 0
                         , 0
                         , cachedImage_noteTableRelativeRow_png_2 . getWidth ()
                         , cachedImage_noteTableRelativeRow_png_2 . getHeight () );
        }

        //[UserPaint] Add your own custom painting code here..
    }
    if ( selected )
    {
        const Colour lt_blue (
                              0xff5090d0 );
        g . setColour (
                       lt_blue );
        Path p;
        p . addTriangle (
                         0.0f
                       , 0.0f
                       , 12.0f
                       , 12.0f
                       , 0.0f
                       , 24.0f );
        g . fillPath (
                      p );
    }
    //[/UserPaint]
}

void
    NoteTableRow::resized ()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void
    NoteTableRow::buttonClicked (
            Button* button_that_was_clicked
            )
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if ( button_that_was_clicked == relativeAbsolute . get () )
    {
        //[UserButtonCode_relativeAbsolute] -- add your button handler code here..
        noteOffset -> setText (
                               ""
                             , dontSendNotification );
        frequency -> setText (
                              ""
                            , dontSendNotification );
        // TODO(deathy): Make relative frequencies an option.
        frequency -> setEditable (
                                  relativeAbsolute -> getToggleState () );

        //[/UserButtonCode_relativeAbsolute]
    }

    //[UserbuttonClicked_Post]
    dispatcher -> noteTableSelectionChangedListeners -> call (
                                                              &NoteTableSelectionChanged::onNoteTableSelectionChanged
                                                            , static_cast < unsigned int > ( row ) );
    auto changed = Get ();
    dispatcher -> noteTableRowChangedListeners -> call (
                                                        &NoteTableRowChanged::onNoteTableRowChanged
                                                      , changed );
    dispatcher -> bankRepaintWaveformListeners -> call (
                                                        &BankRepaintWaveform::onBankRepaintWaveform );
    //[/UserbuttonClicked_Post]
}

void
    NoteTableRow::labelTextChanged (
            Label* label_that_has_changed
            )
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if ( label_that_has_changed == noteOffset . get () )
    {
        //[UserLabelCode_noteOffset] -- add your label text handling code here..
        if ( relativeAbsolute -> getToggleState () ) { SetFrequencyFromNote (); }
        //[/UserLabelCode_noteOffset]
    }
    else if ( label_that_has_changed == frequency . get () )
    {
        //[UserLabelCode_frequency] -- add your label text handling code here..
        if ( relativeAbsolute -> getToggleState () ) { SetNoteFromFrequency (); }
        //[/UserLabelCode_frequency]
    }

    //[UserlabelTextChanged_Post]
    dispatcher -> noteTableSelectionChangedListeners -> call (
                                                              &NoteTableSelectionChanged::onNoteTableSelectionChanged
                                                            , static_cast < unsigned int > ( row ) );
    auto changed = Get ();
    dispatcher -> noteTableRowChangedListeners -> call (
                                                        &NoteTableRowChanged::onNoteTableRowChanged
                                                      , changed );
    dispatcher -> bankRepaintWaveformListeners -> call (
                                                        &BankRepaintWaveform::onBankRepaintWaveform );
    //[/UserlabelTextChanged_Post]
}


//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
auto
    NoteTableRow::Get () const -> ArpRow
{
    ArpRow ret {
            RELATIVE
          , 0
    };
    if ( relativeAbsolute -> getToggleState () )
    {
        ret . rowType = ABSOLUTE;
        if ( frequency -> getText () . length () > 0 )
        {
            ret . value = std::stoi (
                                     frequency -> getText () . toRawUTF8 () );
        }
    }
    else
    {
        if ( noteOffset -> getText () . length () > 0 )
        {
            ret . value = std::stoi (
                                     noteOffset -> getText () . toRawUTF8 () );
        }
    }
    return ret;
}

void
    NoteTableRow::Set (
            const unsigned row_num
          , const ArpRow   value
            )
{
    relativeAbsolute -> setToggleState (
                                        value . rowType == ABSOLUTE
                                      , dontSendNotification );
    if ( !relativeAbsolute -> getToggleState () )
    {
        noteOffset -> setText (
                               String (
                                       value . value )
                             , dontSendNotification );
        frequency -> setText (
                              ""
                            , dontSendNotification );
        frequency -> setEditable (
                                  false );
    }
    else
    {
        frequency -> setText (
                              String (
                                      value . value )
                            , dontSendNotification );
        SetNoteFromFrequency ();
    }
    row                   = static_cast < int > ( row_num );
    const auto row_string = String (
                                    row_num + 1 );
    rowLabel -> setText (
                         row_string . paddedLeft (
                                                  '0'
                                                , 2 )
                       , dontSendNotification );
}

void
    NoteTableRow::SetNoteFromFrequency () const
{
    static const std::vector < String > INVERSE_BASE_SCALE {
            "C-"
          , "C#"
          , "D-"
          , "D#"
          , "E-"
          , "F-"
          , "F#"
          , "G-"
          , "G#"
          , "A-"
          , "A#"
          , "B-"
    };
    const auto v = std::stoi (
                              frequency -> getText () . toRawUTF8 () );
    if ( v == 0 ) { return; }
    const auto mv = v / 440.0;
    const auto bp = log2 (
                          mv );
    const auto ov     = bp * 12.0;
    const auto note   = ov + 69;
    const auto i_note = static_cast < int > ( round (
                                                     note ) );
    const auto note_part = String (
                                   INVERSE_BASE_SCALE [ i_note % 12 ] );
    const auto octave_part = String (
                                     static_cast < int > ( i_note / 12 ) - 1 );
    noteOffset -> setText (
                           note_part + octave_part
                         , dontSendNotification );
}

void
    NoteTableRow::SetFrequencyFromNote () const
{
    static const std::map < String , int > BASE_SCALE {
            {
                    "c-"
                  , 0
            }
          , {
                    "c#"
                  , 1
            }
          , {
                    "db"
                  , 1
            }
          , {
                    "d-"
                  , 2
            }
          , {
                    "d#"
                  , 3
            }
          , {
                    "eb"
                  , 3
            }
          , {
                    "e-"
                  , 4
            }
          , {
                    "f-"
                  , 5
            }
          , {
                    "f#"
                  , 6
            }
          , {
                    "gb"
                  , 6
            }
          , {
                    "g-"
                  , 7
            }
          , {
                    "g#"
                  , 8
            }
          , {
                    "ab"
                  , 8
            }
          , {
                    "a-"
                  , 9
            }
          , {
                    "a#"
                  , 10
            }
          , {
                    "bb"
                  , 10
            }
          , {
                    "b-"
                  , 11
            }
           ,
    };
    const auto note_text = noteOffset -> getText ();
    const auto note_part = note_text . substring (
                                                  0
                                                , 2 ) . toLowerCase ();
    if ( BASE_SCALE . find (
                            note_part ) == BASE_SCALE . end () ) { return; }
    const auto note_index = BASE_SCALE . at (
                                             note_part );
    const auto octave_part = std::stoi (
                                        note_text . substring (
                                                               2 ) . toRawUTF8 () ) + 1;
    const auto note = octave_part * 12 + note_index;
    // Note 69 = 440 = Middle A
    const auto f = 440.0 * pow (
                                2
                              , ( note - 69.0 ) / 12.0 );

    //// 17.02841924063789015557504303485 = PAL constant
    //const auto fv = 17.02841924063789015557504303485 * f;
    const auto v = int (
                        f );
    frequency -> setText (
                          String (
                                  v )
                        , dontSendNotification );
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="NoteTableRow" componentName=""
                 parentClasses="public AbstractNoteTableRow" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="590" initialHeight="24">
  <BACKGROUND backgroundColour="0">
    <IMAGE pos="0 0 592 24" resource="noteTableAbsoluteRow_png" opacity="1.0"
           mode="0"/>
    <IMAGE pos="0 0 592 24" resource="noteTableRelativeRow_png" opacity="1.0"
           mode="0"/>
  </BACKGROUND>
  <TOGGLEBUTTON name="new toggle button" id="449730a9aa88bdb9" memberName="relativeAbsolute"
                virtualName="" explicitFocusOrder="0" pos="54 6 14 14" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="c84faa199ea1ccce" memberName="noteOffset"
         virtualName="" explicitFocusOrder="0" pos="296 3 56 20" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="718fa581b1eabe4b" memberName="frequency"
         virtualName="" explicitFocusOrder="0" pos="496 3 94 20" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1b4eae892bfe6bdb" memberName="rowLabel"
         virtualName="" explicitFocusOrder="0" pos="0 4 44 18" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="01" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro Mono"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="34"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: noteTableAbsoluteRow_png, 376, "../../UI/NoteTableAbsoluteRow.png"
static const unsigned char resource_NoteTableRow_noteTableAbsoluteRow_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,80,
0,0,0,24,4,3,0,0,0,199,88,222,94,0,0,0,27,80,76,84,
69,24,16,144,80,144,208,32,33,153,77,135,204,76,135,203,31,32,152,76,
137,204,76,134,203,37,47,160,74,182,240,25,0,0,1,24,73,68,65,84,
120,94,237,216,77,10,194,48,16,5,224,9,248,179,157,119,5,87,238,5,
207,225,81,60,131,39,151,161,237,131,78,33,102,176,96,90,231,65,50,74,
186,24,62,154,18,34,187,79,38,115,186,85,114,151,85,114,70,44,79,233,
48,135,240,98,60,229,117,137,228,170,127,11,245,144,72,142,107,67,37,84,
193,154,166,128,141,47,160,10,44,186,33,168,132,98,55,252,169,212,242,79,
105,20,20,192,12,10,136,66,17,169,11,40,78,141,80,9,85,6,165,2,
37,27,116,208,27,22,249,192,108,165,2,101,17,225,204,26,128,98,35,86,
89,160,236,103,108,133,107,92,234,0,42,161,44,74,32,165,158,27,156,108,
124,132,226,55,157,19,208,4,229,94,230,198,34,210,3,84,66,209,196,237,
254,42,148,165,10,37,14,138,122,161,173,199,98,89,208,88,250,135,74,40,
182,88,131,210,166,3,167,135,10,30,15,124,145,178,164,17,255,15,248,29,
84,66,193,50,131,90,30,77,166,153,29,180,29,15,166,49,234,196,143,7,
94,136,86,236,197,127,32,192,221,183,42,20,179,75,168,188,102,169,239,122,
130,198,47,238,54,127,21,28,135,234,225,42,56,147,121,3,113,31,96,189,
71,244,130,81,0,0,0,0,73,69,78,68,174,66,96,130
};
const char* NoteTableRow::noteTableAbsoluteRow_png     = ( const char* ) resource_NoteTableRow_noteTableAbsoluteRow_png;
const int   NoteTableRow::noteTableAbsoluteRow_pngSize = 376;

// JUCER_RESOURCE: noteTableRelativeRow_png, 383, "../../UI/NoteTableRelativeRow.png"
static const unsigned char resource_NoteTableRow_noteTableRelativeRow_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,2,80,
0,0,0,24,4,3,0,0,0,199,88,222,94,0,0,0,27,80,76,84,
69,24,16,144,80,144,208,32,33,153,77,135,204,76,135,203,31,32,152,76,
137,204,76,134,203,37,47,160,74,182,240,25,0,0,1,31,73,68,65,84,
120,94,237,152,77,10,2,49,12,133,59,224,207,118,114,5,87,238,5,207,
225,81,60,131,39,151,152,194,199,24,24,26,45,88,198,60,72,140,36,139,
199,7,143,129,150,205,43,149,58,92,86,116,45,93,116,148,152,238,101,64,
237,194,203,184,166,199,41,162,243,252,183,160,110,161,243,125,95,80,9,106,
210,152,126,11,85,163,222,1,20,134,112,52,62,168,4,133,27,155,102,45,
176,97,81,119,181,175,75,196,170,8,221,157,52,130,194,204,24,160,104,49,
80,9,106,178,4,234,104,51,25,112,87,158,2,69,23,29,232,34,1,80,
230,1,47,245,239,210,6,39,172,6,0,149,160,140,10,133,221,218,88,113,
129,0,165,190,233,108,36,16,61,200,152,153,198,159,82,6,1,149,160,240,
5,48,194,143,5,171,122,213,26,61,235,97,80,243,123,2,61,26,213,168,
160,18,20,129,130,10,209,35,128,92,53,128,178,129,249,67,80,248,114,104,
72,39,72,127,7,42,65,137,202,127,248,233,149,145,250,32,134,117,239,180,
200,151,141,42,54,175,33,12,138,143,32,78,177,185,180,14,212,110,160,208,
246,64,229,51,11,28,188,0,186,137,135,187,248,83,112,28,212,8,79,193,
169,212,19,154,170,98,221,231,87,198,90,0,0,0,0,73,69,78,68,174,
66,96,130
};
const char* NoteTableRow::noteTableRelativeRow_png     = ( const char* ) resource_NoteTableRow_noteTableRelativeRow_png;
const int   NoteTableRow::noteTableRelativeRow_pngSize = 383;


//[EndFile] You can add extra defines here...
//[/EndFile]
