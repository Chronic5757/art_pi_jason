#include <gui/main_screen/MainView.hpp>
#include <math.h>
#include <stdlib.h>

MainView::MainView()
{
    tickCounter = 0;
}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();

    // Initialize graph range with default slider value at start up
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::handleTickEvent()
{
    
}

void MainView::sliderValueChanged(int value)
{
}

void MainView::toggleLed()
{
}

void MainView::switchSong()
{
    // Override and implement this function in Main
}

void MainView::muteSong()
{
    // Override and implement this function in Main
}

void MainView::nextSong()
{
    // Override and implement this function in Main

}

void MainView::preSong()
{
    // Override and implement this function in Main
}
