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
#include "PatchEditor.h"
//[/Headers]

#include "WavetableText.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
WavetableText::WavetableText (
        std::shared_ptr < EventDispatcher > dispatcher
        )
    :
    dispatcher (
                dispatcher )
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    cachedImage_wavetableText_png_1 = juce::ImageCache::getFromMemory (wavetableText_png, wavetableText_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (110, 17);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

WavetableText::~WavetableText()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void WavetableText::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    {
        int x = 0, y = 0, width = 110, height = 17;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImage (cachedImage_wavetableText_png_1,
                     x, y, width, height,
                     0, 0, cachedImage_wavetableText_png_1.getWidth(), cachedImage_wavetableText_png_1.getHeight());
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void WavetableText::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void WavetableText::mouseUp (const juce::MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...
    dispatcher -> patchEditorShowWaveTableListeners -> call (
                                                             &PatchEditorShowWaveTable::onPatchEditorShowWaveTable );
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

<JUCER_COMPONENT documentType="Component" className="WavetableText" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="110" initialHeight="17">
  <METHODS>
    <METHOD name="mouseUp (const juce::MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ffffff">
    <IMAGE pos="0 0 110 17" resource="wavetableText_png" opacity="1.0" mode="0"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: wavetableText_png, 1288, "../../UI/WavetableText.png"
static const unsigned char resource_WavetableText_wavetableText_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,110,
0,0,0,17,8,3,0,0,0,11,241,105,221,0,0,1,251,80,76,84,
69,0,0,0,25,14,144,22,15,146,23,17,143,24,17,144,24,16,143,24,
17,144,23,15,147,21,21,149,24,16,144,30,15,150,24,17,143,0,0,170,
25,16,145,0,0,128,21,14,145,24,17,144,17,17,136,27,13,148,24,16,
144,28,28,142,0,0,255,23,17,145,24,16,144,24,15,144,24,16,145,21,
21,149,25,15,144,25,16,145,22,11,144,23,12,139,24,17,144,24,16,145,
24,16,144,24,15,144,24,16,144,24,16,144,24,16,144,24,16,143,23,17,
144,24,16,144,24,16,145,24,16,145,24,15,144,25,16,143,23,17,144,24,
16,145,27,16,143,24,16,144,80,144,208,32,36,154,41,53,163,25,17,145,
64,107,190,72,125,198,49,71,172,24,17,144,25,18,144,56,89,181,73,128,
200,60,98,185,50,76,174,33,36,154,29,27,150,46,66,169,55,87,179,67,
115,194,52,81,176,30,30,151,44,60,167,65,110,191,30,29,150,40,52,162,
28,25,149,62,102,186,58,92,183,64,108,190,30,28,150,63,104,188,27,25,
148,25,18,145,71,125,199,32,34,153,35,42,157,56,91,181,77,136,204,54,
84,178,50,75,173,38,48,159,26,19,145,51,78,175,74,130,200,72,126,199,
27,23,147,77,138,205,29,27,149,32,33,153,37,46,159,34,39,156,59,96,
184,68,117,194,36,43,158,29,29,151,47,68,171,51,76,174,62,102,187,69,
118,195,62,103,187,47,69,170,43,60,165,62,104,189,67,115,193,37,45,159,
52,80,176,28,26,148,30,31,151,79,140,206,53,83,177,41,54,164,42,58,
166,37,47,160,61,101,187,66,111,192,46,68,170,67,114,193,67,116,194,63,
106,189,44,63,167,77,135,204,56,87,180,74,131,202,74,130,201,66,112,192,
70,119,196,78,139,205,41,55,164,43,60,166,31,33,152,45,64,167,65,108,
190,29,28,150,28,26,149,42,56,163,53,81,177,75,132,202,37,44,158,33,
37,155,78,141,207,34,38,155,40,53,162,41,57,164,66,112,193,68,116,194,
25,20,146,49,72,172,76,135,203,30,30,152,42,58,165,59,96,185,35,41,
157,76,134,203,33,35,153,34,40,156,26,21,146,52,79,176,58,92,182,45,
65,168,70,121,196,48,72,172,102,4,32,164,0,0,0,48,116,82,78,83,
0,71,35,185,168,96,106,33,24,115,17,139,3,187,2,37,170,15,19,204,
9,1,120,161,214,125,12,83,81,23,22,184,217,223,182,193,241,243,162,154,
94,194,180,117,144,76,127,48,83,127,150,119,0,0,2,140,73,68,65,84,
120,94,181,149,101,115,220,48,16,134,157,107,115,41,132,202,204,204,239,154,
14,130,204,204,12,101,102,102,102,102,102,250,153,93,219,43,159,3,77,50,
157,233,243,69,239,106,165,60,163,81,116,214,224,49,65,155,40,105,138,246,
63,1,234,235,235,77,87,103,114,26,159,46,61,228,177,40,216,88,44,147,
169,156,167,135,20,179,134,232,76,34,42,117,117,103,56,29,29,151,110,26,
60,50,131,141,57,240,152,196,121,42,20,243,199,208,45,72,26,155,133,48,
117,93,47,195,138,96,35,13,53,60,25,19,93,159,238,96,34,20,88,49,
115,4,221,248,168,35,162,61,24,66,54,17,149,137,174,128,28,122,144,140,
4,41,190,110,110,120,134,232,122,12,143,62,160,220,48,158,0,248,194,85,
5,162,50,223,15,12,24,198,109,214,29,226,234,24,208,238,53,182,42,221,
236,112,56,156,134,124,235,177,171,91,141,26,217,248,13,243,194,74,199,136,
238,43,121,188,0,142,19,29,2,112,132,171,211,232,144,249,54,224,6,249,
236,2,26,188,244,81,233,20,181,174,14,56,64,30,141,0,148,238,121,164,
73,116,59,227,14,191,232,71,164,46,168,251,249,155,90,184,113,157,14,70,
26,219,226,241,42,22,116,115,125,24,232,140,51,251,104,123,100,135,163,235,
140,48,39,19,186,188,200,54,218,203,11,186,168,40,146,208,157,163,221,162,
243,104,230,156,27,212,93,35,106,0,176,159,243,135,17,238,174,157,235,239,
217,36,88,9,93,19,151,173,0,74,121,52,69,215,21,63,75,133,241,238,
224,233,134,235,228,116,142,110,137,232,150,46,131,127,58,214,201,233,78,80,
86,252,84,64,39,167,83,58,159,224,221,13,215,41,88,151,44,186,204,229,
80,119,167,116,101,64,46,231,230,128,78,8,234,170,141,74,119,44,182,206,
211,5,195,48,46,58,186,242,75,116,217,178,172,6,186,98,84,176,238,170,
225,81,227,235,86,174,194,35,235,38,221,50,140,156,209,116,149,178,17,190,
174,10,173,238,120,135,115,173,186,59,148,145,199,93,192,187,59,65,233,152,
123,28,58,128,246,209,116,173,16,68,87,168,223,199,3,189,154,83,159,254,
144,122,109,219,110,113,117,49,189,196,217,170,247,0,253,79,233,153,237,144,
143,53,73,25,48,245,151,238,186,146,98,61,139,120,236,82,186,110,219,206,
162,87,122,94,142,221,235,84,175,223,232,111,233,157,237,240,30,107,147,254,
250,238,92,29,48,192,161,8,76,224,221,77,118,127,51,63,13,126,119,67,
255,51,11,188,244,57,248,238,82,252,47,194,186,208,122,249,34,112,45,0,
27,164,187,49,148,225,207,71,89,151,30,218,4,72,133,88,189,234,152,42,
153,128,228,24,16,149,54,88,23,252,222,13,39,89,194,102,45,21,62,172,
211,180,45,248,7,82,180,63,229,48,96,227,145,4,98,11,0,0,0,0,
73,69,78,68,174,66,96,130
};

const char* WavetableText::wavetableText_png = (const char*) resource_WavetableText_wavetableText_png;
const int WavetableText::wavetableText_pngSize = 1288;


//[EndFile] You can add extra defines here...
//[/EndFile]

