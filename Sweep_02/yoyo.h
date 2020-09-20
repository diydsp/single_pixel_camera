class Yoyo
{

public:
  Yoyo( int32_t phase, int32_t dir, 
        int32_t phase_delta_pos, int32_t phase_delta_neg, 
        int32_t limit_high, int32_t limit_low )
    : m_phase{ phase }, m_dir{ dir }, 
      m_phase_delta_pos{ phase_delta_pos }, m_phase_delta_neg{ phase_delta_neg },
      m_limit_low{ limit_low }, m_limit_high{ limit_high }
  {
    // no further init
  }

  int32_t update()
  {
    if( m_dir > 0)
    {
      m_phase += m_phase_delta_pos;
      if( m_phase > m_limit_high ){ m_dir = -1; m_phase = m_limit_high; }
    } 
    else
    {
      m_phase += m_phase_delta_neg;
      if( m_phase < m_limit_low ){ m_dir = 1; m_phase = m_limit_low; }
    }
    
    return m_phase;
  }

private:
  int32_t m_dir;
  int32_t m_phase;
  int32_t m_phase_delta_pos;
  int32_t m_phase_delta_neg;
  int32_t m_limit_high;
  int32_t m_limit_low;

};
