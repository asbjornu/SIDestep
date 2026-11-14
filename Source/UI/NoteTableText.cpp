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
#include "../Listeners/Patch Editor/PatchEditorShowNoteTable.h"
//[/Headers]

#include "NoteTableText.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
NoteTableText::NoteTableText (
        std::shared_ptr < EventDispatcher > dispatcher
        )
    :
    dispatcher (
                dispatcher )
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    cachedImage_noteTable_png_1 = juce::ImageCache::getFromMemory (noteTable_png, noteTable_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (131, 17);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

NoteTableText::~NoteTableText()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void NoteTableText::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    {
        int x = 0, y = 0, width = 131, height = 17;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImageWithin (cachedImage_noteTable_png_1,
                           x, y, width, height,
                           juce::RectanglePlacement::centred,
                           false);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void NoteTableText::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void NoteTableText::mouseUp (const juce::MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...
    dispatcher -> patchEditorShowNoteTableListeners -> call (
                                                             &PatchEditorShowNoteTable::onPatchEditorShowNoteTable );
    //[/UserCode_mouseUp]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="NoteTableText" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="131" initialHeight="17">
  <METHODS>
    <METHOD name="mouseUp (const juce::MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="0">
    <IMAGE pos="0 0 131 17" resource="noteTable_png" opacity="1.0" mode="1"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: noteTable_png, 1305, "NoteTable.png"
static const unsigned char resource_NoteTableText_noteTable_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,131,
0,0,0,17,8,3,0,0,0,201,237,239,28,0,0,1,236,80,76,84,
69,0,0,0,25,14,144,22,15,146,24,16,144,0,0,153,26,18,141,24,
17,143,24,17,144,24,16,144,24,16,145,23,16,144,23,15,143,24,16,145,
23,15,143,25,16,143,17,17,136,25,16,145,23,16,145,0,0,170,24,17,
144,26,16,146,28,28,142,22,11,144,24,12,146,24,16,144,24,15,144,23,
17,144,24,16,144,25,16,143,0,0,128,24,15,144,23,17,145,24,16,144,
24,16,144,24,15,144,23,17,143,25,17,143,26,13,144,28,14,142,24,16,
145,24,16,144,23,16,144,24,16,144,23,17,145,24,16,144,24,16,144,25,
15,144,24,15,144,23,16,144,24,16,144,23,17,144,24,16,145,25,17,143,
23,17,143,24,15,144,25,15,145,24,16,146,24,16,144,80,144,208,56,89,
181,72,125,198,41,53,163,32,36,154,49,71,172,25,18,145,25,17,145,64,
109,191,30,31,151,31,32,151,71,125,199,26,21,146,60,100,185,54,85,179,
77,138,205,76,135,203,69,118,195,77,136,204,72,126,199,35,42,157,52,80,
176,30,29,150,24,17,144,58,95,183,75,133,203,54,84,179,62,102,186,67,
115,193,25,18,144,74,129,201,29,28,150,50,76,174,64,107,190,25,20,146,
43,59,165,27,25,148,29,27,149,37,44,158,32,34,153,53,83,177,70,122,
196,63,107,189,34,39,156,39,52,161,48,73,172,50,76,173,62,102,187,42,
56,163,59,95,184,33,35,153,53,81,177,56,88,180,74,132,202,61,101,187,
47,68,170,51,79,175,41,56,164,45,65,168,45,64,167,72,124,198,61,100,
186,66,112,192,58,92,183,45,64,168,78,141,207,46,68,169,34,40,156,44,
61,166,53,82,177,43,60,165,46,68,170,37,46,160,68,116,194,64,108,190,
61,100,187,30,28,150,38,48,160,78,139,205,78,139,206,51,78,175,77,138,
204,42,58,165,49,73,173,62,104,189,27,22,147,36,43,157,79,140,206,44,
63,168,76,137,204,41,54,163,59,96,184,80,143,208,51,76,175,72,127,199,
73,127,200,49,75,173,68,117,195,49,72,172,71,123,198,38,49,160,70,119,
196,39,50,161,58,92,182,48,71,171,33,36,154,191,37,158,21,0,0,0,
57,116,82,78,83,0,71,35,179,5,29,107,106,213,194,174,68,141,34,208,
15,155,111,3,136,49,9,23,21,172,183,154,188,114,2,151,44,161,243,247,
185,91,39,18,125,211,142,230,120,177,241,83,198,239,246,122,95,123,89,214,
102,63,90,168,167,98,0,0,2,163,73,68,65,84,120,94,149,213,101,115,
219,74,20,199,97,219,173,107,23,210,164,105,131,101,102,198,255,10,13,97,
102,166,50,51,51,51,51,195,189,95,180,71,218,19,69,224,90,147,223,27,
233,172,108,205,51,26,121,29,129,183,121,145,201,55,29,158,230,68,38,27,
96,154,102,10,64,138,142,126,67,113,76,86,22,98,232,49,157,218,220,134,
178,152,172,216,26,86,197,198,91,232,55,164,132,16,105,0,157,116,108,246,
25,226,144,21,133,24,186,133,211,33,183,161,8,178,184,53,204,5,135,194,
92,134,110,189,143,13,137,168,187,21,48,117,157,174,85,68,61,173,244,27,
106,84,181,138,0,143,85,85,189,128,69,81,167,10,244,209,247,77,54,96,
68,183,74,161,176,52,58,81,137,52,80,87,216,224,47,75,178,118,248,154,
229,55,80,131,100,24,64,160,118,162,101,217,128,90,97,53,140,194,77,152,
168,192,49,220,215,186,164,193,212,100,25,0,143,52,237,42,25,210,52,182,
2,248,45,175,252,143,249,137,197,110,195,146,100,50,201,134,165,116,186,12,
119,53,187,27,142,97,91,130,90,142,243,3,167,108,195,130,74,60,212,100,
213,88,157,96,3,71,134,97,30,206,0,104,18,78,55,1,116,200,225,36,
128,105,17,111,83,217,48,133,134,217,216,39,236,106,28,131,211,17,219,64,
13,9,217,24,0,191,225,122,191,232,80,20,165,91,60,48,50,56,171,40,
31,8,240,131,22,154,49,100,212,93,163,147,253,226,178,113,32,196,208,175,
80,167,69,131,49,106,27,90,12,234,168,219,48,98,28,19,13,244,153,94,
113,194,8,26,26,133,248,5,224,48,13,7,189,239,195,61,122,231,0,156,
35,212,127,33,6,187,81,66,237,37,3,151,118,27,154,233,208,9,32,77,
99,138,13,23,141,75,185,12,229,149,108,88,179,118,157,101,176,159,67,136,
97,253,134,141,252,28,108,3,63,135,91,162,87,185,237,49,240,115,96,131,
141,188,147,203,48,51,206,134,162,200,102,50,200,66,12,51,0,126,31,28,
67,22,56,78,195,31,183,129,243,24,50,90,87,30,195,150,228,86,203,240,
68,147,101,243,26,158,14,60,19,207,53,237,69,136,161,75,147,1,158,125,
50,104,240,191,15,92,94,195,75,210,188,2,70,67,12,157,224,2,134,177,
215,226,141,170,170,29,162,69,175,182,12,166,254,86,188,163,133,247,200,232,
245,31,85,171,79,40,143,198,243,24,90,117,85,84,169,106,175,99,248,172,
170,95,236,173,248,171,90,71,99,211,55,12,234,223,69,189,106,149,193,246,
168,203,16,220,31,200,0,252,12,236,15,188,79,134,189,15,193,223,69,173,
28,26,61,251,67,65,224,127,147,70,89,27,118,196,74,138,99,59,209,198,
35,192,255,142,169,92,6,121,27,50,148,198,118,241,7,237,133,212,196,41,
192,67,15,64,119,149,65,26,254,213,238,8,181,7,193,114,26,100,188,63,
76,34,50,252,5,243,12,146,158,168,48,178,18,0,0,0,0,73,69,78,
68,174,66,96,130
};

const char* NoteTableText::noteTable_png = (const char*) resource_NoteTableText_noteTable_png;
const int NoteTableText::noteTable_pngSize = 1305;


//[EndFile] You can add extra defines here...
//[/EndFile]

