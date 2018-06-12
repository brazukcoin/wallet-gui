// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WALLETGUI_TRANSLATORMANAGER_H
#define WALLETGUI_TRANSLATORMANAGER_H

#include <QObject>
#include <QMap>
#include <QTranslator>
#include <QMutex>

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
