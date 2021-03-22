/*
  ==============================================================================

    GrassComponent.cpp
    Created: 12 Mar 2021 7:48:58pm
    Author:  Rahul Fernandes

  ==============================================================================
*/

#include <JuceHeader.h>
#include "GrassComponent.h"

//==============================================================================
GrassComponent::GrassComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

GrassComponent::~GrassComponent()
{
}

void GrassComponent::paint (juce::Graphics& g)
{
    g.setColour(juce::Colours::green);
    g.drawLine(10, 325, getWidth() - 10, 325, 10);
}

void GrassComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
