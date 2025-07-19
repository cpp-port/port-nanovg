struct gl_error_exception
{

   int m_iGlErrorException;

   gl_error_exception(int iGlError) :
      m_iGlErrorException(iGlError)
   {

   }

};

void __glnvg__throw_exception(int iGlError)
{

   throw gl_error_exception(iGlError);
}
extern "C" void glnvg__throw_exception(int iGlError)
{

   __glnvg__throw_exception(iGlError);


}

