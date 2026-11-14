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
#include "../Listeners/Patch Editor/PatchEditorShowPulseTable.h"
//[/Headers]

#include "PulseTableText.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PulseTableText::PulseTableText (
        std::shared_ptr < EventDispatcher > dispatcher
        )
    :
    dispatcher (
                dispatcher )
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    cachedImage_pulseTable_png_1 = juce::ImageCache::getFromMemory (pulseTable_png, pulseTable_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (141, 17);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PulseTableText::~PulseTableText()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PulseTableText::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    {
        int x = 0, y = 0, width = 141, height = 17;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImageWithin (cachedImage_pulseTable_png_1,
                           x, y, width, height,
                           juce::RectanglePlacement::centred,
                           false);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PulseTableText::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void PulseTableText::mouseUp (const juce::MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...
    dispatcher -> patchEditorShowPulseTableListeners -> call (
                                                              &PatchEditorShowPulseTable::onPatchEditorShowPulseTable );
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

<JUCER_COMPONENT documentType="Component" className="PulseTableText" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="141" initialHeight="17">
  <METHODS>
    <METHOD name="mouseUp (const juce::MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="0">
    <IMAGE pos="0 0 141 17" resource="pulseTable_png" opacity="1.0" mode="1"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: pulseTable_png, 1305, "../../UI/PulseTable.png"
static const unsigned char resource_PulseTableText_pulseTable_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,141,
0,0,0,17,8,3,0,0,0,215,36,223,175,0,0,1,215,80,76,84,
69,0,0,0,25,14,144,22,15,146,24,17,144,18,18,146,23,17,142,24,
15,145,24,16,144,23,23,139,25,16,148,24,16,144,24,16,144,24,16,144,
22,17,144,24,16,144,25,15,144,25,15,142,24,16,144,24,16,144,24,15,
144,23,17,145,28,19,142,23,15,143,23,15,144,24,17,144,24,16,144,32,
0,159,28,28,142,20,20,143,24,15,144,24,16,144,23,12,139,24,16,144,
23,17,145,25,16,144,25,16,144,23,16,144,24,16,144,23,15,147,21,21,
149,24,16,144,24,16,143,24,16,145,23,16,145,24,16,144,24,16,144,0,
0,153,23,15,145,24,17,144,24,15,144,25,17,145,0,0,170,25,16,145,
26,17,145,23,15,145,24,17,143,24,16,143,24,15,143,24,16,144,80,144,
208,49,71,172,32,36,154,72,125,198,41,53,163,76,134,203,25,18,144,79,
142,208,79,141,206,32,35,154,64,109,191,30,29,150,39,49,161,75,131,201,
39,50,161,67,113,192,77,135,204,34,40,156,58,95,183,30,30,151,65,108,
190,74,130,200,46,68,169,43,60,166,24,17,144,26,21,147,56,89,181,25,
18,145,35,42,157,52,79,176,68,116,194,26,21,146,51,77,175,66,112,192,
25,19,146,33,35,153,27,23,147,65,110,191,49,75,173,60,100,185,64,107,
190,30,28,150,32,34,153,71,124,198,63,105,188,25,17,145,50,76,174,72,
127,199,57,91,182,47,68,171,75,132,202,32,33,153,30,30,152,60,99,186,
61,100,187,46,66,169,67,115,194,26,20,146,63,106,189,75,133,203,33,37,
154,44,61,167,31,32,151,30,31,151,71,123,197,40,51,161,72,126,199,58,
93,183,41,54,164,53,82,177,54,84,178,62,103,187,60,99,185,52,80,176,
55,86,179,29,27,150,31,33,152,79,142,207,74,132,202,78,141,207,70,119,
196,40,52,163,78,139,205,25,20,146,34,38,155,39,52,161,80,143,208,74,
130,201,28,25,149,55,85,179,78,139,206,38,48,160,73,127,200,27,22,148,
42,58,166,78,140,206,53,84,177,34,39,156,14,133,171,242,0,0,0,58,
116,82,78,83,0,71,35,106,14,77,116,235,11,31,252,213,193,46,232,165,
52,221,249,119,44,27,34,99,108,253,8,9,25,214,251,22,202,120,186,124,
175,205,33,12,225,162,180,164,219,241,5,67,200,215,104,3,93,30,132,107,
32,84,242,14,171,13,0,0,2,183,73,68,65,84,120,218,165,214,101,115,
26,65,0,198,241,3,106,9,117,119,119,119,121,158,19,66,210,54,141,11,
33,238,238,82,119,119,119,253,176,221,189,219,99,129,4,104,166,191,55,112,
195,206,206,127,118,118,247,48,144,108,141,241,95,230,32,213,82,99,182,128,
184,175,22,219,130,27,140,132,141,65,37,111,22,53,113,45,165,102,85,208,
181,218,144,182,4,149,213,211,107,232,155,2,112,196,72,216,14,101,241,191,
215,180,83,171,79,174,57,10,215,114,67,90,2,37,127,198,154,95,182,109,
71,216,108,53,97,69,32,97,23,42,44,161,87,212,236,14,100,176,39,173,
38,38,38,42,38,121,77,124,190,199,90,61,240,24,110,89,86,91,162,166,
199,18,138,68,205,170,128,182,94,213,148,0,104,32,121,9,41,206,83,24,
21,53,43,144,193,162,180,26,233,62,201,78,76,211,72,22,38,106,38,40,
68,69,205,26,104,121,211,106,190,57,206,69,0,23,28,199,25,199,131,238,
183,178,230,80,104,39,198,28,69,6,247,56,158,31,56,29,58,108,104,11,
194,225,240,94,85,179,56,28,222,132,2,199,51,230,215,108,14,73,91,209,
217,93,42,107,214,133,14,96,220,241,92,193,142,80,122,205,16,89,12,224,
6,201,106,0,182,172,145,6,169,68,0,252,164,231,15,128,57,70,170,185,
170,102,158,136,67,140,158,65,191,70,187,44,107,164,41,122,110,2,240,106,
238,154,166,217,205,142,186,162,12,53,109,102,63,91,234,92,191,241,204,44,
231,107,241,237,59,31,154,173,217,107,90,235,164,22,246,155,109,178,38,106,
74,23,147,107,42,204,46,54,138,49,197,124,98,2,105,103,42,67,77,13,
201,17,40,245,36,159,2,184,74,178,61,123,141,103,132,100,141,168,81,238,
37,215,92,34,217,0,160,132,164,94,27,233,58,144,115,109,90,221,26,181,
54,217,107,246,237,247,215,70,214,248,107,51,204,219,117,119,82,106,212,218,
232,154,18,40,57,247,77,76,214,40,57,106,230,3,49,250,106,252,125,243,
129,100,115,114,141,166,107,14,134,164,249,153,106,212,153,170,98,101,151,91,
243,200,241,196,179,214,116,85,178,74,12,26,206,81,243,216,241,232,154,133,
134,180,44,83,141,210,71,70,212,190,81,178,214,68,200,62,0,35,57,106,
26,160,76,171,121,110,69,95,216,182,253,210,173,41,183,95,145,81,123,18,
111,108,79,33,203,122,241,206,50,89,106,75,69,56,30,56,145,165,166,183,
140,133,98,216,168,95,243,81,60,124,226,164,245,25,95,236,175,36,237,14,
52,89,205,140,216,210,5,156,12,164,215,0,81,42,213,56,79,87,35,106,
232,139,33,249,190,145,119,241,44,246,141,62,83,19,116,13,165,220,55,121,
234,29,94,160,106,78,5,243,81,160,95,233,3,113,87,1,106,227,62,96,
229,153,196,35,102,172,145,191,214,138,154,179,43,147,255,31,232,121,7,0,
61,51,244,100,110,141,71,214,72,249,200,101,193,57,104,51,213,184,212,125,
51,43,121,198,95,28,180,188,104,117,245,126,137,0,0,0,0,73,69,78,
68,174,66,96,130
};

const char* PulseTableText::pulseTable_png = (const char*) resource_PulseTableText_pulseTable_png;
const int PulseTableText::pulseTable_pngSize = 1305;


//[EndFile] You can add extra defines here...
//[/EndFile]

