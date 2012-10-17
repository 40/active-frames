// List with context menu project template
#ifndef ActiveFrameExample_HPP_
#define ActiveFrameExample_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class ActiveFrameExample : public QObject
{
    Q_OBJECT
public:
    ActiveFrameExample(bb::cascades::Application *app);
    virtual ~ActiveFrameExample() {}
};

#endif /* ActiveFrameExample_HPP_ */
