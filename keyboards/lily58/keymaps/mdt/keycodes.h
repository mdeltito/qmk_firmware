#pragma once

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
