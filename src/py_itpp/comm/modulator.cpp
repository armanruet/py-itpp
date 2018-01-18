//! -------------------------------------------------------------------------
//!
//! Copyright (C) 2016 CC0 1.0 Universal (CC0 1.0)
//!
//! The person who associated a work with this deed has dedicated the work to
//! the public domain by waiving all of his or her rights to the work
//! worldwide under copyright law, including all related and neighboring
//! rights, to the extent allowed by law.
//!
//! You can copy, modify, distribute and perform the work, even for commercial
//! purposes, all without asking permission.
//!
//! See the complete legal text at
//! <https://creativecommons.org/publicdomain/zero/1.0/legalcode>
//!
//! -------------------------------------------------------------------------

#include "modulator.h"

BOOST_PYTHON_MODULE(modulator)
{
  /*!
   * \ingroup modulators
   * \brief Soft demodulation methods
   */
  boost::python::enum_<itpp::Soft_Method>("soft_method")
      .value("LOGMAP", itpp::LOGMAP)
      .value("APPROX", itpp::APPROX)
  ;

  // ----------------------------------------------------------------------
  // Type definitions of Modulator_1D and Modulator_2D
  // ----------------------------------------------------------------------

  /*!
   * \relates Modulator
   * \brief Definition of 1D Modulator (with real symbols)
   */
  generate_modulator<double>("modulator_1d");

  /*!
     * \relates Modulator
     * \brief Definition of 2D Modulator (with complex symbols)
     */
  generate_modulator<std::complex<double> >("modulator_2d");
}
