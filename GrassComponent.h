/*
  ==============================================================================

    GrassComponent.h
    Created: 12 Mar 2021 7:48:58pm
    Author:  Rahul Fernandes

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class GrassComponent  : public juce::Component
{
public:
    GrassComponent();
    ~GrassComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GrassComponent)
};
