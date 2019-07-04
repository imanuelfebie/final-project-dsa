#include "headers/HomeView.h"
#include "headers/AdminView.h"

#include <iostream>

using namespace std;

HomeView *HomeView::singleHomeView = NULL;

HomeView *HomeView::getHomeView()
{
    /**
     * Create new unique instance if one does not exit yet
     * and return 
     */
    if (!singleHomeView)
        singleHomeView = new HomeView;
    return singleHomeView;
}

void HomeView::viewHeading(string title)
{
    /* Clears the screen and preformatted way of displaying the view title when this method is called */
    clearScreen();
    cout << title << endl << endl;
}

void HomeView::homeView() {
    /**
     * Display this heading and clear the screen 
     * First View when app runs
     **/
    viewHeading("E-Commerce Simulator");

    cout << "[1] Go to Shop" << endl;
    cout << "[2] Admin" << endl;
    cout << "[0] Exit" << endl;
    cout << endl << ">> ";
    cin >> choice;

    switch (choice)
    {
        case 2:
            AdminView::getAdminView()
                       ->adminRegistrationView();
            break;
    }
}