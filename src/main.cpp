// List with context menu project template
#include "ActiveFrameExample.hpp"
#include "ActiveFrame.h"

#include <bb/cascades/Application>

#include <QLocale>
#include <QTranslator>

using namespace bb::cascades;

int main(int argc, char **argv)
{
    // this is where the server is started etc
    Application app(argc, argv);

    // localization support
    QTranslator translator;
    QString locale_string = QLocale().name();
    QString filename = QString( "ActiveFrameExample_%1" ).arg( locale_string );
    if (translator.load(filename, "app/native/qm")) {
        app.installTranslator( &translator );
    }

    // Create the cover now. When application in moved to background it's too late
    // to create some resource or send asynch. requests. Remember ActiveFrame is refreshed every 30sec.
    // Using DataModel in ActiveFrame isn't good idea too.
    // Provider creates the CustomControls once they are needed.
    app.setCover(new ActiveFrame());

    // create the application pane object to init UI etc.
    new ActiveFrameExample(&app);

    // we complete the transaction started in the app constructor and start the client event loop here
    return Application::exec();
    // when loop is exited the Application deletes the scene which deletes all its children (per qt rules for children)
}

