/*
  ==============================================================================

    RoofComponent.h
    Created: 12 Mar 2021 7:57:35pm
    Author:  Rahul Fernandes

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class RoofComponent  : public juce::Component
{
public:
    RoofComponent();
    ~RoofComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RoofComponent)
};
