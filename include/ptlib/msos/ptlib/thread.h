/*
 * thread.h
 *
 * Thread of execution control class.
 *
 * Portable Windows Library
 *
 * Copyright (c) 1993-1998 Equivalence Pty. Ltd.
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.0 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is Portable Windows Library.
 *
 * The Initial Developer of the Original Code is Equivalence Pty. Ltd.
 *
 * Portions are Copyright (C) 1993 Free Software Foundation, Inc.
 * All Rights Reserved.
 *
 * Contributor(s): ______________________________________.
 *
 * $Revision: 27977 $
 * $Author: rjongbloed $
 * $Date: 2012-07-09 03:53:24 -0500 (Mon, 09 Jul 2012) $
 */


///////////////////////////////////////////////////////////////////////////////
// PThread

  public:
    HANDLE GetHandle() const { return threadHandle; }
    void Win32AttachThreadInput();

  protected:
    HANDLE threadHandle;

  private:
    void CleanUp();
    static UINT __stdcall MainFunction(void * thread);

// End Of File ///////////////////////////////////////////////////////////////
