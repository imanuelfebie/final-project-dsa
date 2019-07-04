#ifndef EVENT_CONTROLLER
#define EVENT_CONTROLLER

class EventController
{
    /**
     * A class to handle user input.
     * Redirecting users to the correct view.
     * Seperating this logic in its own class so the view doesn't need to take care of this.
     */

    private:
        int choice;
        HomeView hView();
        AdminView aView();
    
    public:
        void setChoice(int choice);
        int getChoice();

};

#endif