/* -*- mode: c++ -*-
 * Kaleidoscope-Hardware-Virtual -- Test and debug Kaleidoscope sketches, plugins, and core
 * Copyright (C) 2017  Craig Disselkoen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Logging.h"

namespace kaleidoscope {
namespace logging {

static bool __verboseOutputEnabled = true;

void toggleVerboseOutput(bool state) {
  __verboseOutputEnabled = state;
}

bool verboseOutputEnabled() {
  return __verboseOutputEnabled;
}

} // namespace logging
} // namespace kaleidoscope