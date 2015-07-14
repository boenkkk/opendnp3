/**
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

#include "MasterSecAuthFixture.h"

#include <testlib/BufferHelpers.h>

using namespace testlib;

namespace opendnp3
{	
	MasterSecAuthFixture::MasterSecAuthFixture(const MasterParams& params, ITaskLock& lock) :
		log(),
		exe(),
		meas(),
		lower(log.root),
		application(),
		crypto(),
		userDB(),
		context(exe, log.root, lower, meas, application, params, lock, crypto, userDB),
		master(context)				
	{
		
	}

	void MasterSecAuthFixture::SendToMaster(const std::string& hex)
	{
		HexSequence hs(hex);
		master.OnReceive(hs.ToReadOnly());
	}

	bool MasterSecAuthFixture::ConfigureUser(opendnp3::User user, UpdateKeyMode mode, uint8_t keyRepeat)
	{
		secauth::UpdateKey key(keyRepeat, mode);
		return userDB.ConfigureUser(user, key);
	}

}



