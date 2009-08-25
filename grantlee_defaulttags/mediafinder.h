/*
  This file is part of the Grantlee template system.

  Copyright (c) 2009 Stephen Kelly <steveire@gmail.com>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License version 3 only, as published by the Free Software Foundation.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License version 3 for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef MEDIAFINDER_H
#define MEDIAFINDER_H

#include "node.h"

using namespace Grantlee;

class MediaFinderNodeFactory: public AbstractNodeFactory
{
public:
  MediaFinderNodeFactory();

  Node* getNode( const QString &tagContent, Parser *p ) const;

};

class MediaFinderNode : public Node
{
  Q_OBJECT
public:
  MediaFinderNode( QList<FilterExpression> mediaExpressionList, QObject *parent = 0 );

  QString render( Context *c );

private:
  QList<FilterExpression> m_mediaExpressionList;
};


#endif