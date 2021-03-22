/*
  ==============================================================================

    TextComponent.cpp
    Created: 12 Mar 2021 8:19:51pm
    Author:  Rahul Fernandes

  ==============================================================================
*/

#include <JuceHeader.h>
#include "TextComponent.h"

//==============================================================================
TextComponent::TextComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

TextComponent::~TextComponent()
{
}

void TextComponent::paint (juce::Graphics& g)
{
    juce::Font thefont("Cooper  Star", "Black Italic", 30.0f);
    g.setFont(thefont);
    g.drawText("KF", 10, 10, 400, 60, juce::Justification::topLeft);
    
}

void TextComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
