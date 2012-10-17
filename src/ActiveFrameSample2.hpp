// Default empty project template
#ifndef ActiveFrameSample2_HPP_
#define ActiveFrameSample2_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class ActiveFrameSample2 : public QObject
{
    Q_OBJECT
public:
    ActiveFrameSample2(bb::cascades::Application *app);
    virtual ~ActiveFrameSample2() {}
};


#endif /* ActiveFrameSample2_HPP_ */
