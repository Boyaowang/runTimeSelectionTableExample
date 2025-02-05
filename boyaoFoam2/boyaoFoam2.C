/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) 2021 OpenFOAM Foundation
     \\/     M anipulation  |
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

Application
    boyaoStudyFoam

Description

\*---------------------------------------------------------------------------*/


#include "boyaoClass3.H"
using namespace Foam;


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
// Main program:

int main(int argc, char *argv[])
{
  // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

  Info << *(Foam::boyaoClass3::dictionaryConstructorTablePtr_) << nl;
  word modelName = "boyaoAddRunTime";
  autoPtr<Foam::boyaoClass3> boyaoObj1
  (
    Foam::boyaoClass3::New(modelName)
  );

  boyaoObj1->helloBoyaoClass3();

  // for (auto it = BoyaoClass3::dictionaryConstructorTablePtr_->begin() ;
  //           it != BoyaoClass3::dictionaryConstructorTablePtr_->end(); it++) {
    //   Info << it.key() << nl;
    // }


}


// ************************************************************************* //
