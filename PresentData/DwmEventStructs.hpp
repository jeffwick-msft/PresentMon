/*
Copyright 2019 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// This file originally generated by etw_list
//     version:    39cbad322984eb15ebf4c422610241bcaf098e09
//     parameters: --show=all --output=c++ --event=MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory::Info --event=SCHEDULE_PRESENT::Start --event=SCHEDULE_SURFACEUPDATE::Info --provider=*dwm-core

namespace Microsoft_Windows_Dwm_Core {

struct __declspec(uuid("{9e9bba3c-2e38-40cb-99f4-9e8281425164}")) GUID_STRUCT;
static const auto GUID = __uuidof(GUID_STRUCT);

// Win7 GUID added manually:
namespace Win7 {
struct __declspec(uuid("{8c9dd1ad-e6e5-4b07-b455-684a9d879900}")) GUID_STRUCT;
static const auto GUID = __uuidof(GUID_STRUCT);
}

enum class Keyword : uint64_t {
    DwmCore                               = 0x1,
    DetailedFrameInformation              = 0x2,
    FrameDrawInconsistencyInformation     = 0x4,
    DwmFrameRate                          = 0x8,
    AnimationScreenOff                    = 0x10,
    ProcessAttribution                    = 0x20,
    FrameVisualization                    = 0x10000,
    LowOverheadSmoothnessTracking         = 0x20000,
    FrameVisualizationExtra               = 0x40000,
    DwmHolographic                        = 0x80000,
    WorkPerFrame                          = 0x100000,
    DwmInput                              = 0x200000,
    DwmDiagTrack                          = 0x400000,
    win_ResponseTime                      = 0x1000000000000,
    Microsoft_Windows_Dwm_Core_Diagnostic = 0x8000000000000000,
};

enum class Level : uint8_t {
    win_Error         = 0x2,
    win_Informational = 0x4,
    win_Verbose       = 0x5,
};

enum class Channel : uint8_t {
    Microsoft_Windows_Dwm_Core_Diagnostic = 0x10,
};

// Event descriptors:
#define EVENT_DESCRIPTOR_DECL(name_, id_, version_, channel_, level_, opcode_, task_, keyword_) struct name_ { \
    static uint16_t const Id      = id_; \
    static uint8_t  const Version = version_; \
    static uint8_t  const Channel = channel_; \
    static uint8_t  const Level   = level_; \
    static uint8_t  const Opcode  = opcode_; \
    static uint16_t const Task    = task_; \
    static Keyword  const Keyword = (Keyword) keyword_; \
};

EVENT_DESCRIPTOR_DECL(MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory_Info, 0x0040, 0x00, 0x10, 0x05, 0x00, 0x003f, 0x8000000000000001)
EVENT_DESCRIPTOR_DECL(SCHEDULE_PRESENT_Start                                         , 0x000f, 0x00, 0x10, 0x04, 0x01, 0x000d, 0x8000000000000001)
EVENT_DESCRIPTOR_DECL(SCHEDULE_SURFACEUPDATE_Info                                    , 0x00c4, 0x00, 0x10, 0x04, 0x00, 0x007f, 0x8000000000000001)

// These events added manually:
struct FlipChain_Pending  { static uint16_t const Id = 0x0045; };
struct FlipChain_Complete { static uint16_t const Id = 0x0046; };
struct FlipChain_Dirty    { static uint16_t const Id = 0x0065; };

#undef EVENT_DESCRIPTOR_DECL

#pragma warning(push)
#pragma warning(disable: 4200) // nonstandard extension used: zero-sized array in struct

#pragma pack(push)
#pragma pack(1)

struct MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory_Info_Struct {
    uint32_t    hr;
    uint32_t    cTokenCount;
};

struct SCHEDULE_PRESENT_Start_Struct {
    uint64_t    tCurrent;
    uint64_t    tPresent;
    uint64_t    cRefreshCurrent;
    uint64_t    cRefreshPresent;
    uint32_t    fForce;
};

struct SCHEDULE_SURFACEUPDATE_Info_MemberStruct_1_Struct {
    uint32_t    lowpart;
    uint32_t    highpart;
};

struct SCHEDULE_SURFACEUPDATE_Info_Struct {
    struct SCHEDULE_SURFACEUPDATE_Info_MemberStruct_1_Struct luidSurface[1];
    uint64_t    bindId;
    uint64_t    PresentCount;
    uint64_t    fenceValue;
    uint32_t    bDirectFlip;
    uint32_t    DXGI_ALPHA_MODE;
    uint64_t    hmonAssociation;
    uint32_t    bStereoPreferRight;
    uint32_t    bTemporaryMono;
    uint32_t    bSwapPool;
    uint32_t    BufferContentType;
    uint32_t    bIndependentFlip;
    uint32_t    uPesentDuration;
    uint32_t    BufferRealizationType;
    uint32_t    uRealizationIndex;
    uint64_t    hDxSurface;
};

#pragma pack(pop)
#pragma warning(pop)

}