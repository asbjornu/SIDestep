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
//[/Headers]

#include "SavePatchAsDialog.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
SavePatchAsDialog::SavePatchAsDialog (
        std::shared_ptr < EventDispatcher > dispatcher
        )
    :
    dispatcher (
                dispatcher )
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    label.reset (new juce::Label ("new label",
                                  TRANS("Patch Name")));
    addAndMakeVisible (label.get());
    label->setFont (juce::Font ("C64 Pro", 12.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (juce::Justification::centredRight);
    label->setEditable (false, false, false);
    label->setColour (juce::Label::textColourId, juce::Colour (0xff5090d0));
    label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    label->setBounds (8, 12, 119, 24);

    patchNameLabel.reset (new juce::Label ("new label",
                                           TRANS("Patch Name")));
    addAndMakeVisible (patchNameLabel.get());
    patchNameLabel->setFont (juce::Font ("C64 Pro", 12.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    patchNameLabel->setJustificationType (juce::Justification::centredLeft);
    patchNameLabel->setEditable (true, true, false);
    patchNameLabel->setColour (juce::Label::textColourId, juce::Colour (0xff181090));
    patchNameLabel->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    patchNameLabel->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));
    patchNameLabel->addListener (this);

    patchNameLabel->setBounds (132, 12, 320, 24);

    label2.reset (new juce::Label ("new label",
                                   TRANS("Category")));
    addAndMakeVisible (label2.get());
    label2->setFont (juce::Font ("C64 Pro", 12.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (juce::Justification::centredRight);
    label2->setEditable (false, false, false);
    label2->setColour (juce::Label::textColourId, juce::Colour (0xff5090d0));
    label2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    label2->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    label2->setBounds (11, 40, 119, 24);

    categorySelector.reset (new juce::ComboBox ("new combo box"));
    addAndMakeVisible (categorySelector.get());
    categorySelector->setEditableText (false);
    categorySelector->setJustificationType (juce::Justification::centredLeft);
    categorySelector->setTextWhenNothingSelected (juce::String());
    categorySelector->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    categorySelector->addItem (TRANS("Bass"), 1);
    categorySelector->addItem (TRANS("Drums"), 2);
    categorySelector->addItem (TRANS("Lead"), 3);
    categorySelector->addItem (TRANS("Keys"), 4);
    categorySelector->addItem (TRANS("Pad"), 5);
    categorySelector->addItem (TRANS("SFX"), 6);
    categorySelector->addItem (TRANS("Misc"), 7);
    categorySelector->addListener (this);

    categorySelector->setBounds (128, 40, 150, 24);

    okButton.reset (new juce::ImageButton ("new button"));
    addAndMakeVisible (okButton.get());
    okButton->addListener (this);

    okButton->setImages (false, true, true,
                         juce::ImageCache::getFromMemory (oknormal_png, oknormal_pngSize), 1.000f, juce::Colour (0x00000000),
                         juce::ImageCache::getFromMemory (okover_png, okover_pngSize), 1.000f, juce::Colour (0x00000000),
                         juce::ImageCache::getFromMemory (okdown_png, okdown_pngSize), 1.000f, juce::Colour (0x00000000));
    okButton->setBounds (152, 72, 154, 26);

    cancelButton.reset (new juce::ImageButton ("new button"));
    addAndMakeVisible (cancelButton.get());
    cancelButton->addListener (this);

    cancelButton->setImages (false, true, true,
                             juce::ImageCache::getFromMemory (cancelNormal_png, cancelNormal_pngSize), 1.000f, juce::Colour (0x00000000),
                             juce::ImageCache::getFromMemory (cancelOver_png, cancelOver_pngSize), 1.000f, juce::Colour (0x00000000),
                             juce::ImageCache::getFromMemory (cancelDown_png, cancelDown_pngSize), 1.000f, juce::Colour (0x00000000));
    cancelButton->setBounds (320, 72, 154, 26);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (476, 98);


    //[Constructor] You can add your own custom stuff here..
	categorySelector->setColour(ComboBox::backgroundColourId, Colour(0xff5090d0));
	categorySelector->setColour(ComboBox::textColourId, Colour(0xff181090));
	categorySelector->setColour(ComboBox::buttonColourId, Colour(0xff5090d0));
	categorySelector->setColour(ComboBox::arrowColourId, Colour(0xff181090));
    dispatcher -> patchEditorNameChangedListeners -> add (
                                                          this );
    //[/Constructor]
}

SavePatchAsDialog::~SavePatchAsDialog()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    dispatcher -> patchEditorNameChangedListeners -> remove (
                                                             this );
    //[/Destructor_pre]

    label = nullptr;
    patchNameLabel = nullptr;
    label2 = nullptr;
    categorySelector = nullptr;
    okButton = nullptr;
    cancelButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
	//bank = nullptr;
    //[/Destructor]
}

//==============================================================================
void SavePatchAsDialog::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    {
        float x = 2.0f, y = 2.0f, width = 464.0f, height = 83.0f;
        juce::Colour fillColour = juce::Colour (0xff181090);
        juce::Colour strokeColour = juce::Colour (0xff5090d0);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRoundedRectangle (x, y, width, height, 10.000f);
        g.setColour (strokeColour);
        g.drawRoundedRectangle (x, y, width, height, 10.000f, 4.000f);
    }

    {
        float x = 128.0f, y = 12.0f, width = 324.0f, height = 24.0f;
        juce::Colour fillColour = juce::Colour (0xff5090d0);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRoundedRectangle (x, y, width, height, 8.000f);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void SavePatchAsDialog::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void SavePatchAsDialog::labelTextChanged (juce::Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == patchNameLabel.get())
    {
        //[UserLabelCode_patchNameLabel] -- add your label text handling code here..
        //[/UserLabelCode_patchNameLabel]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}

void SavePatchAsDialog::comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == categorySelector.get())
    {
        //[UserComboBoxCode_categorySelector] -- add your combo box handling code here..
        //[/UserComboBoxCode_categorySelector]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void SavePatchAsDialog::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == okButton.get())
    {
        //[UserButtonCode_okButton] -- add your button handler code here..
		Category c;
		//Bass,
		//	Drums,
		//	Lead,
		//	Keys,
		//	Pad,
		//	SFX,
		//	Misc
		switch (categorySelector->getSelectedItemIndex()) {
			case 0:
				c = Bass;
				break;
			case 1:
				c = Drums;
				break;
			case 2:
				c = Lead;
				break;
			case 3:
				c = Keys;
				break;
			case 4:
				c = Pad;
				break;
			case 5:
				c = SFX;
				break;
			case 6:
			default:
				c = Misc;
				break;
		}
        dispatcher -> patchEditorNameChangedListeners -> call (
                                                               &PatchEditorNameChanged::onPatchEditorNameChanged
                                                             , patchNameLabel -> getText () );
        dispatcher -> bankSaveAsListeners -> call (
                                                   &BankSaveAs::onBankSaveAs
                                                 , c );

		//bank->getCurrentProgram()->setName(patchNameLabel->getText());
		//bank->finishSaveAs(c);
		setVisible(false);
        //[/UserButtonCode_okButton]
    }
    else if (buttonThatWasClicked == cancelButton.get())
    {
        //[UserButtonCode_cancelButton] -- add your button handler code here..
		setVisible(false);
        //[/UserButtonCode_cancelButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//void SavePatchAsDialog::setBank(ReferenceCountedObjectPtr<Bank> value) {
//	bank = value;
//}

void SavePatchAsDialog::onPatchEditorNameChanged(String value) {
	patchNameLabel->setText(String(value), dontSendNotification);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="SavePatchAsDialog" componentName=""
                 parentClasses="public Component, public PatchEditorNameChanged"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="476"
                 initialHeight="98">
  <BACKGROUND backgroundColour="ffffff">
    <ROUNDRECT pos="2 2 464 83" cornerSize="10.0" fill="solid: ff181090" hasStroke="1"
               stroke="4, mitered, butt" strokeColour="solid: ff5090d0"/>
    <ROUNDRECT pos="128 12 324 24" cornerSize="8.0" fill="solid: ff5090d0" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="6fb6c1148c1ce2c8" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="8 12 119 24" textCol="ff5090d0" edTextCol="ff000000"
         edBkgCol="0" labelText="Patch Name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="C64 Pro" fontsize="12.0" kerning="0.0"
         bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="4a569eb4f0a0439b" memberName="patchNameLabel"
         virtualName="" explicitFocusOrder="0" pos="132 12 320 24" textCol="ff181090"
         edTextCol="ff000000" edBkgCol="0" labelText="Patch Name" editableSingleClick="1"
         editableDoubleClick="1" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b6d86b8fcb8571d1" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="11 40 119 24" textCol="ff5090d0"
         edTextCol="ff000000" edBkgCol="0" labelText="Category" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="C64 Pro"
         fontsize="12.0" kerning="0.0" bold="0" italic="0" justification="34"/>
  <COMBOBOX name="new combo box" id="a8ff19015ab6eac5" memberName="categorySelector"
            virtualName="" explicitFocusOrder="0" pos="128 40 150 24" editable="0"
            layout="33" items="Bass&#10;Drums&#10;Lead&#10;Keys&#10;Pad&#10;SFX&#10;Misc"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <IMAGEBUTTON name="new button" id="8c9ce9932880d2dd" memberName="okButton"
               virtualName="" explicitFocusOrder="0" pos="152 72 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="oknormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="okover_png" opacityOver="1.0" colourOver="0" resourceDown="okdown_png"
               opacityDown="1.0" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="b914bade83d56b31" memberName="cancelButton"
               virtualName="" explicitFocusOrder="0" pos="320 72 154 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="cancelNormal_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="cancelOver_png" opacityOver="1.0" colourOver="0"
               resourceDown="cancelDown_png" opacityDown="1.0" colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: oknormal_png, 525, "../../UI/OKNormal.png"
static const unsigned char resource_SavePatchAsDialog_oknormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,192,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,144,23,
17,142,24,16,144,25,15,145,23,16,145,24,16,144,24,16,144,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,66,112,193,37,47,
160,31,32,152,55,89,180,77,136,204,36,44,158,25,20,145,73,127,200,76,
134,203,73,128,200,45,64,167,38,48,159,56,90,181,44,60,166,34,40,156,
54,84,178,72,124,198,75,132,202,31,32,151,30,30,151,49,72,172,76,135,
203,44,63,168,51,76,174,29,28,150,52,79,176,74,130,201,28,26,149,66,
111,192,80,143,208,73,128,201,56,88,180,68,116,194,25,20,146,38,48,160,
42,58,166,45,64,168,79,140,206,66,112,192,52,80,176,59,96,185,77,135,
204,25,19,146,49,74,173,76,137,204,25,18,145,9,113,240,69,0,0,0,
16,116,82,78,83,0,242,191,189,244,78,77,243,134,79,190,253,61,136,241,
122,128,147,202,200,0,0,0,236,73,68,65,84,120,94,237,214,183,110,196,
48,16,132,225,149,116,49,216,158,81,14,151,163,115,206,241,253,223,202,130,
84,184,59,192,176,139,41,244,53,139,237,254,130,32,105,102,125,183,5,49,
173,65,219,74,7,144,212,51,235,35,157,198,20,19,71,41,58,230,98,74,
65,17,6,214,69,76,65,59,56,6,80,18,240,63,105,87,21,150,126,134,
70,218,4,149,9,249,2,224,153,36,202,77,32,45,207,18,108,194,112,131,
36,203,235,180,243,12,95,225,76,32,109,12,160,32,11,0,227,58,109,13,
172,73,193,180,155,203,83,220,207,4,211,106,164,104,218,195,163,108,90,65,
217,180,237,25,127,169,57,107,39,175,23,56,254,224,94,205,189,182,244,231,
72,130,32,193,220,95,214,105,183,62,238,130,109,243,134,238,183,186,174,172,
200,207,114,60,145,172,182,191,166,57,170,95,201,67,115,17,81,208,2,158,
181,145,70,111,20,179,91,188,15,71,102,61,40,26,30,89,169,227,117,33,
198,241,70,102,223,158,86,17,90,41,148,192,60,0,0,0,0,73,69,78,
68,174,66,96,130
};

const char* SavePatchAsDialog::oknormal_png = (const char*) resource_SavePatchAsDialog_oknormal_png;
const int SavePatchAsDialog::oknormal_pngSize = 525;

// JUCER_RESOURCE: okover_png, 526, "../../UI/OKOver.png"
static const unsigned char resource_SavePatchAsDialog_okover_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,192,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,144,23,
17,142,24,16,144,25,15,145,23,16,145,24,16,144,24,16,144,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,187,179,102,76,68,
130,51,43,137,146,139,112,227,218,91,71,63,132,29,22,142,212,204,96,213,
205,95,104,96,123,77,69,130,148,141,112,50,42,137,64,57,134,139,131,114,
207,199,97,220,212,93,47,39,138,118,110,119,223,215,92,99,90,124,225,217,
92,214,206,95,131,123,116,126,117,117,44,36,139,103,96,123,41,33,140,185,
177,103,132,124,116,186,178,102,146,137,112,193,185,100,30,22,142,78,70,130,
95,87,126,105,97,123,234,226,90,28,20,143,160,152,109,239,231,89,226,218,
92,28,21,143,121,114,119,227,219,91,217,209,94,177,191,45,144,0,0,0,
16,116,82,78,83,0,242,191,189,244,78,77,243,134,79,190,253,61,136,241,
122,128,147,202,200,0,0,0,237,73,68,65,84,120,94,237,214,181,114,196,
64,16,132,225,145,116,8,182,187,133,112,204,103,102,166,247,127,43,203,82,
224,236,170,92,118,208,129,190,100,106,178,63,216,218,93,51,235,186,13,136,
105,244,154,86,56,128,164,142,89,23,233,56,166,152,56,74,209,50,23,99,
10,138,208,179,54,98,10,218,194,49,128,146,128,255,73,123,41,177,240,51,
52,210,70,40,141,200,75,0,87,36,191,55,129,180,117,150,96,25,134,75,
36,217,186,74,251,204,240,20,110,4,210,134,0,114,50,7,48,172,210,38,
192,132,20,76,187,190,56,197,221,70,48,173,66,138,166,221,63,200,166,229,
148,77,91,29,243,151,234,179,118,242,124,142,179,119,238,85,223,107,115,127,
138,36,8,18,76,253,121,149,118,227,227,54,88,213,111,232,126,139,93,105,
65,126,20,227,145,100,185,253,53,205,81,253,74,30,154,139,136,130,102,240,
172,137,52,122,165,152,237,236,173,63,48,235,64,81,255,200,10,45,175,13,
49,142,55,48,251,2,193,166,16,169,4,187,95,45,0,0,0,0,73,69,
78,68,174,66,96,130
};

const char* SavePatchAsDialog::okover_png = (const char*) resource_SavePatchAsDialog_okover_png;
const int SavePatchAsDialog::okover_pngSize = 526;

// JUCER_RESOURCE: okdown_png, 476, "../../UI/OKDown.png"
static const unsigned char resource_SavePatchAsDialog_okdown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,0,168,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,25,15,145,23,16,145,24,
16,144,24,16,144,23,17,142,23,16,144,24,16,144,24,16,144,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,68,116,194,67,113,
192,38,48,159,31,32,152,73,128,200,31,33,152,28,26,149,73,128,201,59,
96,185,74,130,201,55,88,180,66,112,193,60,100,186,70,120,196,29,28,150,
32,36,154,38,49,160,75,132,202,48,72,172,79,140,206,59,96,184,36,44,
158,52,80,176,79,142,207,30,30,151,52,81,176,53,84,178,31,32,151,45,
64,167,66,112,192,62,102,186,28,23,148,25,20,146,24,17,144,76,134,203,
60,97,184,55,86,179,38,48,160,33,60,6,28,0,0,0,16,116,82,78,
83,0,189,191,242,134,79,244,243,77,78,253,190,61,136,241,122,232,37,92,
96,0,0,0,211,73,68,65,84,120,94,237,213,55,83,196,48,24,132,225,
117,184,132,15,216,79,206,190,76,206,57,252,255,127,134,176,10,186,155,97,
160,216,194,79,179,163,238,45,52,18,128,81,60,166,152,113,54,131,119,72,
73,41,48,162,168,41,98,138,202,48,161,168,4,148,5,254,135,215,30,189,
159,209,72,91,89,111,69,94,249,249,36,249,125,18,72,107,106,103,139,170,
90,152,171,155,144,118,83,219,117,181,22,72,235,204,172,36,75,63,93,72,
107,205,90,82,48,237,236,228,212,30,215,130,105,1,41,154,246,116,33,155,
86,82,54,109,121,203,95,26,238,218,221,195,155,189,127,112,175,225,93,219,
21,27,115,121,238,108,83,236,66,218,101,97,231,249,114,248,67,247,219,222,
247,182,228,179,159,23,146,225,244,55,72,40,234,8,49,69,69,152,81,211,
193,28,72,53,203,142,225,77,163,9,197,36,209,28,248,2,35,179,2,174,
25,207,18,158,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* SavePatchAsDialog::okdown_png = (const char*) resource_SavePatchAsDialog_okdown_png;
const int SavePatchAsDialog::okdown_pngSize = 476;

// JUCER_RESOURCE: cancelNormal_png, 816, "../../UI/CancelNormal.png"
static const unsigned char resource_SavePatchAsDialog_cancelNormal_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,53,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,23,16,145,23,
17,142,24,16,144,24,16,144,25,15,145,25,17,142,23,16,144,24,16,144,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,59,95,184,77,136,
204,66,112,193,59,96,185,55,89,180,37,47,160,72,126,199,73,128,201,49,
72,172,73,127,200,25,19,146,63,104,188,25,20,145,31,32,152,44,63,168,
78,139,206,56,88,180,39,49,161,38,48,160,78,141,207,32,34,153,67,115,
193,78,140,206,28,23,148,70,120,196,74,129,201,40,51,161,71,123,198,80,
143,208,67,114,193,74,130,200,35,40,155,77,135,204,44,60,167,44,61,166,
66,111,192,54,84,178,76,135,203,56,90,181,42,56,163,79,143,207,63,106,
188,63,105,188,64,107,190,39,52,162,43,60,166,27,23,147,33,37,155,69,
118,195,29,29,151,53,83,177,65,111,191,63,107,189,26,21,147,71,123,197,
45,64,168,26,20,146,26,21,146,56,91,181,47,68,171,77,138,204,75,133,
203,49,71,172,56,89,181,30,30,152,58,92,183,79,142,207,79,141,206,70,
122,197,60,99,186,78,139,205,74,132,202,25,20,146,37,45,159,51,77,175,
75,131,201,42,58,166,74,130,201,41,53,163,52,79,176,79,142,208,36,43,
158,58,94,183,28,26,148,30,31,151,218,170,156,240,0,0,0,16,116,82,
78,83,0,191,242,189,244,79,77,243,190,134,61,78,253,136,241,122,55,8,
243,247,0,0,1,154,73,68,65,84,120,94,205,150,213,110,28,65,16,69,
123,33,107,59,107,39,183,134,150,153,153,205,20,102,102,230,252,255,39,164,
58,53,15,145,229,172,181,15,51,234,243,116,75,93,210,28,149,74,221,163,
148,186,20,137,195,48,226,235,73,197,108,193,72,54,120,102,40,238,218,100,
24,182,87,68,66,69,176,75,6,226,97,93,173,193,38,3,217,65,84,1,
100,36,192,170,106,67,193,64,181,46,132,130,105,106,251,185,35,60,40,149,
74,167,120,145,123,69,43,81,201,105,42,129,169,217,0,246,56,100,1,116,
105,37,10,50,236,192,213,30,214,235,245,52,189,92,8,95,136,174,47,124,
210,196,248,213,107,162,180,164,17,81,171,222,12,69,77,176,33,84,137,38,
240,201,18,73,37,157,89,73,29,98,170,33,170,181,239,105,126,96,102,245,
88,38,207,185,134,190,53,184,101,61,199,92,159,60,27,88,125,212,56,228,
239,91,135,161,170,9,242,69,86,235,248,11,85,221,3,96,211,191,115,234,
0,147,112,213,42,223,52,199,203,213,78,184,229,125,232,106,54,132,101,106,
66,136,106,111,202,229,114,239,209,12,191,93,215,157,47,87,123,234,254,229,
32,36,53,185,215,100,131,46,222,53,33,104,181,239,206,79,252,74,165,82,
55,112,211,121,219,186,141,59,156,155,103,213,238,58,77,124,72,49,31,63,
57,159,113,77,167,175,68,35,221,200,85,58,248,55,244,255,187,118,254,189,
86,128,208,13,76,173,145,17,218,156,135,58,72,245,46,147,25,19,81,155,
243,99,34,174,52,79,136,166,146,198,250,72,104,172,160,22,53,245,87,242,
138,138,192,35,3,217,70,76,37,81,244,166,198,205,108,59,191,121,89,169,
13,152,200,230,85,197,36,98,107,48,140,104,140,103,246,7,232,45,42,187,
21,17,86,100,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* SavePatchAsDialog::cancelNormal_png = (const char*) resource_SavePatchAsDialog_cancelNormal_png;
const int SavePatchAsDialog::cancelNormal_pngSize = 816;

// JUCER_RESOURCE: cancelOver_png, 820, "../../UI/CancelOver.png"
static const unsigned char resource_SavePatchAsDialog_cancelOver_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,59,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,24,16,144,24,16,144,25,
15,145,23,16,145,23,17,142,24,16,144,23,16,144,24,16,144,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,240,232,88,158,150,110,227,218,
91,76,68,130,78,70,130,173,164,105,146,139,112,160,152,109,209,201,96,103,
96,123,29,22,142,214,206,95,51,43,137,200,191,98,212,204,96,187,179,102,
64,56,133,235,227,89,215,207,95,118,110,119,239,231,89,55,47,136,148,141,
112,91,83,126,190,181,101,80,72,130,204,197,98,216,208,94,190,182,101,226,
218,92,232,224,91,185,177,103,139,131,114,146,137,112,83,75,129,101,92,124,
29,21,143,100,91,125,233,225,90,37,29,141,60,52,135,147,140,112,210,202,
96,184,176,102,70,62,133,196,188,99,118,109,120,238,230,88,54,46,136,225,
217,92,31,23,142,113,105,121,32,24,141,98,90,125,36,28,141,46,39,138,
136,128,115,177,170,104,176,169,104,33,25,142,105,97,123,175,167,104,237,229,
89,28,21,143,156,148,110,40,32,140,48,40,138,204,196,97,74,66,131,218,
211,93,128,120,117,218,209,94,95,87,126,84,77,128,88,79,128,203,195,98,
163,156,108,231,223,90,229,221,91,222,214,93,149,142,111,30,22,142,236,228,
89,174,166,105,217,209,94,49,41,137,154,145,111,131,123,116,15,42,195,243,
0,0,0,16,116,82,78,83,0,191,242,189,243,244,134,79,77,190,78,253,
61,136,241,122,87,193,62,81,0,0,1,152,73,68,65,84,120,94,205,214,
197,174,27,65,16,5,208,54,198,246,11,220,26,52,51,51,60,230,48,51,
51,195,255,127,65,170,83,94,68,81,98,197,139,25,245,89,221,210,244,226,
170,212,158,177,82,234,76,36,1,195,36,210,25,197,206,193,72,73,222,25,
10,29,155,12,99,251,5,164,84,4,29,50,144,143,180,138,195,38,3,93,
66,84,1,100,36,96,221,106,45,97,96,181,50,132,103,90,181,211,202,45,
92,45,149,74,215,241,189,82,167,181,76,42,218,36,176,106,54,128,46,135,
38,128,50,173,197,131,230,5,94,237,163,235,186,7,244,121,42,190,18,29,
79,151,114,196,150,211,27,162,156,164,30,209,200,109,135,82,77,216,16,115,
162,26,4,154,68,50,201,201,166,164,93,98,243,16,171,237,220,213,142,176,
109,53,106,192,22,231,62,22,214,224,208,122,140,77,253,100,127,96,45,208,
231,176,117,217,250,18,106,53,33,203,168,201,102,60,0,243,46,0,155,126,
223,211,46,80,11,121,107,63,180,87,171,171,93,227,35,159,66,175,102,67,
172,170,38,66,172,246,54,159,207,55,174,108,227,91,54,155,221,92,93,237,
36,251,203,189,144,170,201,123,77,110,208,127,220,53,17,112,181,251,213,135,
120,228,56,206,13,220,172,190,27,221,198,29,206,23,255,172,246,164,218,198,
83,135,61,127,81,125,137,61,157,94,19,245,244,65,158,114,193,127,67,255,
125,215,254,254,94,243,32,202,129,85,171,23,197,14,231,150,14,50,61,43,
22,135,68,180,195,249,61,17,79,218,7,162,177,164,161,126,36,234,107,84,
139,154,250,87,242,188,138,192,39,3,205,16,83,25,20,252,177,113,59,155,
61,216,56,171,84,18,38,218,184,160,88,42,22,135,97,162,49,222,217,79,
250,99,43,20,27,249,43,153,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* SavePatchAsDialog::cancelOver_png = (const char*) resource_SavePatchAsDialog_cancelOver_png;
const int SavePatchAsDialog::cancelOver_pngSize = 820;

// JUCER_RESOURCE: cancelDown_png, 774, "../../UI/CancelDown.png"
static const unsigned char resource_SavePatchAsDialog_cancelDown_png[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,154,
0,0,0,26,8,3,0,0,0,120,145,181,253,0,0,1,38,80,76,84,
69,0,0,0,24,16,144,24,16,144,24,16,144,23,16,145,24,16,144,25,
15,145,24,16,144,23,17,142,23,16,144,24,16,144,24,16,144,25,17,142,
24,17,144,24,16,144,23,17,144,24,16,144,80,144,208,45,65,168,41,56,
164,67,113,192,66,112,192,38,48,159,32,34,153,45,64,167,34,40,156,73,
128,200,31,32,151,31,33,152,60,97,184,38,49,160,48,72,172,65,111,191,
69,120,197,26,20,146,72,126,199,60,100,185,33,37,154,76,137,204,60,99,
186,26,21,146,27,24,148,55,88,180,30,30,152,37,46,159,26,19,145,30,
28,150,62,104,189,30,31,151,64,109,191,71,123,197,24,17,144,37,45,159,
79,141,206,35,42,157,25,18,145,48,69,171,78,139,206,68,117,194,39,49,
161,65,108,190,48,71,171,78,140,206,30,30,151,25,17,145,74,130,200,40,
53,162,55,89,180,41,54,164,41,55,164,46,68,169,25,19,146,61,100,186,
79,140,206,75,131,201,25,18,144,26,21,147,41,53,163,78,139,205,33,37,
155,67,115,193,53,83,177,29,29,151,62,102,186,34,38,155,63,107,189,44,
61,166,51,77,175,57,92,181,74,129,201,27,22,148,59,96,184,77,137,205,
46,66,169,76,134,203,52,81,176,27,25,148,29,27,149,93,243,175,248,0,
0,0,16,116,82,78,83,0,242,191,189,79,243,134,190,77,78,253,244,61,
136,241,122,187,21,95,198,0,0,1,127,73,68,65,84,120,94,205,150,213,
142,27,65,16,69,219,118,12,27,239,110,110,13,27,153,97,153,153,153,41,
76,255,255,19,233,78,89,86,20,37,94,205,195,140,250,60,221,82,247,195,
209,85,169,103,132,16,111,162,105,104,70,58,57,33,36,83,208,146,132,236,
12,154,146,18,81,104,74,82,196,161,41,17,1,109,241,171,182,200,104,168,
150,33,198,212,77,109,47,127,64,235,217,108,246,11,157,228,79,225,139,118,
94,209,14,76,173,67,68,179,0,186,68,148,129,47,76,46,59,112,181,53,
219,182,93,172,22,153,93,96,165,56,196,5,70,211,19,224,114,234,3,75,
118,45,12,181,209,196,148,128,10,13,233,2,60,241,205,46,167,38,36,165,
16,213,170,159,21,27,84,55,230,164,204,178,204,101,154,55,26,155,198,62,
181,212,201,118,195,152,167,178,12,203,59,198,113,168,106,12,151,81,225,102,
76,213,225,44,17,117,240,103,79,77,162,74,200,173,125,87,108,141,87,59,
147,87,206,89,45,252,93,27,171,198,132,168,246,82,40,20,230,62,212,233,
163,231,121,173,241,106,135,222,111,142,66,82,227,119,141,55,232,245,93,99,
130,86,187,116,190,210,55,203,178,46,232,189,115,181,116,77,55,50,215,254,
86,187,117,106,116,103,73,238,31,156,71,90,80,233,25,232,171,139,114,114,
131,255,134,254,127,215,254,253,174,153,196,100,2,83,27,228,152,42,128,69,
21,120,154,201,229,122,0,170,50,127,2,228,164,248,9,252,224,212,83,71,
204,192,135,90,4,154,50,173,239,15,120,76,76,64,79,222,78,10,145,208,
211,236,157,144,164,98,113,104,70,36,38,59,251,5,111,148,27,116,56,67,
58,194,0,0,0,0,73,69,78,68,174,66,96,130
};

const char* SavePatchAsDialog::cancelDown_png = (const char*) resource_SavePatchAsDialog_cancelDown_png;
const int SavePatchAsDialog::cancelDown_pngSize = 774;


//[EndFile] You can add extra defines here...
//[/EndFile]

