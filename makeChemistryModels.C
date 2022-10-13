/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2011-2018 OpenFOAM Foundation
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

InClass
    Foam::psiChemistryModel

Description
    Creates chemistry model instances templated on the type of thermodynamics

\*---------------------------------------------------------------------------*/

#include "makeChemistryModel.H"

#include "psiReactionThermo.H"
#include "rhoReactionThermo.H"

#include "PyJacChemistryModel.H"
#include "TDACChemistryModel.H"
#include "thermoPhysicsTypes.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
    // Make base types
    makeChemistryModel(psiReactionThermo);
    makeChemistryModel(rhoReactionThermo);

    // Chemistry moldels based on sensibleEnthalpy
    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constGasHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        gasHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constIncompressibleGasHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        incompressibleGasHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        icoPoly8HThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constFluidHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constAdiabaticFluidHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constHThermoPhysics
    );


    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constGasHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        gasHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constIncompressibleGasHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        incompressibleGasHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        icoPoly8HThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constFluidHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constAdiabaticFluidHThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constHThermoPhysics
    );


    // Chemistry moldels based on sensibleInternalEnergy
    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constGasEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        gasEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constIncompressibleGasEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        incompressibleGasEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        icoPoly8EThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constFluidEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constAdiabaticFluidEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        psiReactionThermo,
        constEThermoPhysics
    );


    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constGasEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        gasEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constIncompressibleGasEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        incompressibleGasEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        icoPoly8EThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constFluidEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constAdiabaticFluidEThermoPhysics
    );

    makeChemistryModelType
    (
        PyJacChemistryModel,
        rhoReactionThermo,
        constEThermoPhysics
    );


}

// ************************************************************************* //
