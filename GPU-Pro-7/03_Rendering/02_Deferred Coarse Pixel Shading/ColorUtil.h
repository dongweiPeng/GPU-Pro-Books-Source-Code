/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
//
// Modified by StephanieB5 to remove dependencies on DirectX SDK in 2017
//
/////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <DirectXMath.h>

// Simple function for getting bright colors...
// Hue in [0, 1)
DirectX::XMVECTOR HueToRGB(float hue);