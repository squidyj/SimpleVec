#include <QString>
#include <QtTest>

class SimpleVectorTest : public QObject
{
    Q_OBJECT

public:
    SimpleVectorTest();

private Q_SLOTS:
    void test1();
};

SimpleVectorTest::SimpleVectorTest()
{
}

void SimpleVectorTest::test1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(SimpleVectorTest)

#include "tst_simplevectortest.moc"
