# OpenFluxl
Open Source Digital Microfluidic Device

> This project is currently under development at Waag Society's Open Wetlab

# OpenFluxl v.0.1 Release Notes

# Circuit

The OpenFluxl Device needs to apply a voltage of approx. 300V to individual fluxls. In order to generate this potential from 12V a Boost Converter circuit is necessary.

The circuit is based on: http://reibot.org/2011/08/07/intro-to-boost-converter/

A TVS diode is added in the circuit over the main capacitor as an additional safety measure.

![Circuit Scheme](/Pictures/OpenFluxl Circuit v.0.1.png)

# Arduino Code

The Arduino code is based on: http://reibot.org/2011/08/07/intro-to-boost-converter/

# PCB

For initial testing the PCB of GuadiLabs OpenDrop is used: http://www.gaudi.ch/GaudiLabs/?attachment_id=440

# Components

Only through hole components have been used for breadboard prototyping.

The 1000V USB prototector is optional, for the brave.

# Pictures
Boost Converter:
![Boost Converter](/Pictures/OpenFluxl v.0.1 Voltage Booster.jpg)

Fluxl Controller:
![Fluxl Controller](/Pictures/OpenFluxl v.0.1 Fluxl Controller.jpg)