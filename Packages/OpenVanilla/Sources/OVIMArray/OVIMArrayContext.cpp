//
// OVIMArrayContext.cpp
//
// Copyright (c) 2004-2012 Lukhnos Liu (lukhnos at openvanilla dot org)
//
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//

#include "OVIMArrayContext.h"
#include "OVIMArray.h"
#include "LegacyOVIMArray.h"
#include "LegacyOVFrameworkWrapper.h"

using namespace OpenVanilla;

OpenVanilla::OVIMArrayContext::OVIMArrayContext(::OVIMArrayContext* legacyContext)
    : m_legacyContext(legacyContext)
{
}

OpenVanilla::OVIMArrayContext::~OVIMArrayContext()
{
    delete m_legacyContext;
}

void OpenVanilla::OVIMArrayContext::startSession(OVLoaderService* loaderService)
{
    m_legacyContext->clear();
}

void OpenVanilla::OVIMArrayContext::stopSession(OVLoaderService* loaderService)
{
    m_legacyContext->clear();
}

bool OpenVanilla::OVIMArrayContext::handleKey(OVKey* key, OVTextBuffer* readingText, OVTextBuffer* composingText, OVCandidateService* candidateService, OVLoaderService* loaderService)
{
    composingText->appendText(readingText->composedText());
    OVLegacyKeyCodeWrapper legacyKey(key);
    OVLegacyBufferWrapper legacyBuffer(composingText, candidateService);
    OVLegacyCandidateWrapper legacyCandidate(candidateService, loaderService);
    OVLegacyServiceWrapper legacyService(loaderService, composingText);

    int handled = m_legacyContext->keyEvent(&legacyKey, &legacyBuffer, &legacyCandidate, &legacyService);
    if (m_legacyContext->isComposing()) {
        readingText->clear();
    } else {
        readingText->setText(composingText->composedText());
        composingText->setText(""); // use `setText` to keep its commit state
    }
    return handled;
}

bool OpenVanilla::OVIMArrayContext::candidateSelected(OVCandidateService* candidateService, const string& text, size_t index, OVTextBuffer* readingText, OVTextBuffer* composingText, OVLoaderService* loaderService)
{
    return false;
}
