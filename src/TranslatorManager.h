
#ifndef WALLETGUI_TRANSLATORMANAGER_H
#define WALLETGUI_TRANSLATORMANAGER_H

#include <QObject>
#include <QMap>
#include <QMutex>
#include <QTranslator>


typedef QMap<QString, QTranslator*> TranslatorMap;

class TranslatorManager {
 public:
  static TranslatorManager* instance();
  ~TranslatorManager();

  bool setTranslator(QString& lang);
  inline QString getCurrentLang()  { return m_keyLang; }

 private:
  TranslatorManager();

  // Hide copy constructor and assignment operator.
  TranslatorManager(const TranslatorManager &);
  TranslatorManager& operator=(const TranslatorManager &);

  // Class instance.
  static TranslatorManager* m_Instance;

  TranslatorMap   m_translators;
  QString         m_keyLang;
};

#endif  // WALLETGUI_TRANSLATORMANAGER_H
