/**
 * (C) 2010-2012 Alibaba Group Holding Limited.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * Version: $Id$
 *
 * ob_rowkey_phy_operator.h
 *
 * Authors:
 *   Junquan Chen <jianming.cjq@taobao.com>
 *
 */

#ifndef _OB_ROWKEY_PHY_OPERATOR_H
#define _OB_ROWKEY_PHY_OPERATOR_H 1

#include "common/ob_string.h"
#include "ob_phy_operator.h"

namespace oceanbase
{
  namespace sql
  {
    class ObRowkeyPhyOperator : public ObPhyOperator
    {
      public:
        virtual ~ObRowkeyPhyOperator() {};

        int get_next_row(const common::ObRow *&row);
        virtual int get_row_desc(const common::ObRowDesc *&row_desc) const;
        virtual int get_next_row(const common::ObString *&rowkey, const common::ObRow *&row) = 0;

      private:
        // disallow copy
        //ObRowkeyPhyOperator(const ObRowkeyPhyOperator &other);
        //ObRowkeyPhyOperator& operator=(const ObRowkeyPhyOperator &other);

      private:
        // data members
    };
  }
}

#endif /* _OB_ROWKEY_PHY_OPERATOR_H */
