#include <QAxFactory>
#include <QAxObject>
#include <QObject>
#include <QRegExp>

class RegExp : public QObject, public QRegExp {
    Q_OBJECT
    Q_CLASSINFO("ClassID", "{A206A7E5-6237-4a6a-BF31-27962CB8E36C}")
    Q_CLASSINFO("InterfaceID", "{BF35DEB2-0303-48bd-8CFD-87102A5ED710}")
    Q_CLASSINFO("ToSuperClass", "RegExp")
    //Q_CLASSINFO("EventsID", "{F43D977D-137F-4e7a-B6ED-FBC89C51AF9F}")

    //    Q_ENUM(PatternSyntax)
    //    Q_ENUM(CaretMode)
    //    Q_ENUM(Qt::CaseSensitivity)

    Q_PROPERTY(QStringList CapturedTexts READ CapturedTexts)
    Q_PROPERTY(Qt::CaseSensitivity CaseSensitivity READ CaseSensitivity WRITE SetCaseSensitivity)
    Q_PROPERTY(QString ErrorString READ errorString)
    Q_PROPERTY(bool IsEmpty READ IsEmpty)
    Q_PROPERTY(bool IsValid READ IsValid)
    Q_PROPERTY(bool IsMinimal READ IsMinimal)
    Q_PROPERTY(int CaptureCount READ CaptureCount)
    Q_PROPERTY(int MatchedLength READ MatchedLength)
    Q_PROPERTY(QString Pattern READ Pattern WRITE SetPattern)
    Q_PROPERTY(rePatternSyntax PatternSyntax READ Pattern_Syntax WRITE SetPattern_Syntax)

public:
    RegExp(QObject* parent = 0)
        : QObject(parent)
    {
    }
    enum rePatternSyntax {
        reRegExp,
        reWildcard,
        reFixedString,
        reRegExp2,
        reWildcardUnix,
        reW3CXmlSchema11
    };
    Q_ENUM(rePatternSyntax)
    enum reCaretMode {
        reCaretAtZero,
        reCaretAtOffset,
        reCaretWontMatch
    };
    Q_ENUM(reCaretMode)

    virtual ~RegExp() {}

    bool IsEmpty() const { return isEmpty(); }
    bool IsValid() const { return isValid(); }

    QString Pattern() const { return pattern(); }
    void SetPattern(const QString& pattern) { return setPattern(pattern); }

    Qt::CaseSensitivity CaseSensitivity() const { return caseSensitivity(); }
    void SetCaseSensitivity(Qt::CaseSensitivity cs) { return setCaseSensitivity(cs); }

    rePatternSyntax Pattern_Syntax() const { return (rePatternSyntax)patternSyntax(); }
    void SetPattern_Syntax(rePatternSyntax syntax) { return setPatternSyntax((PatternSyntax)syntax); }

    QStringList CapturedTexts() const { return capturedTexts(); }

    bool IsMinimal() const { return isMinimal(); }

    int MatchedLength() const { return matchedLength(); }

    int CaptureCount() const { return captureCount(); }

    QString ErrorString() { return errorString(); }

public slots:
    void SetMinimal(bool minimal) { return setMinimal(minimal); }

    bool ExactMatch(const QString& str) const { return ExactMatch(str); }

    int IndexIn2(const QString& str, int offset = 0, reCaretMode caretMode = reCaretAtZero) const { return indexIn(str, offset, (CaretMode)caretMode); }

    int LastIndexIn2(const QString& str, int offset = -1, reCaretMode caretMode = reCaretAtZero) const { return lastIndexIn(str, offset, (CaretMode)caretMode); }

    int IndexIn(const QString& str) const { return indexIn(str, 0, CaretAtZero); }

    int LlastIndexIn(const QString& str) const { return lastIndexIn(str, -1, CaretAtZero); }

    QString Cap(int nth = 0) const { return cap(nth); }

    int Pos(int nth = 0) const { return pos(nth); }

    static QString Escape(const QString& str) { return escape(str); }
};

#include "regexp.moc"

QAXFACTORY_BEGIN(
    "{AD7D839E-30D1-4f4e-B426-A748769C4B2F}", // type library ID
    "{9F09A542-2A27-4c06-9932-44A5D7C37DE2}" // application ID
    )
QAXCLASS(RegExp)
QAXFACTORY_END()
