// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraShakeRedo.h"

UCameraShakeRedo::UCameraShakeRedo()
{
	OscillationDuration = 0.25f;
	OscillationBlendInTime = 0.2f;
	OscillationBlendOutTime = 0.2f;
	LocOscillation.X.Amplitude = 1.f;
	LocOscillation.X.Frequency = 50.f;
	LocOscillation.X.InitialOffset = EInitialOscillatorOffset::EOO_OffsetZero;
	LocOscillation.X.Waveform = EOscillatorWaveform::SineWave;
	LocOscillation.Y.Amplitude = 1.f;
	LocOscillation.Y.Frequency = 50.f;
	LocOscillation.Y.InitialOffset = EInitialOscillatorOffset::EOO_OffsetRandom;
	LocOscillation.Y.Waveform = EOscillatorWaveform::SineWave;
	LocOscillation.Z.Amplitude = 1.f;
	LocOscillation.Z.Frequency = 50.f;
	LocOscillation.Z.InitialOffset = EInitialOscillatorOffset::EOO_OffsetRandom;
	LocOscillation.Z.Waveform = EOscillatorWaveform::SineWave;

}
