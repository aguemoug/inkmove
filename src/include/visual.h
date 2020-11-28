
/*
 * Filename: /data/dev/manime-engine-2/src/graphics/visual.h
 * Path: /data/dev/manime-engine-2/src/graphics
 * Created Date: Friday, November 27th 2020, 8:15:38 pm
 * Author: ghemougui abdessettar
 *
 * Copyright (c) 2020 Your Company
 */

#pragma once
#include "common.h"
namespace me {
/*
visual is the base class for all the objects to be rendred
on screen
*/

class Visual {
  // the visual transform  location + rotation + scale
  Transform transform;
};

} // namespace me
