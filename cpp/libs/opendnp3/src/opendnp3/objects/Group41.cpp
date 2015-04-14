//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2013 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#include "Group41.h"

#include <openpal/serialization/Format.h>
#include <openpal/serialization/Parse.h>
#include "opendnp3/app/MeasurementFactory.h"
#include "opendnp3/app/WriteConversions.h"

using namespace openpal;

namespace opendnp3 {

bool Group41Var1::Read(ReadBufferView& buffer, Group41Var1& output)
{
  return Parse::Many(buffer, output.value, output.status);
}

bool Group41Var1::Write(const Group41Var1& arg, openpal::WriteBufferView& buffer)
{
  return Format::Many(buffer, arg.value, arg.status);
}


bool Group41Var1::ReadTarget(ReadBufferView& buff, AnalogOutputInt32& output)
{
  Group41Var1 value;
  if(Read(buff, value))
  {
    output = AnalogOutputInt32Factory::From(value.value, value.status);
    return true;
  }
  else
  {
    return false;
  }
}

bool Group41Var1::WriteTarget(const AnalogOutputInt32& value, openpal::WriteBufferView& buff)
{
  return Group41Var1::Write(ConvertGroup41Var1::Apply(value), buff);
}


bool Group41Var2::Read(ReadBufferView& buffer, Group41Var2& output)
{
  return Parse::Many(buffer, output.value, output.status);
}

bool Group41Var2::Write(const Group41Var2& arg, openpal::WriteBufferView& buffer)
{
  return Format::Many(buffer, arg.value, arg.status);
}


bool Group41Var2::ReadTarget(ReadBufferView& buff, AnalogOutputInt16& output)
{
  Group41Var2 value;
  if(Read(buff, value))
  {
    output = AnalogOutputInt16Factory::From(value.value, value.status);
    return true;
  }
  else
  {
    return false;
  }
}

bool Group41Var2::WriteTarget(const AnalogOutputInt16& value, openpal::WriteBufferView& buff)
{
  return Group41Var2::Write(ConvertGroup41Var2::Apply(value), buff);
}


bool Group41Var3::Read(ReadBufferView& buffer, Group41Var3& output)
{
  return Parse::Many(buffer, output.value, output.status);
}

bool Group41Var3::Write(const Group41Var3& arg, openpal::WriteBufferView& buffer)
{
  return Format::Many(buffer, arg.value, arg.status);
}


bool Group41Var3::ReadTarget(ReadBufferView& buff, AnalogOutputFloat32& output)
{
  Group41Var3 value;
  if(Read(buff, value))
  {
    output = AnalogOutputFloat32Factory::From(value.value, value.status);
    return true;
  }
  else
  {
    return false;
  }
}

bool Group41Var3::WriteTarget(const AnalogOutputFloat32& value, openpal::WriteBufferView& buff)
{
  return Group41Var3::Write(ConvertGroup41Var3::Apply(value), buff);
}


bool Group41Var4::Read(ReadBufferView& buffer, Group41Var4& output)
{
  return Parse::Many(buffer, output.value, output.status);
}

bool Group41Var4::Write(const Group41Var4& arg, openpal::WriteBufferView& buffer)
{
  return Format::Many(buffer, arg.value, arg.status);
}


bool Group41Var4::ReadTarget(ReadBufferView& buff, AnalogOutputDouble64& output)
{
  Group41Var4 value;
  if(Read(buff, value))
  {
    output = AnalogOutputDouble64Factory::From(value.value, value.status);
    return true;
  }
  else
  {
    return false;
  }
}

bool Group41Var4::WriteTarget(const AnalogOutputDouble64& value, openpal::WriteBufferView& buff)
{
  return Group41Var4::Write(ConvertGroup41Var4::Apply(value), buff);
}



}
