// Functor class for computing the distance between points.
class hash_distance
{
public:
    hash_distance(const Point& reference)
        : m_reference(reference)
    {
    }

    size_t operator()(const Point& pt) const {
        return euclidean_distance(pt, m_reference);
    }

private:
    Point m_reference;
};