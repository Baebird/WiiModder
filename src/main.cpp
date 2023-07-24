#include "wx/wx.h"

class MyFrame : public wxFrame
{
public:
    MyFrame();
 
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

class MyApp : public wxApp
{
public:
	MyFrame* myframe;
    bool OnInit() override;
};

bool MyApp::OnInit() {
	myframe = new MyFrame();
	myframe->Show();
	return true;
}
 
// This defines the equivalent of main() for the current platform.
wxIMPLEMENT_APP(MyApp);