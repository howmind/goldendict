/* This file is (c) 2008-2009 Konstantin Isakov <ikm@users.berlios.de>
 * Part of GoldenDict. Licensed under GPLv3 or later, see the LICENSE file */

#ifndef __ORDERANDPROPS_HH_INCLUDED__
#define __ORDERANDPROPS_HH_INCLUDED__

#include "ui_orderandprops.h"
#include "groups_widgets.hh"

class OrderAndProps: public QWidget
{
  Q_OBJECT;

public:

  OrderAndProps( QWidget * parent, Config::Group const & dictionaryOrder,
                 Config::Group const & inactiveDictionaries,
                 std::vector< sptr< Dictionary::Class > > const & allDictionaries );

  Config::Group getCurrentDictionaryOrder() const;
  Config::Group getCurrentInactiveDictionaries() const;

private:

  Ui::OrderAndProps ui;

};

#endif
