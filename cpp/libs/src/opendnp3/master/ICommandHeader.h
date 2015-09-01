/*
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */
#ifndef OPENDNP3_ICOMMAND_HEADER_H
#define OPENDNP3_ICOMMAND_HEADER_H

#include "opendnp3/master/HeaderInfo.h"
#include "opendnp3/app/parsing/ICollection.h"

#include "opendnp3/app/ControlRelayOutputBlock.h"
#include "opendnp3/app/AnalogOutput.h"
#include "opendnp3/app/Indexed.h"

namespace opendnp3
{

class HeaderWriter;

/**
* Represents an object header of command objects (CROB or AO)
*/
class ICommandHeader
{
public:

	virtual ~ICommandHeader() {}
	
	/// Write all of the headers to an ASDU 	
	virtual bool Write(HeaderWriter&) = 0;

	// --- each overriden classs will only override one of these ---

	virtual bool VerifySelect(const HeaderInfo& info, const ICollection<Indexed<ControlRelayOutputBlock>>& commands) { return false; }
	virtual bool VerifySelect(const HeaderInfo& info, const ICollection<Indexed<AnalogOutputInt16>>& commands) { return false; }
	virtual bool VerifySelect(const HeaderInfo& info, const ICollection<Indexed<AnalogOutputInt32>>& commands)  { return false; }
	virtual bool VerifySelect(const HeaderInfo& info, const ICollection<Indexed<AnalogOutputFloat32>>& commands)  { return false; }
	virtual bool VerifySelect(const HeaderInfo& info, const ICollection<Indexed<AnalogOutputDouble64>>& commands)  { return false; }

	// --- each overriden classs will only override one of these ---

	virtual bool VerifyOperate(const HeaderInfo& info, const ICollection<Indexed<ControlRelayOutputBlock>>& commands) { return false; }
	virtual bool VerifyOperate(const HeaderInfo& info, const ICollection<Indexed<AnalogOutputInt16>>& commands) { return false; }
	virtual bool VerifyOperate(const HeaderInfo& info, const ICollection<Indexed<AnalogOutputInt32>>& commands)  { return false; }
	virtual bool VerifyOperate(const HeaderInfo& info, const ICollection<Indexed<AnalogOutputFloat32>>& commands)  { return false; }
	virtual bool VerifyOperate(const HeaderInfo& info, const ICollection<Indexed<AnalogOutputDouble64>>& commands)  { return false; }
};

}

#endif
